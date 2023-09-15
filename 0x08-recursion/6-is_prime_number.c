/**
 * isprime - Veriffy if a number is a prime number
 * @m: Input number
 * @compo: Number to verify composition of m
 *
 * Return: 1 if m is prime
 * 0 if m is not prime
 */
int isprime(int m, int compo)
{
	if (compo > (m / 2))
	{
		return (1);
	}
	if (m % compo == 0)
	{
		return (0);
	}
	return (isprime(m, compo + 1));
}

/**
 * is_prime_number - Tell is a number is prime
 * @n: Input number
 * Return: 1 if n is prime
 * 0 if n is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (isprime(n, 2));
}
