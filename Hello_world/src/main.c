#include <stdio.h>

int main(){ // method is like a container in which we can put our code

    char characterName[] = "John";
    int characterAge = 35;
    printf("Hello World!\n");
    printf("Hello %s aged %d\n", characterName, characterAge);

    // Data Types

    int age = 40;
    double gpa = 3.9;
    char grade = 'A'; // Character
    char phrase[] = "Go Goa Gone"; // String

    // User Input in C
    int age2;
    printf("Enter age: ");
    scanf("%d", &age2);
    printf("You are %d years old\n", age2);

    // Taking a string input
    char name[20]; //we need to specify the size so program knows how much memory to allocate.
    printf("Enter name: ");
    scanf("%s", name); // We don't need the & pointer for string
    printf("You are %s \n", name);

    // Taking a line of text input
    char name2[20];
    fgets(name2, 20, stdin); //fgets(char, int, FILE)
    printf("You are %s \n", name2);

    return 0;
}