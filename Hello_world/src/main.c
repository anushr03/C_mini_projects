#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sayHi(char name[], int age){
    printf("Hello %s and %d years\n",name, age);
}

double cube (double num){
    double result = num * num * num;
    return result;
}

int max(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    } else if (num2 > num3){
        return num2;
    }
    return num3;
}
// Structs
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main(){ // method is like a container in which we can put our code

    // char characterName[] = "John";
    // int characterAge = 35;
    // printf("Hello World!\n");
    // printf("Hello %s aged %d\n", characterName, characterAge);

    // // Data Types

    // int age = 40;
    // double gpa = 3.9;
    // char grade = 'A'; // Character
    // char phrase[] = "Go Goa Gone"; // String

    // // User Input in C
    // int age2;
    // printf("Enter age: ");
    // scanf("%d", &age2);
    // printf("You are %d years old\n", age2);

    // // Taking a string input
    // char name[20]; //we need to specify the size so program knows how much memory to allocate.
    // printf("Enter name: ");
    // scanf("%s", name); // We don't need the & pointer for string
    // printf("You are %s \n", name);

    // // Taking a line of text input
    // char name2[20];
    // fgets(name2, 20, stdin); //fgets(char, int, FILE)
    // printf("You are %s \n", name2);

    //array
    int luckyNumber[] = {4, 8, 15, 32, 21};
    printf("%d\n", luckyNumber[0]);


    sayHi("Mike",12);

    printf("Answer: %f\n", cube(12));

    printf("Greater number: %d\n", max(15, 20, 10));

    // Struct
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Tom");
    strcpy(student1.major, "Business");

    //2D arrays and Nested loops
    int twoDArrays[3][2] = {
        {1,2}, {3,4},{5,6}

    };

    printf("%d\n", twoDArrays[0][0]);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%d,", twoDArrays[i][j]);
        }
        printf("\n");
    }

    //Memory addresses

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    // The address are all stored as physical address on the computer. 
    //The C program uses those addresses to get the data.

    printf("Age: %p\nGPA: %p\ngrade: %p\n", &age, &gpa, &grade);

    //Pointers
    int * pAge = &age;//the pointer variable is storing the memory address of the variable age
    double * pGpa = &gpa;
    char * pGrade = &grade;

    //Dereferencing a pointer
    printf("%d\n", *pAge); //we are essentially grabbing the 30 (physical value) stored in the memory addresses from the pointer variable



    return 0;
}