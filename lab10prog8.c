#include<stdio.h>
void main()
{
	int n,rem,sum=0,temp;
	printf("enter a number : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
		
	}
	if(sum==temp)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
}
