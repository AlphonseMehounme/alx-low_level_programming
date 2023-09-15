/**
 * len - Return the length of a string
 * @t: Pointer to the input string
 * Return: Length of t
 */
int len(char *t)
{
	if (*t == '\0')
	{
		return (0);
	}
	t++;
	return (1 + len(t));
}

/**
 * palind - Palindrome function
 * @r: Pointer to the string
 * @index: Index in the string
 * @lenr: Length of the string
 *
 * Return: 1 if r is palindrome and 0 if not
 */
int palind(char *r, int index, int lenr)
{
	if (r[index] != r[lenr - 1])
	{
		return (0);
	}
	if (index > lenr / 2)
	{
		return (1);
	}
	return (palind(r, index + 1, lenr - 1));
}

/**
 * is_palindrome - Function that tell if a string is palindrome
 * @s: Input string
 * Return: 0 if s is not palindrome and 1 if it is
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (palind(s, 0, len(s)));
}
