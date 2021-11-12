#include <stdio.h>

/***
 * auto只能用于函数内，用于修饰局部变量，所有局部变量默认就是auto存储类型
 * 
 ***/

int main()
{
    auto int b = 999;
    int a = 666;
    printf("%d:%d", a, b);
}