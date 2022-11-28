

#define BLYNK_PRINT Serial 
#define BLYNK_TEMPLATE_ID           "TMPLp11GfibS"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "OeV_dFgE1IOOdCnpJAZ-MT81LjWrJy2V"
#include<ESP8266WiFi.h> // ESP8266 & NodeMCU library
#include<Servo.h> // Servo Moto SG90 Library
#include <HCSR04.h>
#include <BlynkSimpleEsp8266.h>
#include <Blynk.h>




#define trig_us D1  // Trigger pin for both ultrasonic sensor.
#define echo_us1 D2 // Echo pin for 1st ultrasonic sensor.
#define echo_us2 D3 // Echo pin for 2nd ultrasonic sensor.
#define motor_pin D7 // D7 or GPIO2 pin for Servo-motor control.
#define SM_pin A0 // Raindrop sensor digital pin
#define IR_pin D6 // IR sensor digital pin

int depth=20;




Servo s;  // Declaring an object for servo class
int c=0;
int duration = 0, RD_value = 0, IR_value = 0; // Variables for reading raindrop sensor & IR sensor Values
int t1, d1, t2, d2; // Variables for measuring system
int drylevel, wetlevel; // Float Variables for bin levels
float h = 20.0; // Height of Bins
int runner = 0; // Variable for selecting Segregation & Uploading functions
int time1 = 0; //for using as time
BlynkTimer timer;

char auth[] = BLYNK_AUTH_TOKEN;
const char *ssid = "U2"; // WiFi Name (SSID)
const char *pswd = "3K888v55"; // WiFi Password
const char *host = "http://localhost/NewFolder/wasteman/"; // Webpage (host) to display Bin Levels
const int httpPort = 80; // Host port
int sensorValue=0;

WiFiClient client; 

void setup() {
  Serial.begin(115200); // Serial Monitor baud-rate
  pinMode(trig_us, OUTPUT); 
  pinMode(echo_us1, INPUT); 
  pinMode(trig_us, OUTPUT); // making Trigger as output
  pinMode(echo_us1, INPUT); // making Echo 1 as input
  pinMode(echo_us2, INPUT); // making Echo 2 as input
  //pinMode(SM_pin, INPUT); // RD sensor pin
  pinMode(IR_pin, INPUT); // IR sensor pin
  pinMode(A0,INPUT);//soilmoisture analog pin
  s.attach(motor_pin);  // Servo motor
  s.write(90);  // Setting Servo motor to 90 deg initially
  wifiConnecting(); // Function for connecting to WiFi.
  wifiConnected(); // Function to display IP Address after connection.
  Blynk.begin(auth, ssid, pswd);
  //timer.setInterval(1000L, blynkApplication);
}

void loop() {
  
  
  
  sensorValue=analogRead(A0);
  
  Serial.println(sensorValue);
  //delay(1000);
  Blynk.run();
  //moisture=analogRead(A0);//read state of soil moisture
  //Serial.print(moisture);
  //outputvalue=map(moisture,1023,200,0,100);
  //Serial.println(outputvalue);
  //int value = (outputvalue - 100) * -1;
  //Serial.println(value);
  //delay(100);
  if(WiFi.status() != WL_CONNECTED) { // checking frequntly for WiFi Connection
    Serial.println("WiFi Disconnected");
    Serial.println("Retrying to connect.....");
    if(WiFi.status() == WL_CONNECTED) { // Checking WiFi connection status
      wifiConnected(); // Function to display IP Address after connection.
    } else {
      Serial.println("Unable to connect");
    }
  }
  
  if(runner%5 ==0) { // Waste Detections works for every 5 seconds.
    detectWaste();
  }
  if(runner%6 == 0) { // Measuiring ststem works for every 1 minute.
    measuringSystem();
    blynkApplication();
    uploadingValues();
    runner = 1;
  }
  runner = runner + 1; // incrementing timer.
  delay(1000);
}

