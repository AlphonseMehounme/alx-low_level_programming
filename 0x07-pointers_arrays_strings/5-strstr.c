/**
 * _strstr - Locates a substring
 * @haystack: Pointer to string to search in
 * @needle: Pointer to substring to search for
 *
 * Return: Pointer to the beginning of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int count = 0;
	char *p = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			for (k = 0; needle[k] != '\0' && haystack[j] != '\0'; k++)
			{
				if (haystack[j] == needle[k])
				{
					count++;
				}
				j++;
			}
			if (needle[k] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (p);
}
