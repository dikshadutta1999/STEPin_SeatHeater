# SEAT HEATER
The Vehicle Seat Heat Monitoring System is capable of maintaining of heat in the vehicles seats. In European countries, the temperature is very low and any electronic designer should make sure that his equipment should work efficiently in that whether. In our project, the sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly. Based on that our controller will set the heater to required temperature. The Heater will generate the heat and a LCD display will show requested the temperature.In our project we have used ATmega328 microcontroller along with temperature sensor, Push button, Heat generator, LED and LCD diplay,etc.

![]()

## Folder Structure
|Folder             | Description |
|-------------------| -----------------------------------------|
| `1_Requirements`   | Documents detailing requirements and research|
| `2_Architecture`         | Documents specifying design details|
| `3_Implementation` | All code and documentation|
| `4_Test_plan`      | Documents with test plans and procedures|
| `5_Simulations`      | SimulIDE simulation file|


|Activity|Description|
|:--:|:--:|
|Activity 1| Blink the LED when the passenger is in the seat and the heater is pressed|
|Activity 2| Convert the analog signal from the temperature sensor to the digital value|
|Activity 3| Generate the PWM signal according to the converted digital value and print temperature value in serial moniter|

# Assumptions
* Switches are used to the realize the passenger in the seat and the press of the heater
* The temperature sensor is realized using the potentiometer


#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Build](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml)|[![Cpp_Check](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e5facfbcad3a46f283b859d701dbe235)](https://www.codacy.com/gh/Manikanta489/EmbeddedC_stepin256240/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Manikanta489/EmbeddedC_stepin256240&amp;utm_campaign=Badge_Grade)

