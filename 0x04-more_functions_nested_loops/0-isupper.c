/**
 * _isupper - checks if input is uppercase
 * @c: character to be checked
 * Return: return 1 when c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
