#include<string.h>
void main()
{
int y;
	printf("enter the character");
	y=getchar();
	if(y>=65 && y<=90 || y>=97 && y<=122)
	printf("\n Alphabet");
else if(y>=48 && y<=57)
	printf("\n Digit");
else if(y==13 || y==32 || y==9 || y==10)
	printf("\n Spcace");
	else
	printf("\n other option");

	if(y>=65 && y<=90)
	printf("\n Upper");
	if(y>=97 && y<=122)
	printf("\n Lower");
	
	
}