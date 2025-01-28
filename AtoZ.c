// Print A to Z FROM FOR LOOP
/*#include<stdio.h>
int main(){
    for(char ch='a';ch<='z';ch++)
    {
    printf("%c\n",ch);
    }
    return 0;
}*/
// Print A to Z FROM while LOOP
/*#include <stdio.h>
int main (){
    char ch;
    ch='a';
    while (ch<='z')
    {
        printf("%c\n",ch);
        ch++;

    }

    return 0;
}*/
#include <stdio.h>
int main()
{
    char ch;
    ch = 'a';
    do
    {
        printf("%c\n", ch);
        ch++;
    } while (ch <= 'z');

    return 0;
}