/*
 * File: main.c
 * Date: 31.08.2012
 * Denis Zheleznyakov http://ziblog.ru
 */

#include "main.h"

inline void gpio_init(void)
{
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA | RCC_AHBPeriph_GPIOC, ENABLE);

	// светодиод
	PIN_CONFIGURATION(PIN_LED);

	// кнопка
	PIN_CONFIGURATION(PIN_BUTTON);
}

void main(void)
{
	gpio_init();

	while(1)
	{
		if(PIN_SIGNAL(PIN_BUTTON))
		{
			PIN_ON(PIN_LED);
		}
		else
		{
			PIN_OFF(PIN_LED);
		}
	}
}
