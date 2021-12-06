#include <stdio.h>
#include <stdarg.h>

/**
 * 可变参数
 * 
 * 调用函数时，需要传入参数的个数
 * 1. 在函数内部，可变参数需要存储在va_list结构中
 * 2. 通过va_start()函数初始化va_list类型变量
 * 3. 通过va_arg()函数访问va_list中的变量
 * 4. 访问结束后通过va_end()回收内存
 * 
 * 
 * */
double average(int top, int num, ...)
{
    double sum=top;
    va_list arg_list;
    va_start(arg_list, num);
    double r;
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(arg_list, double);
    }
    va_end(arg_list);
    return sum / (num+1);
}

double average2(int num, ...)
{

    va_list valist;
    double sum = 0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return sum / num;
}

int main()
{
    printf("the average of 100, 12, 13 is: %f\n", average(5, 2, 12.0, 13.0));
    printf("Average of 2, 3, 4, 5 = %f\n", average2(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average2(3, 5, 10, 15));
}
