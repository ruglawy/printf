#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - printf() replica
 * @format: string to be printed.
 *
 * Return: length of string printed
 */
int _printf(const char *format, ...);
#endif
