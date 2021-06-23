#include<stdio.h>

main()
{
    int mnth,year;
    printf("enter a year\n");
    scanf("%d",&year);
    printf("enter a mnth\n");
    scanf("%d",&mnth);

    
if (year%100!=0 && year%4==0)
 {
 printf ("366 days");
}    
  else 
        {
        printf(" 365 days");
        
	}   
  
   if(mnth==1)
    {
        printf("31 days");
	
    }
 else if(mnth==3)
        {
        printf(" 31 days");
        
	}
else if(mnth==5)
        {
        printf(" 31 days");
        
	}
else if(mnth==7)
        {
        printf(" 31 days");
        
	}
else if(mnth==8)
        {
        printf(" 31 days");
        
	}
else if(mnth==10)
        {
        printf(" 31 days");
        
	}
else if(mnth==12)
        {
        printf(" 31 days");
        
	}
   else  if(mnth==4)
      {
      printf("30 days");
	}
 else  if(mnth==6)
      {
      printf("30 days");
	}
 else  if(mnth==9)
      {
      printf("30 days");
	}
 else  if(mnth==11)
      {
      printf("30 days");
	}

   else if(mnth==2)
	{
        printf("29 & 28 days");
	}

   
   
   
else
  printf("invalid input");
}