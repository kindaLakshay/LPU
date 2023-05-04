#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(1073741824);
	*p=6;
	printf("%d",*p);
	//Memory was not deallocated, hence memory leak may arise
	//Solution
	//free(ptr);
	return 0;
}