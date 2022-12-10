#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char h;

	char t;

	char u;

	while ((h <= '7') || (t <= '8') || (u <= '9'))
	{
		printf ("%c%c%c, ", h, t, u);
		u != '9' ? ++u : (t != '8' ? (++t, u = t + 1) : (++h, t = h + 1, u = t + 1));
	}
	return (0);
}
