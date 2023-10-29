#include<stdio.h>
void main()
{
	int n,key;
	printf("enter a number of arr : ");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++)
	{
	printf("enter an element into a[%d] = ",i);
	scanf("%d",&a[i]);
	}
	printf("enter to element to search : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("index = %d",i);
			return;
		}
	}
	printf("not found");
}
