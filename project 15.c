#include <stdio.h>

/* (a) No arguments and no return value */
void area_no_args_no_return(void)
{
    double base, height;
    printf("Enter base and height: ");
    if (scanf("%lf %lf", &base, &height) == 2)
        printf("Area: %.2f\n", 0.5 * base * height);
}

/* (b) Arguments but no return value */
void area_args_no_return(double base, double height)
{
    printf("Area: %.2f\n", 0.5 * base * height);
}

/* (c) No arguments but returns a value */
double area_no_args_return(void)
{
    double base, height;
    printf("Enter base and height: ");
    if (scanf("%lf %lf", &base, &height) != 2)
        return 0.0;
    return 0.5 * base * height;
}

/* (d) Arguments and returns a value */
double area_args_return(double base, double height)
{
    return 0.5 * base * height;
}

int main(void)
{
    double base, height;

    puts("(a) No arguments, no return value:");
    area_no_args_no_return();

    puts("(b) Arguments, no return value:");
    printf("Enter base and height: ");
    if (scanf("%lf %lf", &base, &height) != 2)
        return 1;
    area_args_no_return(base, height);

    puts("(c) No arguments, returns a value:");
    printf("Area: %.2f\n", area_no_args_return());

    puts("(d) Arguments and returns a value:");
    printf("Enter base and height: ");
    if (scanf("%lf %lf", &base, &height) != 2)
        return 1;
    printf("Area: %.2f\n", area_args_return(base, height));

    return 0;
}