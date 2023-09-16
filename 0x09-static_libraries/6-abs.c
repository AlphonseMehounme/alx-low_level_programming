/**
 * _abs - Computes the absolute value of integer
 * @n: Number which absolute value will be computed
 * Return: The absolute value of n
 */
int _abs(int n)
{
	int absv;

	if (n >= 0)
	{
		absv = n;
	} else
	{
		absv = -n;
	}
	return (absv);
}
