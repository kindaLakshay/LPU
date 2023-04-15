/use of fputc()
#include<stdio.h>
int main()
{
FILE *p;
char a;
printf("Enter a=");
scanf("%c",&a);
p=fopen("C:/Users/ADMIN/Desktop/2023/practice/f2.txt","w");
if(p==NULL)
printf("File does not exit");
else
printf("File exist");

fputc(a,p);

//printf("\n\n%c",a);
fclose(p);
return 0;
}
