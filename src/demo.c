#include <stdio.h>

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

    char num = 0b10000000;

    printf("origin: %d; move: %d\nn", num, num >> 5);
}
