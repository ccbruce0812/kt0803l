#ifndef COMMON_H
#define COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <i2c/i2c.h>

#include <FreeRTOS.h>
#include <task.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>

#define MSEC2TICKS(n) (n/portTICK_PERIOD_MS)

#ifndef KT0803L_NDEBUG
static inline int __dbg__(const char *loc, const char *fmt, ...) {
	va_list args;
	char _fmt[256]="";
	int res;
	
	va_start(args, fmt);
	sprintf(_fmt, "[%s] %s", loc, fmt);
	res=vprintf(_fmt, args);
	va_end(args);
	
	return res;
}

#define DBG(...) __dbg__(__func__, __VA_ARGS__)
#else
#define DBG(...)
#endif

int readReg(unsigned char regAddr, unsigned char *pData);
int writeReg(unsigned char regAddr, unsigned char data);

#ifdef __cplusplus
}
#endif

#endif
