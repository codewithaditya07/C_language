#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    // int a = 34;
    // char b = 'g';
    // float c = 253.6;

    struct employee e1;
    e1.code = 100;
    e1.salary = 35.800;

    strcpy(e1.name, "happy");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}