#include <stdio.h>

int printf_array(int array[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {

        printf("%d,", array[i]);
    }
    printf("]");
}

int main()
{
    int array[8] = {8};
    printf_array(array, 8);
}
