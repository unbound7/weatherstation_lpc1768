#include "GPIO_LPC17xx.h"
#include "DTH11.h"
#include "lcd.h"
#include "display.h"
double temperature;
int main(void)
{
	lcd_print(1,1,temperature,5);
}