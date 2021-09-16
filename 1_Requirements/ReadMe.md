# Requirements

## Introduction
A seat heater is a pad or a cushion that encompasses an electric heating system which boosts up surface temperature 
of the automotive seat at the will of the driver.
In this project we firstly check if the heator is on and the person is seated. Then accordingly the Temperature is set 
using ADC and is displayed in the CRO.

## Objective 
The main objectives of this project are: 
1. To be familiar with Embedded programming language.
2. To implement various Car Seat Heating system.
3. To build a simple hardware project.

## SWOT ANALYSIS

### Strengths
- Seat Temperature is easily set inside the car.
- Saves energy
- It is a Low cost and Robust system.
### Weakness
- Seat can't be heated beforehand.
- It can't be used for country having high temperature.
### Opportunities
- It can be easily implemented by using ADC to set the temperature.
### Threats
- It can't be used for country having high temperature.
- Heater should be turn off, otherwise seat would get hot enough to become uncomfortable to sit in.
- 
## ***4 W's and 1 H***
## Who
Anyone who uses car in low temperature. 
## What
This project is concerned about solving the seat temerature issue by using multifile.
## When 
Whenever we need to set the seat temperature.
## Why
As this project to solve the problem for country's with the low temperature.
## How
Implemented using simulide and codeblock with gcc compiler for AVR.

## High Level Requirements

| High Level Requirements      | Description |
| ----------- | ----------- |
| HLR1   | Microcontroller|
| HLR2   | Heat Detector|
| HLR3   | Display |
| HLR4   | Software used|

## Low Level Requirements

| Low Level Requirements      | Description |
| ----------- | ----------- |
| HLR1_LLR1   | ATmega328 |
| HLR2_LLR1   | ADC with PWM|
| HLR3_LLR1   | Serial monitor and CRO|
| HLR4_LLR1   | SimulIDE |
| HLR4_LLR2   | Code Blocks with gcc compiler for AVR |
