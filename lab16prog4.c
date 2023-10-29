#include<stdio.h>
void main()
{
	int m,n,o,p,sum;
	printf("enter a number of array row and columb : ");
	scanf("%d%d%d%d",&m,&n,&o,&p);
	if(m==o && n==p){
		int a[m][n],b[o][p],i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("enter an element into array a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("enter an element into array b[%d][%d] = ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				sum=a[i][j]+b[i][j];
				printf("%d\t",sum);
			}
			printf("\n");
		}
	}
	else{
		return;
	}
	
	
}


