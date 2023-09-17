#include <stdio.h>
int main()
{
	int year,month,date;
	printf("Enter year:");
	scanf("%d",&year);
	printf("\n Enter month:");
	scanf("%d",&month);
	printf("\n Enter date:");
	scanf("%d",&date);
	printf("\n");
	
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		if (date<31)
			printf("%d",++date);
		else
		{
			printf("1");
			if (month==12)
			{
				month=1;
				year+=1;
			}
			else
				month+=1;
		}
		
	else if (month==4 || month==6 || month==9 || month==11)
		if (date<30)
			printf("%d",date+1);
		else
		{
			printf("1");
			month+=1;
			month+=1;
		}
	
	else if (month==2)
		if (date<28)
			printf("%d",date+1);
		else
		{	
			if (year%4==0 && (year%100!=0 || year%400==0) && date!=29)
				printf("29");
			else
				printf("1");
			month+=1;
		}
	
	else
		printf("Invalid input");
	
	printf(" %d %d ",month,year);
	return 0;
}
