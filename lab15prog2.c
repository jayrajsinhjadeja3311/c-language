#include<stdio.h>
void main()
{
	int n,cp,cn,co;
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
		if(a[i]<0)
		{
			cn++;
		}
	}
	printf("%d",cn);
}
