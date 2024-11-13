#include <stdint.h>

// What is pin number for build in LED?
// PB3
// I dont know why there are two labels per pin
//
// How do we turn it on?
// set GPIO moder bits to 01 (General purpose output)
// Seems like GPIO mode register defaults to 10
// the bits in this register for pin 3 are 7 (MSB) and 6 (LSB)
//
// output type needs to be set to push pull this bit needs to be set to 0
//
// Note that if this is not the right register we may
// need to use the port bit set reset register
// Output data register bit 3 is toggled
//
// What are  the register addresses for these?
//
// Base address: 0x4800 0400
//
// GPIO mode offset: 0x00
//
// Output type offset: 0x04
//
// Output data offset: 0x14

#define GPIOB_MODER 0x48000400
#define GPIOB_OTYPER  0x48000404
#define GPIOB_OSPEEDR 0x48000408
#define GPIOB_PUPDR 0x4800040C
#define GPIOB_ODR  0x48000414
#define GPIOB_BSRR 0x48000418
#define AHB2_CLOCK_ENABLER 0x4002104C

int main()
{
	// Enable clock for GPIOB
	*(volatile uint32_t *) (AHB2_CLOCK_ENABLER) |= (1 << 1);
	// Set mode register for gpio pad B pin 3 to general purpose output mode
	*(volatile uint32_t *) (GPIOB_MODER) &= ~(3 << 6); // clear bits 6-7
	*(volatile uint32_t *) (GPIOB_MODER) |= (1 << 6); // set bit 6
	
	// Set output type to be Push-Pull
	*(volatile uint32_t *) (GPIOB_OTYPER) &= ~(1 << 3); // clear bit 3
	
	// Set output speed register to medium speed
	*(volatile uint32_t *) (GPIOB_OSPEEDR) &= ~(3 << 6); // clear bits 6-7
	*(volatile uint32_t *) (GPIOB_OSPEEDR) |= (1 << 6); // set bit 6

	while(1)
	{
		*(volatile uint32_t *) (GPIOB_ODR) ^= (1 << 3);
		for(int i = 0; i < 100000; i++);

	}
	return 0;
}



