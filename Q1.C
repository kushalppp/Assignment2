#include <stdio.h>
main()
{

float z,x,y;
printf (" enter 1stno");

scanf(" %f",&x);
printf("2nd no");
scanf("%f",&y);
z=x/y;
printf("%f",z);
if(y==0)
{
printf(" error msg");
}
return 0;
}