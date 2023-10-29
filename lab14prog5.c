#include<stdio.h>
void main()
{
	int i;
	float a[5],b[5];
	for(i=0;i<5;i++)
	{
		printf("enter an element into hidht and whight:",i,i);
		scanf("%f%f",&a[i],&b[i]);
	}
	int co=0;
	for(i=0;i<5;i++)
	{
		if(a[i]>170 && b[i]<50)
		{
			co++;
		}
	}
	printf("co= %d",co);
}
