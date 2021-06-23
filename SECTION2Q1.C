#include<stdio.h>
void main()
{
int month,year;
	printf("enter year and month number");
	scanf("%d %d",&year,&month);
	switch (month)
	{
		case 1 :
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days in this month ");
			break ;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days in this month");
			break ;
			case 2:
				if(year%400==0 || year%100!=0 && year%4==0)
				printf("29 days in month");
				else
				printf("28 days in this month");
				break ;
		default :
		printf("invalid input");
						
	}
}