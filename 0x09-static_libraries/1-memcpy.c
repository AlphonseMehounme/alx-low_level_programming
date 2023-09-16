/**
 * _memcpy - Copie memory area
 * @dest: Pointer to memory to copy to
 * @src: Pointer to memory to copy from
 * @n: Number of byte to copy
 *
 * Return: Pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
