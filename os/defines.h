#ifndef _DEFINES_H_INCLUDED_
#define _DEFINES_H_INCLUDED_

#define NULL ((void *)0)
#define SERIAL_DEFAULT_DEVICE 1
#define TIMER_HZ 60
#define CPU_QUANTUM_MS (float)(100)

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned long  uint32;

typedef uint32 kz_thread_id_t;
typedef int (*kz_func_t)(int argc, char *argv[]);
typedef void (*kz_handler_t)(void);

#endif
