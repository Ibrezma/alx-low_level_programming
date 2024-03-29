#include "main.h"
#include <stdio.h>

/**
 *  * find_multipliers - look for multiplie
 *   * @n: base number
 *    * @i: iterator num
 *     * Return: 1 or 0
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	else
		return (find_multipliers(n, i + 1));

}

/**
 *  * is_prime_number - returns 1 for prime, 0 otherwise
 *   * @n: base num
 *    * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (find_multipliers(n, 2));
}
