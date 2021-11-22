#include <stdio.h>

/***
 * 有时候并不需要使用一个字节来存储数据，比如bool类型，只需要一bit就可以，
 * C语言提供了位域来指定属性要使用的位。
 * 需要注意的是，位域的属性只能是int和unsign int 两种类型，并且该属性保存的值不能超过它所指定的位数。
 * 
 * 下面声明一个位域类型：
 * 
 * */

struct Bit_Field
{
    unsigned int isOpen : 1; // 表示只使用一位，即它的值只能是0 或者 1
    int val : 5;
    int val2 : 8;
};

int main()
{
    struct Bit_Field bit = {
        isOpen : 1,
        val : 15,
        val2 : 127,
    };

    printf("bit.isOpen: %d\n", bit.isOpen);
    printf("bit.val: %d\n", bit.val);
    printf("bit.val2: %d\n", bit.val2);
}