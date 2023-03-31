#include<stdio.h>

int main(){
    int a[100],n,i;
    printf("\n enter number of elements: ");
    scanf("%d",&n);
    printf("\n Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n entered array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d",a[i]);
    }

    
    
    return 0;
}