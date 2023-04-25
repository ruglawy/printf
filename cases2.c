#include "main.h"
/**
 * casePercentage - check if entered character is a percentage
 *
 * Return: 1
 */
int casePercentage(void)
{
	write(1, "%", 1);
	return (1);
}
int caseU(int num)
{
	char *string;
	int length = 0, i, remainder, number = num, negativeFlag = 0;

	if (num < 0)
	{
		negativeFlag = 1;
		num *= -1;
	}
	while (number != 0)
	{
		length++;
		number /= 10;
	}
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
	{
		free(string);
		exit(98);
	}
	for (i = 0; i < length; i++)
	{
		remainder = num % 10;
		num /= 10;
		string[length - (i + 1)] = remainder + '0';
	}
	string[length] = '\0';
	write_data(1, string, strlen(string));
	free(string);
	return (length + negativeFlag);
}
