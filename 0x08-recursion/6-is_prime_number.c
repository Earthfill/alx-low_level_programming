/*
 * File: 6-is_prime_number.c
 * Auth: kingslee
*/

#include "main.h"
int is_divisible(int num, int r);
int _sqrt_recursion(int n);

/**
 *  * find_sqrt - Finds the natural square root of an inputted number.
 *   * @num: The number to find the square root of.
 *    * @root: The root to be tested.
 *     *
 *      * Return: If the number has a natural square root - the square root.
 *       * If the number does not have a natural square root - -1.
 *       */
int find_sqrt(int num, int root)
{
	        if (root == 0 || root == 1)
			                return (root);
		        else if (num * num < root)
				                return (find_sqrt(num + 1, root));
			        else if (num * num == root)
					                return (num);

				        return (-1);
}
