#include <stdio.h>

struct prac
{
	unsigned int a : 1;
	unsigned int b : 3;
};

int main()
{
	struct prac s={5,10};
	printf("%d %d",s.a,s.b);
	return 0;
}
