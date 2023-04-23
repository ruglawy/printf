#include "main.h"
/**
 * caseS - check if entered argument is string
 * @string: enered string
 *
 * Return: length
 */
int caseS(const char *string)
{
	write(1, string, (int)strlen(string));
	return ((int)strlen(string));
}
/**
 * caseC - check if entered argument is a character
 * @ch: entered character
 *
 * Return: length
 */
int caseC(int ch)
{
	char character[1];

	character[0] = ch;
	write(1, character, 1);
	return (1);
}
/**
 * casePercentage - lol
 *
 * Return: 1
 */
int casePercentage(void)
{
	write(1, "%", 1);
	return (1);
}
/**
 * caseD - check for number
 * @num: entered number
 *
 * Return: length
 */
int caseD(int num)
{
	char *string;
	int length = 0, i, remainder, number = num, negativeFlag = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		negativeFlag = 1;
		num *= -1;
	}
	while (number != 0)
	{
		length++;
		number /= 10;
	}

	string = malloc(sizeof(char) * (length + 1));

	for (i = 0; i < length; i++)
	{
		remainder = num % 10;
		num /= 10;
		string[length - (i + 1)] = remainder + '0';
	}
	string[length] = '\0';
	write(1, string, strlen(string));
	free(string);
	return (length + negativeFlag);
}
/**
 * caseR - prints reversed string
 * @string - string
 *
 * Return: length
 */
int caseR(const char *string)
{
	int i, length = (int)strlen(string);
	int j = length - 1;
	char *reverse = malloc(sizeof(char) * (length + 1));

	for (i = 0; i < length; i++)
	{
		reverse[i] = string[j];
		j--;
	}
	reverse[length] = '\0';
	write(1, reverse, length);
	free(reverse);
	return (length);
}
