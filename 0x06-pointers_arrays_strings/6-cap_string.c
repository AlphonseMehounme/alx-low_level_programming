/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: Pointer to the new str
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == 32 ||
		str[i - 1] == 46 || str[i - 1] == 9 || str[i - 1] == 10 ||
		str[i - 1] == 34 || str[i - 1] == 33 || str[i - 1] == 40 ||
		str[i - 1] == 41 || str[i - 1] == 44 || str[i - 1] == 59 ||
		str[i - 1] == 63 || str[i - 1] == 123 || str[i - 1] == 125))
		{
			str[i] = str[i] - 32;
		} else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
