#include <stdio.h>
int main()
{
	int year,month;
	printf("Enter year:");
	scanf("%d",&year);
	printf("\n Enter month:");
	scanf("%d",&month);
	
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		printf("Number of days is 31");
		
	else if (month==4 || month==6 || month==9 || month==11)
		printf("Number of days is 30");
	
	else if(month==2)
		
		if (year%4==0 && (year%100!=0 || year%400==0))
			printf("Number of days is 29");
		else
			printf("Number of days is 28");	
	
	else
		printf("Invalid input");
	
	return 0;
}
