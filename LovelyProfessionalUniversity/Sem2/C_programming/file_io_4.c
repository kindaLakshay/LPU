
#include<stdio.h>
int main()
{
    FILE *p;
    char a,b;
    p=fopen("f1.txt","w");
    if(p==NULL)
        printf("Can'not open the file");
    else
        printf("Yes its opened");

    printf("\nEnter input=");
    a=getchar();
    
    // fputc(a,p);
    // printf("\nSuccessfuly entered character into the file");
    // fclose(p);

    p=fopen("f1.txt","r");
    b=fgetc(p);
    printf("\nHere getting character from the file=%c",b);
    fclose(p);
    return 0;
}