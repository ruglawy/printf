#include "main.h"
/**
 * write_data - limit write() function buffer to 1024
 *
 * Return: nothing
 */
void write_data()
{
	char buffer[1024];
	FILE* fp = fopen("output.txt", "wb");

	if (fp != NULL) 
	{
		fwrite(buffer, sizeof(char), 1024, fp);
		fclose(fp);
	}
}
