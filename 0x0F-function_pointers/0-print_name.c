/**
 * print_name - Print name
 * @name: Name to print
 * @f: Pointer to function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
