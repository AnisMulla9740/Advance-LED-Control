#include <stdio.h>

//Define LED Settings structure for individual LED control
typdef struct {
	uint8_t state;
	uint8_t brightness;
	uint32_t color;
} LEDSettings;

//Define LED Group structure for group control
typedef struct {
	LEDSettings singleLED;
	uint8_t groupState;
	uint8_t groupBrightness;
} LEDGroup;

//Function to initialize LED group settings;
//0 for 'OFF' state
//1 for 'ON' state
void initLEDGroup(LEDGroup *group) {
	group->singleLED.state = 0;	
	group->singleLED.brightness = 0;
	group->singleLED.color = 0;
	group->groupState = 0;
	group->groupBrightness = 0;
}

//Function to update LED group settings
void updateLEDGroupSettings(LEDGroup *group, uint8_t groupState, uint8_t groupBrightness uint8_t state, uint8_t brightness, uint32_t color) {
	group->groupState = groupState;
	group->groupBrightness = groupBrightness;
	group->singleLED.state = state;
	group->singleLED.brightness = brightness;
	group->singleLED.color = color;
}
//Function to display LED group status 
void displayLEDGroupStatus(const LEDGroup *group) {
	printf("Group State: %d\n", group->groupState);
	printf("Group Brightness: %d\n", group->groupBrightness);
	printf("Individual LED State: %d\n", group->singleLED.state);
	printf("Individual LED Brightness: %d\n", group->singleLED.brightness);
	printf("Individual LED Color: 0x%06X\n", group->singleLED.color);
}

int main(){
	LEDGroup myLEDGroup;
	
	//Initialize LED Group
	initLEDGroup(&myLEDGroup);
	
	//update LED group Settings
	updateLEDGroupSettings(&myLEDGroup, 1, 128, 1, 255, 0xFF0000);
	
	//Display LED group status
	displayLEDGroupStatus(&myLEDGroup);
	
	return 0;
}