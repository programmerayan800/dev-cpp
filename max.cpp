#include <stdio.h>
int main() {
    int n, num, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num; 
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);
    return 0;
}

