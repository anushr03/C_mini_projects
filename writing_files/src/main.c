#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    
    FILE * fpointer = fopen("employees.txt", "r");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accountant");

    fopen("employees.txt", "a");
    fprintf(fpointer, "\nKelly, Customer Service");

    char line[255];
    FILE * fpointerReadFile = fopen("employees.txt","r");
    fgets(line, 255, fpointerReadFile);
    printf("%s", line);

    int x = 4;
    int *pX = &x;

    printf("x: %d, pX = %s", x, pX);




    fclose(fpointer);
    fclose(fpointerReadFile);
    return 0;

}