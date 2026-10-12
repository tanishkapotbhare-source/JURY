#include <stdio.h>

int main(void) {
    int choice;
    double first, second;

    do {
        printf("\nMenu-driven calculator\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
                printf("Enter two numbers: ");
                if (scanf("%lf %lf", &first, &second) != 2) {
                    printf("Invalid input.\n");
                    return 1;
                }
                switch (choice) {
                    case 1:
                        printf("Result: %.2f\n", first + second);
                        break;
                    case 2:
                        printf("Result: %.2f\n", first - second);
                        break;
                    case 3:
                        printf("Result: %.2f\n", first * second);
                        break;
                    case 4:
                        if (second == 0.0) {
                            printf("Error: cannot divide by zero.\n");
                        } else {
                            printf("Result: %.2f\n", first / second);
                        }
                        break;
                }
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Select 1-5.\n");
        }
    } while (choice != 5);

    return 0;
}