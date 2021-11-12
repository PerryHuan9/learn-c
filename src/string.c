#include <stdio.h>
#include <string.h>

int main()
{
    char strArr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str[] = "hello";

    printf("%s:%s\n", strArr, str);
    printf("%s==%s=%s\n", strArr, str, strArr == str ? "true" : "false");
    printf("strcom(%s, %s)=%s\n", strArr, str, strcmp(strArr, str) == 0 ? "true" : "false");

    char str2[strlen(str)];

    strcpy(str2, str);
    printf("after strcpy:%s\n", str2);
    char world[] = "world";
    char res[20];
    strcat(res, strArr);
    strcat(res, world);
    printf("strcat: %s\n", res);

    printf("len:%d\n", strlen(str));
    printf("h index:%d\n", strchr(str, 'l') - (char *)str);
}