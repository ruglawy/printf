#include "main.h"
#include <string.h>
/**
 * _printf - printf() replica
 * @format: string to be printed
 *
 * Return: length of string printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *str;
	char ch[1];
	int length = 0;
	int i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch[0] = va_arg(ap, int);
					write(1, ch, 1);
					length++;
					break;
				case 's':
					str = va_arg(ap, char*);
					write(1, str, strlen(str));
					length += (int)strlen(str);
					break;
				case '%':
					write(1, "%", 1);
					length++;
					break;
				default:
					exit(98);
					break;
			}
			i++;
		}
		else
		{
			ch[0] = format[i];
			write(1, ch, 1);
			length++;
		}
		i++;
	}

	return (length);
}
