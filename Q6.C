#include<stdio.h> 
main()
{
int num,r,sum=0,m,y,rev,t;
 printf("enter the number");
 scanf("%d",&num);
 t=m=num;
while(num!=0)
{
r=num%10;
num/=10;
sum=sum+r;
}
printf("\n The sum of digit is %d",sum);
 while(m!=0)
{
y=m%10;
rev=rev*10+y;
m/=10;
}
printf("\n The reverse is %d ",rev);

if(rev==t)
printf("\n NO. is palindrome");
else
printf(\n NO. is not palindrome");



	
	
}