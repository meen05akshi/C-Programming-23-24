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
			printf("%d %d %d",++date,month,year);
		else if (date==31)
		{
			if (month==12)
			{
				month=1;
				year+=1;
			}
			else
				month+=1;
			printf("1 %d %d",month,year);
		}
		else
			printf("Invalid input");
		
	else if (month==4 || month==6 || month==9 || month==11)
		if (date<30)
			printf("%d %d %d",date+1,month,year);
		else if (date==30)
		{
			month+=1;
			printf("1 %d %d",month,year);
		}
		else
			printf("Invalid input");
	
	else if (month==2)
		if (date<28)
			printf("%d %d %d",date+1,month,year);
		else if (date==28 || date==29)
		{	
			if (year%4==0 && (year%100!=0 || year%400==0) && date!=29)
				printf("29 %d %d",month,year);
			else if (year%4!=0 && (year%100==0 || year%400!=0) && date==29)
				printf("Invalid input");
			else
			{
				month+=1;
				printf("1 %d %d",month,year);
			}
		}
		else
			printf("Invalid input");
	
	else
		printf("Invalid input");
	
	return 0;
}
