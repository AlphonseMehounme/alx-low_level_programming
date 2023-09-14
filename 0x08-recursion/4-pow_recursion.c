/**
 * _pow_recursion - Function that returns the value of x raised to the power y
 * @x: Number to raise
 * @y: Power to raise n to
 *
 * Return: x to power y or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
