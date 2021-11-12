#include <stdio.h>

/**
 * static有两种含义：
 *  1. 当用以修饰局部变量时，即在函数中时，当函数开始执行和执行完毕时不会重复地初始化和销毁，而是所有的函数都会公用这个变量。
 *  2. 当修饰全局变量时，会让这个变量限定在当前文件中，其它的文件无法访问到这个变量
 * 
 * 
 **/

static int world = 12313;

int add10()
{
    static int ten = 0;
    ten++;
    printf("ten:%d\n", ten);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        add10();
    }
    printf("world:%d", world);
}