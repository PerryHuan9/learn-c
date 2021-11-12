#include <stdio.h>

/**
 * siezof()返回类型或者变量的大小（即在内存中所占的字节数）
 * 
 **/
int main()
{
    printf("\nchar: %lu", sizeof(char));
    printf("\nshort: %lu", sizeof(short));
    printf("\nint: %lu", sizeof(int));
    printf("\nlong int: %lu", sizeof(long int));
    printf("\nlong: %lu", sizeof(long));
    printf("\nlong long: %lu", sizeof(long long));

    printf("\nfloat: %lu", sizeof(float));
    printf("\ndouble: %lu", sizeof(double));
    printf("\nlong double: %d\n", sizeof(long double));

    printf("\nsizeof(4)=%d", sizeof(4));  // 4
    printf("\nsizeof(4)=%d", sizeof(4l)); //8
}
