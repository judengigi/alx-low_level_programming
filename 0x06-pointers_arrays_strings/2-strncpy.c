#include "main.h"
#include <string.h>
/**
* _strncpy - function that copies a string
* @dest: first string
* @src: second string
* @n: third string
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
