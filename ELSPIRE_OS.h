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
