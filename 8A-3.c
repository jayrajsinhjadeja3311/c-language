#include<stdio.h>
void main(){
    int a,b;
    printf("enter two values: ");
    scanf("%d %d",&a,&b);
    int i=a;
    printf("even number between %d and %d is: \n",a,b);
    while(i<=b){
        if(i%2==0){
    printf("%d\n",i);
        }
    i++;
        
    }
    }
