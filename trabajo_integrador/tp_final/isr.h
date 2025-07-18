#include "FreeRTOS.h"
#include "queue.h"
#include "semphr.h"

#include "wrappers.h"

// Semaforos y colas externas
extern xQueueHandle queue_adc;
extern xSemaphoreHandle semphr_buzz;
extern xSemaphoreHandle semphr_usr;

// Prototipos de callbacks
void cny70_callback(pint_pin_int_t pintr, pint_status_t *pmatch_status);
void usr_callback(pint_pin_int_t pintr, pint_status_t *pmatch_status);