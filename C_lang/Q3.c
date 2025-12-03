#include <stdio.h>

void generateFibonacci(int n)
{
    int t1 = 0, t2 = 1;
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        printf("%d", t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        if (i < n)
        {
            printf(", ");
        }
    }
}
int main()
{
    int terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Fibonacci Series up to %d terms:\n", terms);
        generateFibonacci(terms);
    }

    return 0;
}


