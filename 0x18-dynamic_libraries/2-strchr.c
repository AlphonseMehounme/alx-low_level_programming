/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search in
 * @c: Character to search for
 *
 * Return: Pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (p);
}
