#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 申请内存:
 * 1. void *calloc(int num, int size); 申请长度为num大小为size的连续空间，并会初始化为0
 * 2. void *malloc(int num); 申请长度为num的连续空间
 * 3. void *realloc(void *addre, int size) 重新申请size大小的空间，并将addre地址的内容复制过去
 * 
 * 内存释放：
 * 1. void free(void *addre); 释放空间
 * 
 * */

int main() {
    char str[20] = {"hello world"};
    char* str2;
    str2 = calloc(20, sizeof(char));
    strcpy(str2, "new hello world");
    printf("str[20]:%s\n", str);
    printf("*str2:%s\n",str2);
    realloc(str2, 50);
    strcat(str2, "天街草色映莲青");
    printf("str2:%s\n", str2);
    free(str2);
    printf("after free: str2:%s\n", str2);


}