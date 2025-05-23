// #include<stdio.h>
// int main ()
// {
//     printf("Hello World");
//     return 0;
// }

// ADD
/*
#include <stdio.h>
int main()
{

    int a, b, c, per;
    a = 78;
    b = 88;
    c = a + b;
    printf("\ntotal marks %d", c);
    per = c * 100 / 200;
    printf("\npercentage %d", per);

    return 0;
}*/
// #include <stdio.h>
// int main()
// {
//     int math, english, science, hindi, marks, per;
//     math = 75;
//     english = 88;
//     science = 78;
//     hindi = 69;
//     marks = math + english + science + hindi;
//     printf("total marks of all subject %d", marks);
//     per = marks * 100 / 400;
//     printf("\npercentage of student %d", per);
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//     // Creating variables having different data types
//     int integer = 26;
//     float floating = 39.32;
//     char character = 'A';
 
//     // Printing variables with the help of their respective format specifiers
//     printf("%d\n", integer);
//     printf("%f\n", floating);
//     printf("%c\n", character);

//     return 0;
// }


// Write a program to read the full-name from the keyboard and display its corresponding short name. 10
// Ex : I/P : ANIL KUMAR GULATI
// 0/P : A K GULATI

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    char *tokens[10]; // assuming max 10 words
    int count = 0;

    printf("Enter the full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; // remove newline

    // Split the name into tokens
    char *token = strtok(fullName, " ");
    while (token != NULL) {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all but the last word
    for (int i = 0; i < count - 1; i++) {
        printf("%c ", toupper(tokens[i][0]));
    }

    // Print the last word in full and in uppercase
    for (int i = 0; tokens[count - 1][i] != '\0'; i++) {
        putchar(toupper(tokens[count - 1][i]));
    }

    printf("\n");
    return 0;
}
