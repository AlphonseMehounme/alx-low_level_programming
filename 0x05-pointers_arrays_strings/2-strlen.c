/**
 * _strlen - Returns the length of a string
 * @s: String which length will be returned
 * Return: s length
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
