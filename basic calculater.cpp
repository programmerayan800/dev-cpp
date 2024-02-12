  #include<stdio.h>
  int main(){
  int ch,a,b,add,sub,mul,div;
  printf("press 1 for addition");
  printf("press 2 for substraction");
  printf("press 3 for multiplication");
  printf("press 4 for division");
  scanf("%d",&ch);
  printf("enter two number");
  scanf("%d%d",&a,&b);
  switch(ch)
  {
  	case 1:
  		add=a+b;
  		printf("addition is =%d",add);
  		break;
  	case 2:
  		sub=a-b;
  		printf("substraction is =%d",sub);
  		break;
  	case 3:
  		mul=a*b;
  		printf("multiplication is =%d",mul);
  		break;
  	case4:
  		div=a/b;
  		printf("division is=%d",div);
  		break;
  	default:printf("wrong choice");
  }
    }
