# Notes for Programming Language C

- **Method** like a container in which we put our code

- **Variables** are essentially like containers.

   - Printing different data types with `printf`. All these are **format specifiers**
      - `%s`: printing strings
      - `%d`: printing integers
      - `%f`: printing doubles

   - Data types
      - `Int`: Integer
      - `double`: Decimal number
      - `char`: Characters
      - `char[]`: We can create a `String` using this. Technically called an Array. *Not techincally a Data type*

- `printf` is a function.

   - `\n` to add a newline

- **Constant** is a special type of Variable in C that cannot be modified.

- Getting User Input in C

- We need to use `scanf` to be able to take an input from the user

```c {"id":"01J31B0DBRJA5KW0SD189EPEN1"}
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age2);
    printf("You are %d years old\n", age2);
}
```

- In `scanf`, we are essentially creating a pointer to the variable where we want to store the user input
- If you input your name, lets say, John Doe, `scanf` will only take John and once it sees a space, it will stop taking any more characters, eventhough we gave the input 'John Doe'.
- To take a line of text, instead of `scanf`, we can use `fgets()`

- Arrays

   - An Array is basically a data structure where we can store a bunch of different data values

- Return Statement

   - a return statement is a special line of code that we can include in our functions which will allow them to reeturn information.
   - void does not return anything

- Structs
    - Struct is a data structure that can be used to store mutiple data types together

    - To add value to a string type in a struct, we need to use `strcpy(destination, <value>)`