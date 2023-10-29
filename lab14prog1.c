#include<stdio.h>
void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter an element into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("normal oder");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("reverse oder");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
