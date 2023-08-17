/**
 * _isdigit - Checks for a digit
 * @c: char to be checked
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c >= 57)
	{
		res = 1;
	} else
	{
		res = 0;
	}
	return (res);
}
