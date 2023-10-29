#include<stdio.h>
void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int a[n],i,j,co=0,ce=0;
	for(i=0;i<n;i++)
	{
		printf("enter an element into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			ce++;
		}
		else
		{
			co++;
		}
	}
	printf("number is odd = %d\nnumber is even = %d",co,ce);
}
