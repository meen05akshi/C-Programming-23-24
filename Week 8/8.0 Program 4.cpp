#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("Copy.txt","r");
	fp2=fopen("CopyInto.txt","r");
	
	char s1=fgetc(fp1);
	char s2=fgetc(fp2);
	int flag=0;
	while(s1!=EOF && s2!=EOF)
	{
		if(s1!=s2)
		{
			flag=1;
			break;
		}
		s1=fgetc(fp1);
		s2=fgetc(fp2);	
	}
	
	printf("%d",flag);
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}
