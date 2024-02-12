#include<stdio.h>
int main(){
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	int i;
	while(str[i] != '\0')
	{
		i++;
	}
	printf("string lenth %d",i);
}
