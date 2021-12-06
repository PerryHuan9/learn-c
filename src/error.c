#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
/**
 * errno是一个全局变量，当前的程序运行的错误码
 * 输出错误信息有两种方法：
 *  1. perror(str) 会自动在str最后附带错误信息
 *  2. 使用fprintf往stderr打印错误信息，其中strerror能够根据errno获取错误信息
 * 
 * 
 * */

int main() {
    FILE *fp = NULL;
    fp = fopen("1.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "错误码：%d\n", errno);
        perror("通过perror输出错误信息");
        fprintf(stderr, "通过stderr输出错误信息: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    printf("end");
    exit(EXIT_SUCCESS);
}