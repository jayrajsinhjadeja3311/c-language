#include<stdio.h>
void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int a[n],i,sum=0;
	float avg=0;
	for(i=0;i<n;i++)
	{
		printf("enter an element into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("min = %d\nmax = %d\nsum = %d\navg = %f",min,max,sum,avg);
}
