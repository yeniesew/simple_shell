#include "shell.h"
/**
  * _memset - fills memory with a constant byte
  * @p: the pointer to the memory area
  * @b: the byte to fill *p with
  * @n: the amount of bytes to be filled
  * Return: (p) a pointer to the memory area s
  */
char *_memset(char *p, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
p[i] = b;
return (p);
}
/**
 * ffree - frees a string of strings
 * @str: string of strings
 */
void ffree(char **str)
{
char **a = str;
if (!str)
return;
while (*str)
free(*str++);
free(a);
}
/**
  * _realloc - reallocates a block of memory
  * @ptr: pointer to previous malloc'ated block
  * @old_size: byte size of previous block
  * @new_size: byte size of new block
  *
  * Return: pointer to da ol'block nameen.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *c;
if (!ptr)
return (malloc(new_size));
if (!new_size)
return (free(ptr), NULL);
if (new_size == old_size)
return (ptr);
c = malloc(new_size);
if (!c)
return (NULL);
old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
c[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (c);
}
