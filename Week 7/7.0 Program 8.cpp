#include <stdio.h>

union student
{
	char name[50];
	float marks[5];
	int roll;
}s;

int main()
{
 	printf("Enter name of student: ");
 	scanf("%s",s.name);
 	printf("Enter roll number: ");
 	scanf("%d",&s.roll);
 	printf("Enter marks for 5 subjects: \n");
 	for(int i=0;i<5;i++)
 		scanf("%f",&s.marks[i]);
	 
	float sum=0;
	for(int i=0;i<5;i++)
 		sum+=s.marks[i];
 	float per=sum/5;
 	printf("Percentage of marks is: %f %%",per);
	return 0;
}
