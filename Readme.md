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
| `5_Simulations`      | Simulation in SimulIDE |

## Final Implementation
![](https://github.com/dikshadutta1999/STEPin_SeatHeater/blob/main/5_Simulation/6.png)

## Activities Description
|Activity|Description|
|:--:|:--:|
|Activity 1| Blink the LED when the passenger is in the seat and the heater is pressed|
|Activity 2| Convert the analog signal from the temperature sensor to the digital value|
|Activity 3| Generate the PWM signal according to the converted digital value and print temperature value in serial moniter|

## Assumptions
* Switches are used to the realize the passenger in the seat and the press of the heater
* The temperature sensor is realized using the potentiometer


#### Code Quality
<img src="https://www.code-inspector.com/project/27805/score/svg" />
<img src="https://www.code-inspector.com/project/27805/status/svg" />
