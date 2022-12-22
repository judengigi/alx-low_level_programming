#include "main.h"

/**
*
**_strncat - function similar to _strcat
*@dest: first string
*@src: second string
*@n: third string
*Return: return to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
