#include<stdio.h>
void main()
{
int choice,a,b,c;
printf("please enter two number");
scanf("%d %d",&a,&b);
	printf("\n please enter 1 for +,2 for -,3 for / and 4 for *\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			c=a+b;
			printf(" %d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
			case 3:
				c=a/b;
				printf("%d",c);
				break;
				case 4:
				c=a*b;
				printf("%d",c);
				break;
			default :
				printf("invalid input");
				break;
			
	}