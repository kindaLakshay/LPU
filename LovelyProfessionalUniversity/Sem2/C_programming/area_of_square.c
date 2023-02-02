#include<stdio.h>

int main(){
    int side;
    printf("enter the side of the square: ");
    scanf("%d",&side);
    int area = side*side;
    printf("the area of the square is: %d units",area);
    return 0;
}