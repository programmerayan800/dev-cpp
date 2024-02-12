#include <stdio.h>

int main() {
    int n1,f,n2,r;
    printf("Enter a number: ");
    scanf("%d", &n1);

    n2 = n1; 
    while (n1 != 0) {
        r = n1 % 10;
        f = f * 10 + r;
        n1=n1/10;
    }  
    if (n2==f) {
        printf("%d is a palindrome.\n", n2);
    } else {
        printf("%d is not a palindrome.\n", n2);
    }

    return 0;
}

