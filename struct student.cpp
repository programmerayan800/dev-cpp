#include<stdio.h>
int main(){
	struct student{
		int r_number;
		char name[30];
		int t_marks;
	};
	struct student s1[100];
	printf("Enter 5 students roll number,name,&total marks\n");
 	for(int i=1;i<=2;i++){
 		scanf("%d",&s1[i].r_number);
 		scanf("%s",s1[i].name);
 		scanf("%d",&s1[i].t_marks);
	 }
	 for(int i=0;i<=10;i++){
	 	printf("-");
	 }
	 	for(int i=1;i<=2;i++){
 		printf("\nstudent roll no is%d\n",s1[i].r_number);
 		printf("student name is %s\n",s1[i].name);
 		printf("student mark is %d\n",s1[i].t_marks);
	 }

}
