#include<stdio.h>
int fact(int);
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<0)
	printf("plz enter valid no");
	fact(n);
	printf("%d",fact(n));
}
int fact(int n){
	if(n == 0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
