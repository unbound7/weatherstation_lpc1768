/*	
		VERSION: 0.5.0
		PURPOSE: DHT11 Temperature & Humidity Sensor library for ARM Cortex M3
		LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)
		SOURCE:	 https://github.com/unbound7/weatherstation_lpc1768
*/
#include "GPIO_LPC17xx.h"

#define DHTLIB_OK                0
#define DHTLIB_ERROR_CHECKSUM   -1
#define DHTLIB_ERROR_TIMEOUT    -2
#define DHTLIB_INVALID_VALUE    -999

#define DHTLIB_DHT11_WAKEUP     18
#define DHTLIB_DHT_WAKEUP       1

/* max timeout is 100 usec.
   For a 16 Mhz proc 100 usec is 1600 clock cycles
   loops using DHTLIB_TIMEOUT use at least 4 clock cycli
   so 100 us takes max 400 loops
   so by dividing F_CPU by 40000 we "fail" as fast as possible
*/
#define DHTLIB_TIMEOUT (F_CPU/40000)

extern double humidity;
extern double temperature;
extern uint32_t bits[5]; // buffer to receive data
		
#ifndef DHT11
#define DHT11
#endif
	int readvalues(int port,int pin);
