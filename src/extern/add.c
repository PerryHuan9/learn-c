

/**
 * extern 用于提供一个全局变量引用，相当于告诉链接器该变量在其它文件有定义，应该引用该定义。
 * 
 * */

int add()
{
    extern int x;
    extern int y;
    return x + y;
}