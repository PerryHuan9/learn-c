#include <stdio.h>

/***
 * register用以定义一个可能存储在寄存器中的局部变量，是否真的存储在寄存器中，取决于具体的实现。
 * 
 ***/

int main()
{

    register int a = 99;
    printf("%d:%d", a, 66);
    // printf("%d", &a); 会报错，因为a可能不在内存中，无法取址
}