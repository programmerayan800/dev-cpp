#include<stdio.h>
#include<string.h>
int main(){
	char a[100],i,j;
	printf("Enetr a string:");
	scanf("%s",a);
	while(a[i] != '\0'){
		i++;
	}
	for(i=0,j=1;i<=j;i++,j--){
		if(a[i] != a[j])
		printf("palindrome");
	}
	if(i>j)
	printf("not palindorme");
}
