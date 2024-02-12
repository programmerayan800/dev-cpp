#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	while(a!=b){
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	printf("GCD is %d",b);
}
