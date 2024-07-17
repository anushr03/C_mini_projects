#include<stdio.h>

//Version 1
/*
int main() {

    double num1, num2;
    printf("Enter the first Number: ");
    scanf("%lf", &num1);

    printf("Enter the second Number: ");
    scanf("%lf", &num2);

    printf("The answer is: %f\n", num1+num2);
    return 0;


}
*/

/*------------------------------------------------*/

//Version 2

int main (){
    double num1, num2;
    char op;

    printf("Enter the first Number: ");
    scanf("%lf", &num1);

    printf("Enter the second Number: ");
    scanf("%lf", &num2);

    printf("Enter Operator: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%f\n", num1 + num2);
    }else if (op == '-'){
        printf("%f\n", num1 - num2);
    }else if (op == '*'){
        printf("%f\n", num1 * num2);
    }else if (op == '/'){
        printf("%f\n", num1 / num2);
    }else {
        printf("invalid");
    }
}
