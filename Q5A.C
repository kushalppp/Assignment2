#include<stdio.h>
void main()
{ 
int num1,num2,num3,max;
	printf("enter the three number");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2)
	{
	if(num1>num3)
	printf("\n %d is maximum",num1);
	else
	printf("\n %d is maximum",num3);
    }
    else
    {
    	if(num2>num3)
    	printf("\n %d is maximum",num2);
    	else
    	printf("\n %d is maximum",num3);
    	
	}
}