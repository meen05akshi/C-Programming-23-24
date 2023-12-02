#include <stdio.h>
int transaction(int acc_no, int req, int amt, struct customer bank[10]);

int n;
struct customer
{
	int acc;
	char name[50];
	int balance;
}bank[10];

int transaction(int acc_no, int req, int amt, struct customer bank[10])
{
	int flag=0;
	for(int i=0;i<5;i++)
	{
		if(acc_no==bank[i].acc)
		{
			n=i;
			if(req==0)
				bank[i].balance+=amt;
			else
				bank[i].balance-=amt;
			flag=1;
			break;
		}
	}
	if (flag==1)
		return 1;
	else
		return 0;
}

int main()
{
	for(int i=0;i<5;i++)
	{
		printf("Enter account number, name, balance for customer %d: ",(i+1));
		scanf("%d %s %d",&bank[i].acc,bank[i].name,&bank[i].balance);
	}
	
	int a,choice;
	int amount;
	printf("Enter your account number: ");
	scanf("%d",&a);
	printf("\nWould you like to withdraw or deposit: \n0.Deposit \n1.Withdraw\n");
	scanf("%d",&choice);
	
	if(choice==0)
		printf("\nWhat amount would you like to deposit? ");
	else
		printf("\nWhat amount would you like to withdraw? ");
	scanf("%d",&amount);
	
	int c=transaction(a,choice,amount,bank);
	
	if (c==1)
		printf("\nTransaction successful. Remaining balance: %d",bank[n].balance);
	else
		printf("\nTransaction fails");
	return 0;
}
