#include <stdio.h>
    int x = 0;
    int main()
    {
        int *ptr = &x;
        printf("%p\n", ptr);
        x++;
        printf("%p\n ", ptr);
    }