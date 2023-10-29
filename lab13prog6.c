#include<stdio.h>
void main()
{
	int i,j,n,count=1;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",count);
			if(count==0)
			{
				count=1;
			}
			else
			{
				count=0;
			}
		}
		printf("\n");
	}
}
