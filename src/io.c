#include <stdio.h>

void get_put_char();
void gets_puts();
void scanf_printf();

int main()
{

    get_put_char();
    gets_puts();
    scanf_printf();
    return 0;
}

/**
 *
 * 每次输入输出一个字符
 *  
 **/
void get_put_char()
{
    int c;

    char value[20];
    int i = 0;

    printf("Enter a value :");

    while ((c = getchar()) != '\n')
    {

        value[i++] = c;
    }
    printf("\nYou entered: ");
    i = 0;
    while ((c = value[i++]) != '\0')
    {
        putchar(c);
    }
    putchar('\n');
}

/**
 * 每次输入输出一行字符串
 * */
void gets_puts()
{
    char value[20];
    printf("Enter a value :");
    gets(value);
    printf("\nYou entered: ");
    puts(value);
    putchar('\n');
}
/**
 * 使用format格式化输入或输出
 * */
void scanf_printf()
{
    char str[10];
    int i;
    printf("Enter a value :");
    scanf("%s %d", str, &i);
    printf("\nYou entered: ");
    printf("%s %d", str, i);
    putchar('\n');
}
