/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised to the power y
 * @y: the power to which the value x is raised
 *
 * Return: the value of x raised to the power of y / -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
