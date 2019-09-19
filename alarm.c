#include <stdint.h>
#include <stdio.h>
#include "..\..\ValvanoWaveTM4C123v5\inc\ADCSWTrigger.h"
#include "..\..\ValvanoWaveTM4C123v5\inc\ST7735.h"
#include "..\..\ValvanoWaveTM4C123v5\inc\PLL.h"
#include "..\..\ValvanoWaveTM4C123v5\inc\tm4c123gh6pm.h"
#include "bool.h"
//#include "timers_init.h" keep getting an error to include because it doesnt recognize unit_32t

int alarm_hours = 0;
int alarm_minutes= 0;


void set_alarm_time(void){
	ST7735_SetCursor(0,3);
	printf("%02d:%02d", alarm_hours, alarm_minutes);
}

