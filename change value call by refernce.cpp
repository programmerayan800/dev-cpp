#include<stdio.h>
int change(int*,int*);
int main(){
	int a=10,b=20;
	change(&a,&b);
	printf("%d %d",a,b);
}
int change(int *a, int *b){
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
