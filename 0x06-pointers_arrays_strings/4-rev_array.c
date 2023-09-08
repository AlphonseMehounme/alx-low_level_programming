/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to array
 * @n: Number of element in a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b[100];
	int i, j, k;

	k = n - 1;
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = b[k];
		k--;
	}
}
