// #include<stdio.h>

// int main(){
//     char value;
//     printf("Enter value=");
//     scanf("%c",&value);
//     ((value>='a' &&value<-'z'||(value>-'A' && value<='Z')))? printf("It is an alphabet"):printf("Not an alphabet");
//     return 0;
// }

//Find the entered value is alphabet or not using ternary operator
#include<stdio.h>
int main()
{
char value;
printf("Enter value=");
scanf("%c",&value);

((value>='a'&&value<='z')||(value>='A'&& value<='Z'))?
printf("Its an alphabet"):printf("Not an alphabet");
return 0;
}