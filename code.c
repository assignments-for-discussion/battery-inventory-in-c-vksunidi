#include<stdio.h>
#include<math.h>
#include<conio.h>
void main
{
int low,high,medium;
int count;
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
