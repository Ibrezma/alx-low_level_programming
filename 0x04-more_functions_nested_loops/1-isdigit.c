/**
 * _isdigit - checks whether input is digit or not
 * @c: input to be checked
 * Return: 1 when c is digit otherwise o
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
