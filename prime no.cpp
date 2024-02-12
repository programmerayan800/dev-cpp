#include<stdio.h>
int main() {
    int i, c, j, n1, n2;
    printf("Enter the start range for prime numbers:\n");
    scanf("%d", &n1);
    printf("Enter the end range for prime numbers:\n");
    scanf("%d", &n2);
    for (i = n1; i <= n2; i++) {
        c = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                c = c + 1;
            }
        }
        if (c == 2) {
            printf("%d ", i);
        }
    }
    return 0;
}
