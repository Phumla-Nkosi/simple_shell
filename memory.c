#include "shell.h"
/**
 * bfree - makes room fro the pointer in the program
 * @ptr: address of the pointer to free
 * Return: if the is shape show 1 if not the 0
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
