/**
 * _islower - Check for lowercase character
 * @c: Character that will be checked
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	int res;

	if (c >= 97 && c <= 122)
	{
		res = 1;
	} else
	{
		res = 0;
	}
	return (res);
}
