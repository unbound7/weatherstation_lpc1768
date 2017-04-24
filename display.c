#include "DTH11.h"
#include "GPIO_LPC17xx.h"
#include "lcd.h"
void display_op()
{
	lcd_print(1,1,temperature,5);
}