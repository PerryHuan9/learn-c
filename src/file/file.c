#include <stdio.h>
#include <string.h>

/**
    r	打开一个已有的文本文件，允许读取文件。
    w	打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
    a	打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
    r+	打开一个文本文件，允许读写文件。
    w+	打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
    a+	打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。

 * */

void fgetc_demo();
void fgets_demo();
void fscanf_demo();
void fputc_demo();
void fputs_demo();
void fprintf_demo();

int main()
{
    // fgetc_demo();
    // fgets_demo();
    // fscanf_demo();
    // fputc_demo();
    // fputs_demo();
    fprintf_demo();
}

void fgetc_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "r");
    int c;
    printf("fgetc读取文件内容：\n");
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    printf("end\n\n");
    fclose(fp);
}

void fgets_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "r");
    char result[800] = {0};
    char str[50];
    int l = 0;
    printf("fgets读取文件内容：\n");
    while (fgets(str, 50, fp) != NULL)
    {
        strcat(result, str);
    }
    printf("%s\n\n", result);
    fclose(fp);
}

void fscanf_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "r");
    char str[250];
    char result[800] = {0};
    // 字符串。这将读取连续字符，直到遇到一个空格字符（空格字符可以是空白、换行和制表符）。
    while (fscanf(fp, "%s", str) != EOF)
    {
        strcat(result, str);
    }
    printf("%s\n\n", result);
    fclose(fp);
}

void fputc_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "a");
    char str[] = {"我欲成分归去，又恐琼楼玉宇。\n"};
    int len = strlen(str);
    printf("len:%d", len);
    int index = 0;
    while (index < len)
    {
        fputc(str[index], fp);
        index++;
    }
    fclose(fp);
    fgets_demo();
}

void fputs_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "a");
    char str[] = {"我欲成分归去，又恐琼楼玉宇。\n"};
    int len = strlen(str);
    fputs(str, fp);
    fclose(fp);
    fgets_demo();
}

void fprintf_demo()
{
    FILE *fp = NULL;
    fp = fopen("./text.txt", "a");
    char str[] = {"我欲成分归去，又恐琼楼玉宇。\n"};
    int len = strlen(str);
    fprintf(fp, "%s", str);
    fclose(fp);
    fgets_demo();
}
