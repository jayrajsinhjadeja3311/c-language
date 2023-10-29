#include<stdio.h>
void main()
{
	int i,n,n1=0,n2=1,n3;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
