#include <stdio.h>


int main(int argn, char* args[]) {
    for(int i=0; i< argn;i++) {
        printf("args[%d]=%s\n", i, args[i]);
    }
    return 0;
}




