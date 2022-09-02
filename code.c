#include<stdio.h>
#include<math.h>
#include<conio.h>
void main
{
int count;
int a,b=4,c=7;
a=b/c*0.7
printf("the estimated battery life is:%d",b);
printf("enter the number of count of batteries");
scanf("%d",&count);
if(count<400)
{
printf("low");
}
else if((count>400) && (count<919))
{
printf("medium");
}
else if(count>920)
{
printf("High");
}
else
{
printf("invalid input enter the correct");
}
}
