**Advanced LED Control System**
This repository contains a C program developed for a microcontroller to simulate an advanced LED control system. The system uses nested structures to represent detailed control aspects of LEDs, including state, brightness, and color, as well as group settings for multiple LEDs.

**Objective**
The goal is to create a flexible system to control individual and grouped LEDs using structured data and pointer manipulations in C.

**Features**
Control Individual LEDs: Set the ON/OFF state, brightness (0-255), and RGB color for each LED.
Group Control: Manage multiple LEDs with collective state and brightness settings.
Structure-based Control: Use the LEDSettings and LEDGroup structures for organizing control logic.

Functions for Initialization, Update, and Status Display:
initLEDGroup: Initializes LED group with default values.
updateLEDGroupSettings: Updates both individual and group LED settings.
displayLEDGroupStatus: Displays the status of individual and group LEDs.


**Project Structure**
Data Structures
1) LEDSettings
  state: ON/OFF state of individual LED.
  brightness: Brightness level (0-255).
  color: RGB value for LED color.

2)LEDGroup
  singleLED: Settings for individual LED using LEDSettings.
  groupState: ON/OFF state of all LEDs.
  groupBrightness: Brightness of all LEDs in the group.

**Functions**
initLEDGroup(LEDGroup *group): Initializes the group with default values.
updateLEDGroupSettings(LEDGroup *group, uint8_t groupState, uint8_t groupBrightness, uint8_t state, uint8_t brightness, uint32_t color): Updates individual and group LED settings.
displayLEDGroupStatus(const LEDGroup *group): Prints the state, brightness, and color of the individual LED and group.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

**For Debugging this file:**
1) Use Keil, Embecardo dev C/C++
2) Clone the repository or download the file.
3) Compile the program and run it.
