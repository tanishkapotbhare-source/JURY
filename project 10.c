#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;

    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main(void)
{
    int number;

    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        printf("Invalid input. Please enter an integer from 0 to 20.\n");
        return 1;
    }

    printf("%d! = %llu\n", number, factorial((unsigned int)number));
    return 0;
}