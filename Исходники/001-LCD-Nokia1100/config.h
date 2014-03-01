/*
 * File: config.h
 * Date: 31.08.2012
 * Denis Zheleznyakov http://ziblog.ru
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define STM32F0XX_MD
#define HSE_VALUE    			((uint32_t)8000000)

#define	MCU_HCLK_MHZ			((uint32_t)8)
#define	MCU_APB1_MHZ			((uint32_t)8)

#define assert_param(expr) 		((void)0)

#define PIN_LED					C, 9, HIGH, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO

#define PIN_BUTTON				A, 0, HIGH, MODE_INPUT_FLOATING, SPEED_2MHZ, AF_NO

#define LCD_NOKIA_1100_RST		B, 7, LOW, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO
#define LCD_NOKIA_1100_CS		B, 6, LOW, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO
#define LCD_NOKIA_1100_SDA		B, 5, HIGH, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO
#define LCD_NOKIA_1100_SCLK		B, 4, HIGH, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO

#endif /* CONFIG_H_ */
