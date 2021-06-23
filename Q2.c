#include <stdio.h>
main()
{
int x,z;
printf (" enter 1stno");

scanf(" %d",&x);
z=x%2;
if(z==0)
{
printf(" no is odd");
}
else 
printf(" no is even");
return 0;
}