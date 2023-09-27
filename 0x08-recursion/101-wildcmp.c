/**
 * wildcmp - Verify if two string can be considered identical
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if the strings can be considered identical
 * 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	while (*s2 == '*' && *(s2 + 1) == '*')
	{
		s2++;
	}
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
