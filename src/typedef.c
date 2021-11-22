#include <stdio.h>

/**
 * typedef 用以为类型定义别名
 * 
 * 
 * */
typedef char Byte;

struct BookStruct
{
    char name[10];
    char id[8];
    char author[10];
};

typedef struct BookStruct Book;

typedef struct
{
    char name[10];
    int age;
    int sex;
} Person;

int main()
{
    Byte s = 's';
    char b = s;
    printf("Byte s=%c\n", b);
    Book book = {name : "完美世界", id : "9527", author : "辰东"};
    printf("Book {name: %s, id: %s, author: %s}\n", book.name, book.id, book.author);

    return 0;
}