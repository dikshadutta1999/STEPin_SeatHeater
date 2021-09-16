# CAR SEAT HEATER
A seat heater is a pad or a cushion that encompasses an electric heating system which boosts up surface temperature 
of the automotive seat at the will of the driver.
In this project we firstly check if the heator is on and the person is seated. Then accordingly the Temperature is set 
using potentiometer and is displayed in the serial moniter.

## Folder Structure
|Folder             | Description |
|-------------------| -----------------------------------------|
| `1_Requirements`   | Documents detailing requirements and research|
| `2_Architecture`         | Documents specifying design details|
| `3_Implementation` | All code and documentation|
| `4_Test_plan`      | Documents with test plans and procedures|
| `5_Simulations`      | SimulIDE simulation file|

![](https://github.com/dikshadutta1999/STEPin_SeatHeater/blob/main/5_Simulation/6.png)

# Activities Description
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

