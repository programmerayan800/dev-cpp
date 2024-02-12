#include <stdio.h>
int main() {
    int n1,n2, d, sum;

    printf("Armstrong numbers between 100 and 999:\n");

    for (n1 = 100; n2 <= 999; n1++) {
        n2 = n1;
        sum = 0;
        while (n2 != 0) {
            d = n2 % 10;
            sum += d * d * d;
            n2 = n2/ 10;
        }
        if (n1 == sum) {
            printf("%d\n", n1);
        }
    }
    return 0;
}

