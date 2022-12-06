# Title: Automated Waste Segregation and Monitoring System Using IoT (waste Management)


## About

As the world's population continues to grow, so does the problem of improper waste management in metropolitan areas. This has resulted in the spread of disease and illness. To minimize the risks to both the public and the environment, it is essential that waste segregation, transport, handling, and disposal are managed effectively and efficiently. Our project, " automated waste segregation and monitoring system using IOT" is designed to do just that. As technology progresses, we are able to develop automated solutions to prevent garbage build-up. The waste segregator is designed to provide an easy way to dispose of collected waste. The system consists of two bins - one for wet waste and one for dry waste. As we drop waste into the bin, it detects the waste and classifies it using different sensors connected to the system. The waste is then deflected into the respective bin. The deflection procedure is carried out by servo motors which are programmed according to the working. This facilitates processing the different kinds of waste as per the requirement. The garbage level in each bin is monitored using the ultrasonic sensors present in every bin. The notification is then sent to the app thus notifying the concerned authorities for emptying the bin. The whole setup brings about automation by using NodeMCU ESP8266, Ultrasonic sensors, Servo motor, IR sensor, Soil sensor, Arduino IDE, and Blynk Application and hence reduces the human intervention required in segregating the waste and provides a successful collection of the garbage from the bin at the appropriate time. The system uses sensor data to display the status of garbage bin levels on a website and also sends a signal to mobile if a bin is full, allowing garbage to be collected.

### Working Demonstration 


https://user-images.githubusercontent.com/106096161/206025553-c5f817cf-44f6-4741-87b6-e6cb3a999a21.mp4

### Working Demonstration 2

  

https://user-images.githubusercontent.com/106096161/206025604-8be53992-d7b6-4699-9e2c-f7bbda913eef.mp4

