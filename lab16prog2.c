#include<stdio.h>
void main()
{
	int a[3][3],i,j,cp=0,cn=0,co=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter an element into array a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			{
				cp++;
			}
			else if(a[i][j]<0)
			{
				cn++;
			}
			else if(a[i][j]==0)
			{
				co++;
			}
		}
	}
	printf("no. is positive = %d\nno. is negative = %d\nno. is zero = %d",cp,cn,co);

}
