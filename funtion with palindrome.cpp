#include<stdio.h>
int palindrome(int);
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	palindrome(n);
}
int palindrome(int n){
	int n1,r,s=0;
	n1=n;
	while(n!=0){
	r=n%10;
	s=s*10+r;
	n=n/10;}
	if(n1==s)
	printf("This no is palindrome");
	else
	printf("This no si not palindrome");
}
