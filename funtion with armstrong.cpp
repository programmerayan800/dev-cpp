#include<stdio.h>
#include<math.h>
int digit(int ,int);
int armstrong(int,int);
int main(){
	int n,n1,n2,s,c;
	printf("Enter a number:");
	scanf("%d",&n);
	n1=n;
	n2=n;
	c=digit(n1,n2);
	s=armstrong(n2,c);
	if(n==s)
	printf("armstrong");
	else
	printf("not armstrong");
	}
int digit(int n1,int n2){
	int c=0;
	while(n1!=0){
		n1=n1/10;
		c=c+1;
	}
	return c;
}
int armstrong(int n2,int c){
	int r=0,s=0;
	while(n2!=0){
		r=n2%10;
		s=s+pow(r,c);
		n2=n2/10;
	}
	return s;
}
