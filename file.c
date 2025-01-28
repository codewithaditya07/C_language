// file handling

#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    FILE *fp;
    puts("enter any string");
    gets(a);

    fp = fopen(" anhsul.txt", "w");
    fprintf(fp,a);                 // fp,a
    return 0;

}