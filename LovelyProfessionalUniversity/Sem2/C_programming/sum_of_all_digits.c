//Sum of all digits of a number using while loop
#include<stdio.h>
int main()
{
int n,d,sum=0;
printf("Enter n= ");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
sum+=d;
n=n/10;
}
printf("sum of digits= %d",sum);
return 0;
}