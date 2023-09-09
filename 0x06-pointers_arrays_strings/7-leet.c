/**
 * leet - Encode string into 1337
 * @str: Pointer to the string to encode
 * Return: Pointer to the new string
 */
char *leet(char *str)
{
	int i, j;
	int a[10] = {65, 69, 76, 79, 84, 52, 51, 49, 48, 55};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == a[j] + 32)
			{
				str[i] = a[j + 5];
			}
		}
	}
	return (str);
}
