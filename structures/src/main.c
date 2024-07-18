#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef double INTEGER; // this essentially means that we can use INTEGER to refer to double type

struct {
    char *Engine;
    char *fuel_type;
    int fuel_tank_cap;
    int seating_map;
    float city_milage;
} car1, car2;

struct employee {
    char *name;
    int age;
    int salary;
};

int manager(){
    
    struct employee manager;

    manager.age = 27;
    if(manager.age > 30){
        manager.salary = 65000;
    }else {
        manager.salary = 55000;
    }
    return manager.salary;

}


int main(){
    car1.Engine = "Honda";
    car2.Engine = "Ferrari";
    printf("%s\n", car1.Engine);
    printf("%s\n", car2.Engine);

    struct employee emp1;
    struct employee emp2;

    printf("Enter the salary of Employee 1: ");
    scanf("%d", &emp1.salary);

    printf("Enter the salary of Employee 2: ");
    scanf("%d", &emp2.salary);

    printf("The salary of Employee 1 is %d\n", emp1.salary);
    printf("The salary of Employee 2 is %d\n", emp2.salary);
    printf("The salary of Manager is %d\n", manager());


}