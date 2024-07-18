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

    - A **structure tag** is used to identify a particular type of structure.

    - Using `typedef` give the user freedom by allowing them to create their own types
        - Syntax: `typedef existing_data_type new_data_type`
    
    - Array of Structure
        - Instead of declaring multiple variables, we can also declare an array of structure in which each element of the array will represent a structure variable.
    
    - Structing Padding
        - When an object of some structure type is declared then some contagious block of memory will be allocated to structure members.
        
        - processor doesn't read 1 byte at a time from memory. It read 1 word at a time.


- 2D Arrays and nested loops
    
    - Two Dimensional Arrays are essentially a sitution where we have an array where all the elements of arrays are actually arrays themselves

- Memory Addresses
    
    - All the variables you create, the data is stored on the Computer's RAM. RAM is the memory your computer is going to use when it's running programs.

- Pointers
    - A pointer is basically just a type of data that we can use inside of our programs. It is basically a memory address anda memory address basically refers to a physical address inside of the memory of the computer.

- Dereferencing Pointers
    
    - When you are dereferencing a pointer, essentially what we are doing is we are going to the memory address of that pointer and grabbing the piece of information from there.

- Making Files
    - We can make files using the line of code below
    `FILE * fpointer = fopen("<filename>", FileMode)`
    
    the FileMode is essentially telling C what we want to do with the file.
    `r = read`, 
    `w = write` Create a new file or write over an existing file. `a = append` appending information into the file.

- Data types
    
    - Primitive Data Types
    - User defined Data types
    - Derived Data types