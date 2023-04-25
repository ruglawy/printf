#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int caseS(const char *string);
int caseC(int ch);
int casePercentage();
int caseD(int num);
int caseU(int num);
int int_to_binary(int num);
void write_data();
int caseR(const char *string);
#endif

