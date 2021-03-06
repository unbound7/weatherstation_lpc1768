#include "GPIO_LPC17xx.h"
#include "DTH11.h"
int readvalues(int port, int pin)
	{
		int op=GPIO_PinRead(port, pin);
		// CONVERT AND STORE
		uint32_t bits[5];
    double humidity = (double)(bits[0], bits[1]) * 0.1;
    double temperature = (double)(bits[2] & 0x7F, bits[3]) * 0.1;
    if (bits[2] & 0x80)  // negative temperature
    {
        temperature = -temperature;
    }
		return op;
	}
