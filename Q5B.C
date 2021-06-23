#include<stdio.h>
void main()
{ 
int num1,num2,num3,max;
	printf("enter the three number");
	scanf("%d %d %d",&num1,&num2,&num3);
     max= num1>num2? (num1>num3 ?num1 : num3): (num2>num3) ? num2 :num3;
      printf("\n %d is maximum",max);
}