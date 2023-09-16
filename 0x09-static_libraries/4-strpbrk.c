/**
 * _strpbrk - Searches a string for any of set of bytes
 * @s: Pointer to string to search in
 * @accept: Pointer to string to search from
 *
 * Return: Pointer to the first occurence of any byte of accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (p);
}
