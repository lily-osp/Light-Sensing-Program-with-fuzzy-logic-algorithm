# Fuzzy Logic Light Sensing Program for Arduino with 5 LDR Inputs

This project demonstrates a fuzzy logic approach for determining the brightness level based on readings from 5 Light Dependent Resistors (LDRs) connected to an Arduino board. By using fuzzy logic, the program can make intelligent decisions and provide a more nuanced output, categorizing the environment as either "dark" or "bright".

## Requirements

To successfully run this program, you will need the following:

- An Arduino board (such as Arduino Uno)
- 5 Light Dependent Resistors (LDRs)
- A breadboard and jumper wires
- Arduino IDE (Integrated Development Environment) installed on your computer

## Circuit Setup

Connect the 5 LDRs to the analog pins of the Arduino board using the breadboard and jumper wires. Make sure the LDRs are properly positioned to receive light from the surroundings.

## Program Logic

The program follows these steps to determine the brightness level using fuzzy logic:

1. **Read Sensor Values**: Read the analog values from the 5 LDRs connected to the Arduino board.

2. **Normalize Sensor Readings**: Convert the sensor readings to a range of 0 to 1 to ensure consistent comparison and analysis.

3. **Define Fuzzy Membership Functions**: Define membership functions to categorize the sensor readings into linguistic variables, such as "dark" and "bright". These membership functions map the sensor values to membership degrees that indicate how strongly the input belongs to each linguistic variable.

4. **Fuzzy Rule Definition**: Define a set of fuzzy rules that describe how the input sensor readings relate to the brightness level. For example, if the readings from LDR1 and LDR3 are high, while the readings from LDR2, LDR4, and LDR5 are low, the environment can be classified as "dark".

5. **Inference Engine**: Apply the fuzzy rules to the input sensor readings to determine the output membership degrees. The inference engine evaluates the membership degrees of the linguistic variables based on the defined rules.

6. **Defuzzification**: Convert the output membership degrees into a crisp output value. This process involves determining a representative value that best represents the overall brightness level based on the fuzzy rules and input membership degrees.

7. **Output Decision**: Based on the crisp output value, make a decision on whether the environment is considered "dark" or "bright". This decision can be used to control an LED or any other suitable output device to reflect the brightness level.

## Code

```cpp
// Include necessary libraries

// Define constants and variables

// Define fuzzy membership functions

// Define fuzzy rules

// Define input and output variables

// Define the setup function

// Define the loop function

// Define helper functions (if necessary)

// Main program logic
```

Replace the placeholders in the code template with your specific implementation. This includes including the necessary libraries, defining constants and variables, fuzzy membership functions, fuzzy rules, input and output variables, setup and loop functions, and any additional helper functions you may need.

## Conclusion
This project demonstrates the application of fuzzy logic in determining the brightness level based on readings from 5 LDRs connected to an Arduino board. By using fuzzy logic techniques, the program can make more nuanced decisions and provide accurate categorization of the environment as either "dark" or "bright". You can customize and optimize the code to suit your specific requirements, allowing for various applications where light sensing is essential.

Feel free to incorporate your specific implementation details into the code section and make any further modifications as needed.