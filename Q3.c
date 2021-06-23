#include <stdio.h>
main()
{
int x,z;
printf (" enter 1stno");

scanf(" %d",&x);

if(x>>0)
{
printf(" no is +ve");
}
else if(x<<0)
{
printf(" no is -ve");
}
else
{
printf(" no is zero");
}
return 0;
}