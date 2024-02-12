#include <stdio.h>
int main() {
    int n, i, search;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n",search, i);
        }
    }
    printf("Element %d not found in the array.\n",search);
}

