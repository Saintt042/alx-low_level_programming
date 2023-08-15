#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
void print_fibonacci(int n);

int main(void)
{
    print_fibonacci(98);
    printf("\n");

    return 0;
}

void print_fibonacci(int n)
{
    unsigned long int a = 1, b = 2, next_term;

    if (n >= 1)
        printf("%lu, ", a);
    if (n >= 2)
        printf("%lu, ", b);

    for (int i = 3; i <= n; i++)
    {
        next_term = a + b;
        if (i < n)
            printf("%lu, ", next_term);
        else
            printf("%lu", next_term);

        a = b;
        b = next_term;
    }
}