void detectWaste() {
  IR_value = digitalRead(IR_pin);
  if(IR_value == 1) {
    Serial.println("ir value");
    Serial.println(IR_value);
    Serial.println("No waste");
    
  }
  else {
    sensorValue=analogRead(A0);
    RD_value = digitalRead(SM_pin);
    Blynk.logEvent("wastegiven");
    if(sensorValue <= 1024 && sensorValue >=990) {
      Serial.println("Dry Waste detected.");
      Blynk.logEvent("drywaste");
      detected_dry();
    }
    else {
      Serial.println("Wet Waste detected.");
      Blynk.logEvent("wetwaste");
      detected_wet();
    }
  }
}

void detected_wet() {
  s.write(170);
  delay(300);
  s.write(90);
}

void detected_dry() {
  s.write(15);
  delay(300);
  s.write(90);
}

void measuringSystem() {
  
    digitalWrite(trig_us, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_us, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_us, LOW);
    duration = pulseIn(echo_us1, HIGH);
    c = duration * 0.034 / 2; //formula to calculate the distance for ultrasonic sensor
  
   
    if ( c == 0 ) {
    Serial.println("Failed to read from DHT sensor!");
    Serial.print(c);
    //return;
  }else{
    Serial.print("distance= ");
    Serial.print(c);
    Serial.println();
  }
/*
  digitalWrite(trig_us, LOW);
  delayMicroseconds(3);
  digitalWrite(trig_us, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_us, LOW);
  t1 = pulseIn(echo_us1, HIGH);
  d1 = t1 * 0.034 / 2;
  delay(500);
  digitalWrite(trig_us, LOW);
  delayMicroseconds(3);
  digitalWrite(trig_us, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_us, LOW);
  t2 = pulseIn(echo_us2, HIGH);
  d2 = t2 * 0.034 / 2;

  drylevel = ((h - d1) / h) * 100;
  Serial.println("Dryleveltesting" + drylevel);*/
  //wetlevel = ((h - d2) / h) * 100;
}

void uploadingValues() {
  Serial.println("Dry Level = " + String(drylevel) + " Wet Level = " + String(wetlevel));
  Serial.println("Connecting to host to upload values");
  if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
  }
  if (d1 <= h) {
    String url = "/api/in/insert.php?drylevel=" + String(drylevel) + "&wetlevel=" + String(wetlevel);
    Serial.println("Requesting URL: ");
    Serial.print(url);
    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                  "Host: " + host + "\r\n" +
                  "Connection: close\r\n\r\n");
    delay(500);
    while (client.available()) {
      String line = client.readStringUntil('\r');
      Serial.print(line);
    }
//    Serial.println();
    Serial.println("Closing connection");
  }
  
}

void wifiConnecting() {
  Serial.print("Connecting to ");
  Serial.print(ssid);
  WiFi.begin(ssid, pswd);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if(time1 == 60) { // waits for WiFi for 30 seconds
      Serial.println("Error connecting to Wifi.");
      break;
    }
    time1++;
  }
  if(WiFi.status() == WL_CONNECTED) { // Checking WiFi connection status
    wifiConnected(); 
  }
}

void wifiConnected() {
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void blynkApplication() {
  Blynk.virtualWrite(V0, sensorValue);
  Blynk.virtualWrite(V1, c);
  //lcd.print(0,1, "distance: "+String(d1)+"cm");
  //Blynk.virtualWrite(V2, wetlevel);
  
  
  if(drylevel >= 80 || wetlevel >= 80) {
    if(drylevel >= 80) { /*Blynk.notify("Dry Bin is about to fill"); */}
    if(wetlevel >= 80) { /*Blynk.notify("Wet Bin is about to fill");*/ }
  }
  if(drylevel >= 80 && wetlevel >= 80) {
    /*Blynk.notify("Both bins are about to fill");*/
  }
  //Blynk.virtualWrite(V2, millis() / 1000);
}
