/*	
		VERSION: 0.5.0
		PURPOSE: DHT11 Temperature & Humidity Sensor library for ARM Cortex M3
		LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)
		SOURCE:	 https://github.com/unbound7/weatherstation_lpc1768
*/

#ifndef DHT11
#define DHT11
#endif

  int read(int pin);
	int humidity(void);
	int temperature(int unit); 
	
	/*
		 1=Celcius
		 2=Farenheit
		 3=Kelvin
	*/

	