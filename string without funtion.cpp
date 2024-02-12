#include <stdio.h>
int main() {
    char firstName[100], secondName[100], thirdName[100], name[300];
    int i, j, k;
    printf("Enter first name: ");
    scanf("%s", firstName); 
    printf("Enter second name: ");
    scanf("%s", secondName);
    printf("Enter third name: ");
    scanf("%s", thirdName);
    for (i = 0; firstName[i] != '\0'; i++)
        name[i] = firstName[i];
    name[i] = ' ';
    for (j = 0; secondName[j] != '\0'; j++)
        name[i + j + 1] = secondName[j];
    name[i + j + 1] = ' ';
    for (k = 0; thirdName[k] != '\0'; k++)
        name[i + j + 2 + k] = thirdName[k];
    name[i + j + 2 + k] = '\0';
    printf("Full name: %s\n", name);
    return 0;
}

