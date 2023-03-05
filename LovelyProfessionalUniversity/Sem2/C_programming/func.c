/*WAP to find the factorial a number using function(call by reference)
with arguments and return a value*/
#include<stdio.h>
long int fn(int*);
int main()
{
int n;
long int result;
printf("Enter n= ");
scanf("%d",&n);
result=fn(&n);
printf("Factorial= %d",result);
return 0;
}
long int fn(int *x)
{
long int f1=1;
for(int i=1;i<=*x;i++)
f1=f1*i;
return f1;
}

