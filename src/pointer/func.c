#include <stdio.h>
#include <stdlib.h>
int *add(int *a, int *b);
void new_array(int array[], int size, int (*getNext)(void));

int main()
{
    int num = 88;
    int num2 = 12;

    printf("%d\n", *add(&num, &num2));

    int arr[10];
    new_array(arr, 10, rand);
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}

int *add(int *a, int *b)
{
    int c = *a + *b;
    return &c;
}

/**
 * 回调函数
 **/
void new_array(int array[], int size, int (*getNext)(void))
{

    for (int i = 0; i < size; i++)
    {
        array[i] = getNext();
    }
}
