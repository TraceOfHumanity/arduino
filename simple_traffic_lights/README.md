# Simple Traffic Lights Arduino Project

This project demonstrates the operation of a simple traffic light with three colors: red, yellow, and green.

## How it works

The traffic light operates in a standard sequence:
1. **Red** - lights up for 1 second
2. **Yellow** - lights up for 1 second  
3. **Green** - lights up for 1 second
4. Cycle repeats

## Components

- Arduino Uno (or compatible board)
- 3 LEDs (red, yellow, green)
- 3 resistors 220Ω
- Connecting wires

## Wiring

- **Red LED** → pin 13
- **Yellow LED** → pin 12  
- **Green LED** → pin 7
- **LED cathodes** → GND through 220Ω resistors

## Circuit Diagram

![Circuit Diagram](circuit.jpeg)

## Code

The project uses a simple `loop()` function that sequentially turns on each LED for 1 second.

## Applications

- Educational project for learning Arduino
- Demonstration of digital output operations
- Foundation for more complex LED projects