#include <stdio.h>

int main()
{
    float f = 11.1;
    float *ptr = &f;
    printf("*ptr: %f, ptr: %p\n", *ptr, ptr);

    int *p = NULL;
}