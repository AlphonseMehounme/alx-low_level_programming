/**
 * custom_sqrt - Return the natural square root of a number
 * @m: Input number
 * @root: Supposed root for testing
 *
 * Return: square root of m or -1 if the root does not exist
 */
int custom_sqrt(int m, int root)
{
	if (root * root > m)
	{
		return (-1);
	}
	if (root * root == m)
	{
		return (root);
	}
	return (custom_sqrt(m, root + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of an integer
 * @n: Input number
 * Return: Square root of n or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (custom_sqrt(n, 0));
}
