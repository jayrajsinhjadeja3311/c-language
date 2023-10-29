#include<stdio.h>
void main()
{
	char str[100];
	int length=0,i;
	printf("enter a string : ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("\n%d",length);
	printf("\n%s",str);
}
