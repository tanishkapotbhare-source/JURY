#include <stdio.h>

int main(void) {
    int number;
    float decimal;
    char character;
    double preciseDecimal;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a double: ");
    scanf("%lf", &preciseDecimal);

    printf("\nInteger: %d\n", number);
    printf("Float: %f\n", decimal);
    printf("Character: %c\n", character);
    printf("Double: %lf\n", preciseDecimal);

    return 0;
}