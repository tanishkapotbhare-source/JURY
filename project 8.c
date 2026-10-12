#include <stdio.h> 
int main() { 
    int arr[100], n, i, sum = 0;
    printf("Enter the number of elements: "); 
    scanf("%d", &n);
      printf("Enter %d elements: ", n);
       for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
       }
       for (i = 0; i < n; i++) { 
        sum = sum + arr[i]; 
       }
       printf("Sum of the array elements = %d\n", sum); 
       return 0;
     } 