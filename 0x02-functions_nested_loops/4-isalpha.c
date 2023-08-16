/**
 * _isalpha - Chcecks for alphabetic character
 * @c: Character that will be checked
 * Return: 1 if c is a letter
 * 0 otherwise
 */
int _isalpha(int c)
{
	int res;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		res = 1;
	} else
	{
		res = 0;
	}
	return (res);
}
