#include <stdio.h>
#include <stdlib.h>


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

    return 0;
}