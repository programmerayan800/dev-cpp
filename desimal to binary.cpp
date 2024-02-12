#include<stdio.h>
int main(){
	int a[100],i,j,n,d;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int c=d=n;
	while(n!=0){
		a[i]=n%2;
		n=n/2;
		i++;
	}
	printf("Binary number is\n");
	for(j=i-1;j>=0;j--){
		printf("%d",a[j]);
	}
	i=0;
	while(c!=0){
		a[i]=c%8;
		c=c/8;
		i++;}
	printf("\nOctal number is\n");
	for(j=i-1;j>=0;j--){
		printf("%d",a[j]);
	}
	i=0;
	while(d!=0){
		a[i]=d%16;
		d=d/16;
		i++;}
	printf("\nHexadesimal number is\n");
	for(j=i-1;j>=0;j--){
		printf("%d",a[j]);
	}
	}

