#include<stdio.h>
int main(){
	int first=0,n,second=1,result=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%d %d",first,second);
	for(int i=3;i<=n;i++){
		result = first +second;
		printf(" %d",result);
		first=second;
		second=result;
	}
}
