/**
 * _memset - Fills memory with a constant byte
 * @b: char to fill with
 * @n: Number of byte to fill
 * @s: Buffer
 *
 * Return: Pointer to the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
