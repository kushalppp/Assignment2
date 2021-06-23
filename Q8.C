#include<stdio.h>

  main()
{
  int r,amount;
float i;
  printf(" enter amount\n");
  scanf("%d",&amount);
  r=amount*5;
printf("%d",r);
if(amount>30)
  {
  i=r*0.09;
  printf(" your  discount: %d",i);
}
else if(amount>50)
  {
  i=r*0.85;
  printf(" your  discount: %d",i);
}

return 0;
}
   