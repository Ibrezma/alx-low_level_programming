#include "main.h"



/**
 *  * rot13 - rotate characters 13 places in the alphabet
 *   * @s: string
 *    * Return: string `s` rotated
 */
char *rot13(char *s)
{
	int i;

	int j;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
	for (j = 0; i < 52; i++)
	{
		if (s[i] == alph[j])
		{
			s[i] = r13[j];
		}
	}
	i++;

	}
	return (s);



}
