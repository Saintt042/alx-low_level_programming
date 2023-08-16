#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	unsigned long long int a = 1;
    unsigned long long int b = a + 1;
    unsigned long long int c = a + b;

	printf("%llu, ", a);
    printf("%llu, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%llu", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
