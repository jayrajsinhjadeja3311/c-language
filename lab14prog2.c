#include<stdio.h>
void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int a[n],i,j,cp=0,cn=0,cz=0;
	for(i=0;i<n;i++)
	{
		printf("enter an element into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			cp++;
		}
		else if (a[i]==0)
		{
			cz++;
		}
		else
		{
			cn++;
		}
	}
	printf("number is positive = %d\nnumber is zero = %d\nnumber is negative = %d",cp,cz,cn);
}
