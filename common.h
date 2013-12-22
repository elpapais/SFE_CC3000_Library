/**
 * @file	common.h
 * @brief 	Global header file for the project containing definitions
 * @author	Shawn Hymel (SparkFun Electronics)
 * 
 * @copyright	This code is public domain but you buy me a beer if you use
 * this and we meet someday (Beerware license).
 */

#ifndef COMMON_H
#define COMMON_H
 
/* Debug setting. Set to 0 for no debug output. Set to 1 for debug output
 * If you enable debugging, make sure you call Serial.begin()! */
#define DEBUG 1

/* Global variable declarations */
extern uint8_t g_int_pin;
extern uint8_t g_int_num;
extern uint8_t g_en_pin;
extern uint8_t g_cs_pin;

#if (DEBUG == 1)
extern volatile uint8_t g_debug_interrupt;
#endif

#endif