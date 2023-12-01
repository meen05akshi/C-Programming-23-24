#include <stdio.h>
int main()
{
	FILE *fp,*fp1;
	char s[50];
	fp=fopen("Z:/C Programming/Week 8/INPUT.txt","w");
	printf("Enter data to be inputted into the file: ");
	scanf("%[^\n]s",s);
	
	fprintf(fp,"%s",s); //inputting into file
	
	fp1=fopen("INPUT.txt","r");
	fscanf(fp1,"%s",s); //getting from file 
	printf("%s",s);
	fclose(fp);
	return 0;
}
