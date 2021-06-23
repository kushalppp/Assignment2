#include<stdio.h>
#include<string.h>
void main()
{
	int empid,deptno;
	char desgcode;
	printf("enter the employee id");
	scanf("%d",&empid);
	printf("enter the department number");
	scanf("%d",&deptno);
	printf("enter the designation code");
getchar();
scanf("%c",&desgcode);
	printf("the Emlpoyee with employee id %d is working in",empid);
	switch (deptno)
	{
		case 10:
			printf("\" Marketing\" ");
			break;
		case 20:
			printf(" \"Management\" ");
			break ;
		case 30:
			printf(" \"sales\" ");
			break ;
		case 40:
		    printf(" \"Designing\" " );
		break ;
		default :
		    	printf("\"not assigned\" " );
		    	break ;
	}
	printf("deparment as");
	switch (desgcode)
	{
		case 'M' :
			printf("\"Manager\"" );
			break;
		case 'S' :
			printf(" \"supervisior\" ");
			break;
		case 's' :
			printf(" \" security officer \" ");
			break;
		case 'C':
			printf("\" cleark \" ");
			break;

		default :
			printf(" \"not assigned\"" );
			break;
	}
	printf(" .");
	
}