#include <stdio.h>

/**
 * &a 取到变量a或函数的地址
 * 
 * *a 取到存储在地址a的变量的值 
 * 
 * 
 **/

int main()
{
    int f = 123;
    int *ptr;
    ptr = &f;

    // data: 123, 0x7ffeed54d31c
    printf("data: %d, %p\n", *ptr, ptr);

    printf("func main: %p\n", &main);
}
