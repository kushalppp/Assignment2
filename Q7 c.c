#include<stdio.h>
void main()
{
        int year;
	printf("enter year");
	scanf("%d",&year);
	year%100!=0 ?(year%4==0 ? printf("leap year"):printf("not leap year")) : (year%400==0 ? printf("leap year") : printf("not leap year"));
	
	}