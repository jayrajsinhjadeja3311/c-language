#include<stdio.h>
void main()
{
	int i,j,n;
	char ch='A';
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
			printf("%d ",j);
			}
			else
			{
				printf("%c ",ch++);
			}
		}
		printf("\n");
	}
}
