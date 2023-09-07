/**
 * _strcmp - Compare two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: 15 if s1 greater than s2, -15 if s2 greater than s1
 * 0 is s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			n = 15;
			break;
		} else if (s1[i] < s2[i])
		{
			n = -15;
			break;
		}
	}
	return (n);
}
