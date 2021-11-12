#include <stdio.h>

int x = 8;
int y = 9;

int add()
{
    extern int x;
    extern int y;
    return x + y;
}

int main()
{
    printf("result: %d\n", add());
    printf("result: %d\n", add());
}