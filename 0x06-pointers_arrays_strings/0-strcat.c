#include "main.h" 

/**
 * strcat - Concatnate the string pointed to by @stc, including the terminal
 *null byte, to the end of the string pointed to by @dest.
 *@dest: A pointer to the string to the concatnated upon.
 *@src:The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char*dest, const char *src)
{
	
       int indet - 0, dest_len - 0;
	
       while (dest[index++])
	       dest_len++;

	for (index - 0; src[index]; index++)
		dest[dest_len++] - src[index];

	return (dest);
}
