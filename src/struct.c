#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    int sex;
};

struct Student
{
    char name[20];
    char id[10];
    int class;

} student;

struct Person person = {"黄益凛", 25, 1};
struct Person man;

void print_student(struct Student);
void print_person(struct Person *);

int main()
{
    man = person;
    printf("person.name = %s; man.age = %d;\n", person.name, man.age);

    strcpy(student.name, "天地一号");
    strcpy(student.id, "9527");
    student.class = 1;
    print_student(student);
    print_person(&man);
}

void print_student(struct Student student)
{
    printf("Student { name: %s, id: %s, class: %d }\n", student.name, student.id, student.class);
}

void print_person(struct Person *person)
{
    printf("Person { name: %s, age: %d, sex: %d }\n", person->name, person->age, person->sex);
}