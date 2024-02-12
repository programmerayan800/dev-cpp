#include <stdio.h>
int main() {
    int n1, n2, digit, factorial, sum = 0;
    printf("Enter an number: ");
    scanf("%d", &n1);
    n2 = n1;
    while (n1 != 0) {
        digit = n1 % 10;
        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum = sum + factorial;
        n1 = n1 / 10;
    }
    if (sum == n2) {
        printf("%d is a strong number.\n",n2);
    } else {
        printf("%d is not a strong number.\n", n2);
    }
    return 0;
}

