// Initial Code for the Iris flight computer
/* Key tasks:
 - Debug capability on boolean (Not used in flight)
 - Kalman filtering of sensor data
 - Reading of sensor data from both lines (min. 20Hz, ideally 100Hz)
 - Apogee detection baseed off kalman filtered data
 - Sensor failure handling
 - Flight state printout and debug to SD cards
   - In normal ops, one SD for flight data and another for errors / backup data
   - If data bus or sd card lost, all logged to one card
 - Simulated Pyro firing

   Strech Goals:
 - Bluetooth Debug
 - Demonstrated pyro firing
 - Continuity monitoring and pyro state checker ahead of pyro firing
 - Battery monitoring
 - Lockouts for pyros and other energetics
 - Seperate flight and ground modes based off startup locations.
*/

