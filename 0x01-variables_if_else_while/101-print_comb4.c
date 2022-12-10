#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int h;

	int t;

	int u;

	u = 0;
	t = 1;
	h = 2;
	if (u != '9')
	{
		++u;
	}
	else
	{
		if (t != '8')
		{
			++t;
			u = t + 1;
		}
		else
		{
			++h;
			t = h + 1;
			u = t + 1;
		}
	}
	return (0);
}
