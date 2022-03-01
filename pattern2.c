#include<stdio.h>
int main()
{
	int i,j;
	char c='A';
	for(i=1;i<=5;i++,printf("\n"))
	{ 
		for(j=1;j<=5;j++)
		{
			(j<i)?printf("_"):printf("%c",c);
		}
		c++;
	}
}
