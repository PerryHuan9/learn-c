#include <stdio.h>
#include <string.h>

union Data
{
    char name[20];
    int id;
    float money;
};

/**
 * union 类型允许多个不同类型的数据存储在同一块地址上，但某个时刻只能存在一个值, 共用体的大小自然也会是所有成员中最大那位
 * 
 * */
int main()
{
    union Data d1;
    printf("sizeof(d1) = %d\n", (int)sizeof(d1)); // 20

    strcpy(d1.name, "黄益凛");
    printf("d1.name: %s\n", d1.name);
    printf("d1.id: %d\n", d1.id);
    printf("d1.money: %f\n", d1.money);

    d1.id = 9527;
    printf("d1.name: %s\n", d1.name);   // 乱码
    printf("d1.id: %d\n", d1.id);       // 9527
    printf("d1.money: %f\n", d1.money); // 无效的小数

    d1.money = 8888.888;
    printf("d1.name: %s\n", d1.name);
    printf("d1.id: %d\n", d1.id);
    printf("d1.money: %f\n", d1.money);
}