### Pictures
![1](https://user-images.githubusercontent.com/106096161/206025652-3bfcbd2f-06b9-401a-b8f4-f94ed6b5282c.jpg)

![2](https://user-images.githubusercontent.com/106096161/206025669-5cfd2285-b068-4e03-8ac6-1b9dd2588ebf.jpg)
![3](https://user-images.githubusercontent.com/106096161/206025687-61aaf61c-e714-49ff-95fa-6a6c8b75a2c1.jpg)
![4](https://user-images.githubusercontent.com/106096161/206025697-d4a8c7e4-2fd6-40bb-8fff-8c791aaa5a5c.jpg)
![expectedModel-diagram](https://user-images.githubusercontent.com/106096161/206025705-dd5ad870-dbde-410a-a27a-6b81daa1e634.jpg)

### Poster![poster](https://user-images.githubusercontent.com/106096161/206025787-b4d594e3-aca2-496e-bf09-aaec7b8a3df1.jpg)


#### report


`      `***Abstract*— As the world's population continues to grow, so does the problem of improper waste management in metropolitan areas. This has resulted in the spread of disease and illness. To minimize the risks to both the public and the environment, it is essential that waste segregation, transport, handling, and disposal are managed effectively and efficiently. Our project, " automated waste segregation and monitoring system using IOT" is designed to do just that. As technology progresses, we are able to develop automated solutions to prevent garbage build-up. The waste segregator is designed to provide an easy way to dispose of collected waste. The system consists of two bins - one for wet waste and one for dry waste. As we drop waste into the bin, it detects the waste and classifies it using different sensors connected to the system. The waste is then deflected into the respective bin. The deflection procedure is carried out by servo motors which are programmed according to the working. This facilitates processing the different kinds of waste as per the requirement. The garbage level in each bin is monitored using the ultrasonic sensors present in every bin. The notification is then sent to the app thus notifying the concerned authorities for emptying the bin. The whole setup brings about automation by using NodeMCU ESP8266, Ultrasonic sensors, Servo motor, IR sensor, Soil sensor, Arduino IDE, and Blynk Application and hence reduces the human intervention required in segregating the waste and provides a successful collection of the garbage from the bin at the appropriate time. The system uses sensor data to display the status of garbage bin levels on a website and also sends a signal to mobile if a bin is full, allowing garbage to be collected.**

`      `***Keywords— Microcontroller, Waste Management, Waste Segregator, NodeMCU ESP8266, (IoT) Internet of Things, Ultrasonic sensor, Servo motor, IR sensor, Soil sensor, Arduino IDE.***


1. Introduction

`  `In our day-to-day lives, traditionally, the cleaning crew collects trash from the litter bins at certain time intervals. There are a number of negative aspects to the conventional approach, including Bins filling up considerably more quickly when you live in a densely populated area. Waste building up due to a fixed pickup schedule. This poses a risk to health and environmental harm. This occurs because our existing system allows for various garbage pickup schedules. Furthermore, increased garbage pickup intervals are required in exceptional times (such as holidays, weekends, and festivals) and we can often witness that people working at the city corporations to collect waste often are absent on these days due to these special occasions. Sometimes, they arrive from their village homes later than scheduled. During these times, the litter containers are under additional stress, and they quickly fill up. Additionally, the lightweight garbage that usually accumulates at the top of the trash can often spills out, adding to the mess. This makes it difficult to keep the city's atmosphere clean and hygienic. The management of this garbage involves a number of variables, including collecting authorities at various levels, stakeholders, financial and economic considerations, the collection team and transportation, etc. Lots of untreated garbage is dumped in landfills as a result of the lack of effective separation techniques.


The research suggested in this article demonstrates how the Smart Garbage Segregation and Monitoring System solution enables cleaning staff to identify hygienic problems in real-time. An autonomous system is the Automated Waste Segregation and Monitoring System. The user may deposit garbage on the segregator table in a given space; sensors above the table identify it, classify it as either dry or wet trash, and then push the waste into the appropriate container. The procedure is repeated until all of the trash in the bins has been disposed of. When the trash can is full, an alarm sounds and a notification will be sent to the user. As soon as the user receives the notification through the app, they may empty the trash. They can also monitor the current waste level and waste levels on each container (dry waste container, wet waste container). Based on this data alone they may schedule to empty the bin early if one of the containers fills out before the other, thus making it much more environment friendly. They can monitor all these data through a mobile app and also through a website that retrieves the data sent from the microcontroller and displays in a percentile manner representing the total percentage of the bin currently filled up with waste. To sum things up we can say that these self-aware containers are equipped with various sensors such as Ultrasonic sensors, IR sensors, and Soil moisture sensors that may send vigilance memos to the company, enabling the appropriate authorities to plan the pickup of waste from the trash may. 

1. Proposed System Topology 

When there is nothing on the table, the tiny servo motor is set to 90 degrees. When an object is placed, an infrared sensor recognizes its presence. Waste is then placed over a soil moisture sensor, which measures moisture content. Depending on whether the waste falls into the dry or wet category, a servo motor pushes the object into the appropriate bin before returning to its original position. Both bins include infrared sensors at the brims that measure the amount of trash within each bin. When the trash can is full, a buzzer sounds. The Automatic Waste Segregator System is driven by the Microcontroller Arduino UNO. All the components connected to NodeMCU are programmed using the Arduino IDE. The program is written in Embedded C language, and it reads the input/output pins of the components. The conveyor belt system moves when it senses the garbage. The servo motors are present to deflect the wet, and dry waste into the specific bins. The wet waste is examined with the help of a Soil sensor. The measure of the dustbin level is calculated by the Ultrasonic sensor connected at the edge of the dustbin. When the dustbin is full, a notification will be sent to the cleaning authorities through a mobile app. The message is sent using the Wifi that provides communication between the bin and the authority.



1. Flowchart Of Proposed Algorithm

The suggested system detects garbage on board and classifies it as dry or wet waste depending on moisture content. It is subsequently deposited in the appropriate bins, and the bin levels are regularly checked. If the level of the bins surpasses 80 or 90% full, an automated signal is sent to the civil authorities, indicating that the bin will be 100% filled soon, allowing them to remove the bin as soon as possible. The entire procedure is fully automated, and the data is saved on the cloud to eliminate time delays and the participation of human labor. To make it easier for the users it also incorporates a mobile app through which they can also monitor the garbage level on each partition (dry waste or wet waste) of the bin and sends notifications accordingly. If the sensors in the wet waste compartment detect that the wet waste partition of the bin is close to filling up it will notify the authority to empty the bin even if the dry waste compartment still has space for garbages. The proposed system includes the NodeMCU ESP8266, Ultrasonic Sensor, IR Sensor, Soil Sensor, Servo motor, Arduino IDE, and Blynk Application for alerting authorities.

Fig. 2. Proposed system diagram

While working with all these sensors, measurements, and calculations need to be done beforehand to get a rough estimation, and for this, equations come in handy. For the proposed diagram, the following equations may come to use.

Speed of sound:

V = 340 m/s

V = 0.034 cm/µs

Time taken = distance/speed

so, t = s/v

t = 10/ 0.034 = 294 µs

Distance: 

s = speed of sound \* time is taken / 2

s = 0.034 \* 294 / 2

Percent of moisture:

(wet weight(g) - dry weight(g) / wet weight(g)) \* 100



1. Proposed System Design and Simulation

The suggested system controls waste material from overflowing garbage bins and sends an alarm/notification to the cleaner for waste pickup of that specific block. Waste collection status may be efficiently tracked using the expected system such as a mobile app. This project proposes a mechanism for monitoring the garbage level at regular intervals in order to prevent bin overflow. The ultrasonic sensor can detect and monitor the level of waste in the dustbin as well as its original level height. The Arduino IDE is programmed in such a way that when a certain level of filling is detected, information is sent to the user using wifi and also stores that information in the cloud for accessing by a mobile app too, requesting to the authorities that the dust bin needs to be cleaned.

1. Block diagram of the proposed system


The block diagram depicts the many sensors incorporated in the "Automated Waste Segregation System Using IOT" system. It consists of a NodeMCU ESP8266, ultrasonic sensors, a servo motor, an infrared sensor, a soil sensor, an Arduino IDE, and a Blynk application.

The created system comprises the following components: 1) Sensor node built with an Arduino IDE and linked with jumper wires; programming is saved in Node MCU and executed in C. 2) Wifi module that is linked to the sensor node to the IoT Cloud platform. 3) A cloud platform that houses the organization of secure IoT devices. The hardware and software development phases make up the system development phase. The Node MCU is utilized as a microcontroller for the sensor node and for programming during the hardware development process. The sensor node communicates with an ultrasonic sensor, which detects the depth of the garbage container. The pin is utilized in all digital pins; thus, no analog pins are used.


1. Circuit diagram of the proposed system

To avoid short-circuiting, connect the ground pin of the ultrasonic sensor to the ground pin of the Arduino IDE. The trig and echo pins are wired to pins 8 and 9, respectively. We established an Esp8266 WIFI connection. 

Ultrasonic sensors are installed on the bin's top or the garbage bin's lid. When the garbage begins to be full, the Ultrasonic sensor begins to gather data such as current garbage height that then calculates and identifies the percentage of the bin that is still yet to fill up while the sensor is attached to the waste bin at the chosen location. The data-gathering process is repeated using the waste bin model. Data or information is gathered and stored in the cloud and appropriate notifications are sent to the local authorities to do some tasks such as emptying a specific part of the bin. The system will notify the user and send a message to the user's cell phone through Wi-Fi.



Fig. 3. Data transferring diagram of the proposed system

1. Hardware Development and Testing

The main deciding factor of this project is the hardware we are using and for that, we are using nodeMCU8266 microprocessor in this project along with sensors such as soil moisture sensor, IR sensor, ultrasonic sensor, and servo motor. Testing is required because it confirms that the project will be fully functional and for that testing whether all the components are working properly is a must.

The main microprocessor that is being used in this project is the Node MCU, an open-source firmware and development kit that helps you to prototype your IOT product. As it includes firmware that runs on the ESP8266 Wi-Fi SOC from Express if Systems, and hardware that is based on the theESP-12 module. Node MCU provides access to the GPIO (General Purpose Input/output). 


Fig. 1. Developed hardware of the proposed system

IR sensor is an electronic device, that emits light in order to sense some objects in the surroundings. This IR sensor will be attached to the lid of the bin to sense the presence of the waste when it’s being placed in the bin. An IR sensor can measure the heat of an object as well as detects motion. 


Fig. 2. L293D Motor Driver IC

Soil moisture sensor can be used to test the moisture of soil, when the soil is having water shortage, the module output is at a high level, or else the work is at a low level. By using this sensor, we can identify whether the trash is wet or not, and based on this information the trash will be thrown into its separate location.

Using The Sensor, we can connect +5v to pin 2 and ground to pins 5 and 6.  Pins 4 and 5 should be connected to a particular transmitter and receiver pin of the controller. Output pins may be connected to any port pins and can be used for any application.

Fig. 3.       Soil moisture sensor

Servo motor is also used in this project in such a way that when garbage is thrown into the bin and the sensors detect it and determine whether the garbage is dry or not, the servo motor tilts in the direction of the desired bin so that the waste drop to its destination. 

`  `Fig. 4. Servo motor connection with the nodeMCU

Sensors and servo motor all are connected to the main microprocessor which is NodeMCU8266.


1. Results and Discussion

The purpose of this project was to segregate the waste into two types wet and dry so that it helps the environment and waste management. Our finished product is designed using NodeMCU Microcontroller, which is easy to operate and efficient. After segregation, When the bin exceeds its capacity, the system sends a notification to the Blynk app that the authorities can view and act accordingly.  Also, the system will transmit the level along with the unique ID provided to that bin. a web page is built to show the status of each bin. These details can be accessed by the concerned authorities from their place with the help of the internet and immediate action can be made. 


An IoT-based Automatic Waste Segregator was designed for efficient recycling. This system makes use of IoT like in the mentioned system. IoT-based Waste Collection bins using Wi-Fi technology were also designed to serve the purpose previously, Wi-Fi technology has been used in the monitoring section, and here is an example. 


1. Blynk app notification


After each waste get segregated, a notification is sent to the user notifying them that the waste is being segregated and also confirming the type of waste it is. It then monitors the level of the bin that is empty. If the bin the almost full it will show a notification about emptying the bin and keep alerting until the bin is properly cleaned. 

Fig. 2. System monitoring screen

Waste segregation was tested three times with both wet and dry waste, and every time it successfully identified the type of waste and dropped the waste to its supposed destination. Not only that, but it also succeeded in sending notifications to the user and notifying them of the type of waste it just identified.


|Waste Segregation table|
| :- |
|Date/Time|Wet waste|Dry waste|Bin level|
|27th November, 10:38 am|1|1|10%|
|27th November, 1:02 pm|2|1|25%|
|27th November, 8:38 pm|1|3|50%|
|28th November, 12:30 am|4|1|75%|





Fig. 3. Waste level in the bin

1. Conclusions

The waste segregator categorizes waste into two types: dry and wet. The suggested system would be capable of monitoring and managing the solid waste collection process. To manage the flow of garbage, the input part has an open and shut mechanism. This application can effectively address the issue of garbage disposal, which has shown to be a major hazard to any growing country. This application can effectively address the issue of garbage disposal, which has shown to be a major hazard to any growing country. The data gathered aids in calculating the amount of garbage and how it is degraded. In the future, the collected moist waste might be utilized as fertilizer. At the industrial level, waste segregation methods are dangerous to human health, and the procedure requires manual labor and does not achieve total segregation. By isolating garbage at the source, not only can waste be recycled, but the beauty of the surroundings may be preserved.





References

1. Garbage Monitoring  System Using Internet  of  Things:  Methods and Protocols, January 2019.
1. C. Vinothini, Tharini M, Saranya Sasikumar G, Ikash K, Karthick R, 2020, IoT-based Smart Garbage System Powered with Solar Cell, INTERNATIONAL JOURNAL OF ENGINEERING RESEARCH  & TECHNOLOGY (IJERT) Volume 09,  Issue 01(January 2020).
1. A. Zanella, N. Bui, A. Castellani, et al., “Internet of things for smart cities,” IEEE Internet Things J., vol. 1, no. 1, pp. 22-32,2014.
1. Navghane S, Killedar M S and Rohokale D V, “IoT Based Smart Garbage and Waste Collection Bin”, International Journal of Advanced Research in Electronics and Communication Engineering (IJARECE), Vol. 5, No. 5, pp. 1576-78, 2016.
1. N. Sathish Kumar, B. Vijaylakshmi, R. Jenifer Prathana, A. Shankar, "IOT Based Smart Garbage alert Naman Sharma, Nikhil Mishra, Paurvi Gupta, “IoT based garbage monitoring system", International Journal of Advance Research, Ideas and Innovations in Technology, pp.1850-1853,2018system using Arduino UNO", IEEE, 2016.
1. Kanchan Mahajan, J.S. Chitode, "Waste Bin Monitoring System Using Integrated Technologies", IJERT: International Journal of Innovative Research in Science Engineering and Technology, July 2014.
1. Belal Chowdhury, Morshed U Chowdhury, "RFID-based Real-time Smart Waste Management System", 2007 Australasian Telecommunication Network and Applications Conference, December 2nd-5th 2007.
1. F. Tueche, Y. Mohamadou, A. Djeukam, et al., “Embedded algorithm for QRS detection based on signal shape,” IEEE Trans. Instrum. Meas., vol. 70, 2021.
1. Development of IoT-Based Smart Dustbin Monitoring System, IJEAT, ISSN: 2249 – 8958, Volume-9 Issue-5, June 2020.
1. Household waste management system using IoT and Machine learning by Sonali Dubey, Pushpa Singh, Krishna Kant Singh, January 2020.
1. S. Vinoth Kumar, T. Senthil Kumaran, A. Krishna Kumar, and Mahantesh Mathapati, “Smart Garbage Monitoring and Clearance System using Internet of Things”, IEEE, pp. 184-189, 2017.
1. Mustafa M.R, Ku Azir K.N.F, “Smart Bin: Internet-of-Things Garbage Monitoring System”, MATEC Web of Conferences, pp. 1-4, 2017.




