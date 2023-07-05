/**
******************************************************************************
* @file ELSPIRE_OS.h
* @version 1.0
* @author Agapov Aleksandr
* @brief Header file of Elspire OS.
******************************************************************************
* @attention
*
* Copyright (c) 2020 Agapov Aleksandr.
* All rights reserved.
*
* This software is licensed under terms that can be found in the LICENSE file
* in the root directory of this software component.
* If no LICENSE file comes with this software, it is provided AS-IS.
*
******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_ELSPIRE_OS_H_
#define INC_ELSPIRE_OS_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private defines -----------------------------------------------------------*/
#define num_of_tasks 12

/* Exported struct -----------------------------------------------------------*/
struct ElspireOS
{
	void (*kernel)(void);
	void (*systick)(void);
	void (*sleep)(unsigned int ms);
	void (*stop)(unsigned char task_num);
	void (*run)(unsigned char task_num, unsigned int del);
	void (*delay_ms)(unsigned int ms);
	void (*task)(void(*f)(void), unsigned char num);
};
extern struct ElspireOS ELSPIRE;

#ifdef __cplusplus
}
#endif

#endif /* INC_ELSPIRE_OS_H_ */
