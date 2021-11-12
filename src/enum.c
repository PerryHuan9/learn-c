#include <stdio.h>

enum Week
{
    saturday = 1,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday
};

int main()
{

    enum Week workday;
    int a = 1;
    workday = (enum Week)a; //类型转换
    printf("weekend:%d\n", workday);
    return 0;
}