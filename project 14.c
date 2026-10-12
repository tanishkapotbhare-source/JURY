#include <stdio.h>

#define SIZE 5

int main(void)
{
    int integers[SIZE];
    float floats[SIZE];
    char characters[SIZE];

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        if (scanf("%d", &integers[i]) != 1) return 1;
    }

    printf("Enter %d floating-point values:\n", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        if (scanf("%f", &floats[i]) != 1) return 1;
    }

    printf("Enter %d characters:\n", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        if (scanf(" %c", &characters[i]) != 1) return 1;
    }

    printf("\nInteger array:\n");
    for (int i = 0; i < SIZE; ++i)
        printf("integers[%d] = %d, address = %p\n", i, integers[i], (void *)&integers[i]);

    printf("\nFloat array:\n");
    for (int i = 0; i < SIZE; ++i)
        printf("floats[%d] = %g, address = %p\n", i, floats[i], (void *)&floats[i]);

    printf("\nCharacter array:\n");
    for (int i = 0; i < SIZE; ++i)
        printf("characters[%d] = '%c', address = %p\n", i, characters[i], (void *)&characters[i]);

    return 0;
}