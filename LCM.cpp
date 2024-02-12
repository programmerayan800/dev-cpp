#include<stdio.h>
int LCM(int);
int main(){
	int a,b,x,y;
	printf("Enetr a two number:");
	scanf("%d %d",&a,&b);
	x=a;
	y=b;
	while(a!=b){
		if(a<b)
		a=a+x;
		else
		b=b+y;
	}
	printf("LCM is %d",b);
}

