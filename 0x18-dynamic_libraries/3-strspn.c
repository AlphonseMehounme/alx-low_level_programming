/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to string to search from
 * @accept: Pointer to string to search in
 *
 * Return: Number of byte of the part with accept letters only
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	i = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (count == i)
		{
			break;
		}
	}
	return (count);
}
