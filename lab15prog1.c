#include<stdio.h>
void main()
{
	int n;
	printf("enter a number of arr : ");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++)
	{
	printf("enter an element into a[%d] = ",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]=%d",i,b[i]);
	}
}
