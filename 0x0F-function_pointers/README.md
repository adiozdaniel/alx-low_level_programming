# 0x0F. C - Function pointers

## 0. What's my name

A function that prints a name.

* Prototype: ```C void print_name(char *name, void (*f)(char *));```

### 0-print_name.c

```C
julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$
```

## 1. If you spend too much time thinking about a thing, you'll never get it done

A function that executes a function given as a parameter on each element of an array.

* Prototype: ```C void array_iterator(int *array, size_t size, void (*action)(int));```
* where ```C size``` is the size of the array
* and ```C action``` is a pointer to the function you need to use

### 1-array_iterator.c

```C
julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$
```

## 2. To hell with circumstances; I create opportunities

A function that searches for an integer.

* Prototype: ```C int int_index(int *array, int size, int (*cmp)(int));```
* where ```C size``` is the number of elements in the array ```C array```
* ```C cmp``` is a pointer to the function to be used to compare values
* ```C int_index``` returns the index of the first element for which the ```C cmp``` function does not return ```C 0```
* If no element matches, return ```C -1```
* If size <= ```C 0```, return ```C -1```

### 2-int_index.c

```C
julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
julien@ubuntu:~/0x0e. Function pointers$ 
```

## 3. A goal is not always meant to be reached, it often serves simply as something to aim at

A program that performs simple operations.

* This program does not use the standard library
* It uses: calc num1 operator num2
* It is assumed that num1 and num2 are integers, so the atoi function is used to convert them from the string input to int
* operator is one of the following:
  * +: addition
  * -: subtraction
  * *: multiplication
  * /: division
  * %: modulo
* The program prints the result of the operation, followed by a new line
* It is assumed that the result of all operations can be stored in an int
* if the number of arguments is wrong, it prints Error, followed by a new line, and exit with the status 98
* if the operator is none of the above, it prints Error, followed by a new line, and exit with the status 99
* if the user tries to divide (/ or %) by 0, it prints Error, followed by a new line, and exit with the status 100
* This has four different files.

### 3-calc.h

* This file contains all the function prototypes and data structures used by this program.
* The following structure is assumed:

```C
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

### 3-op_functions.c

This file contains the 5 following functions:

* ```C op_add```: returns the sum of ```C a``` and ```C b```. Prototype: ```C int * op_add(int a, int b);```
* ```C op_sub```: returns the difference of ```C a``` and ```C b```. Prototype: ```C int op_sub(int a, int b);```
* ```C op_mul```: returns the product of ```C a``` and ```C b```. Prototype: ```C int * op_mul(int a, int b);```
* ```C op_div```: returns the result of the division of ```C a``` by ```C b```. Prototype: ```C int op_div(int a, int b);```
* ```C op_mod```: returns the remainder of the division of ```C a``` by ```C b```. Prototype: ```C int op_mod(int a, int b);```

### 3-get_op_func.c

This file contains the function that selects the correct function to perform the operation asked by the user.

* Prototype: ```C int (*get_op_func(char *s))(int, int);```
* where ```C s``` is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: ```C get_op_func("+")``` should return a pointer to the function ```C op_add```
* ```C switch```  is not allowed in this function statements
* ```C for``` or ```C do ... while``` loops is not allowed in this program
* ```C goto``` is not allowed in this function
* ```C else``` is not allowed in this function
* more than one ```C if``` statement is not used in this code
* more than one ```C while``` loop is not used in this code
* If ```C s``` does not match any of the 5 expected operators ```C (+, -, *, /, %)```, return ```C NULL```
* These two variables are not declared in this function:

```C
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
```

### 3-main.c

This file contains the main function only.

* Only one function used - main in this file
* The following functions are not directly called ```C op_add, op_sub, op_mul, op_div or op_mod``` from the ```C main``` function
* You have to use ```C atoi``` to convert arguments to ```C int```
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 ```C if``` statements

### Compilation and examples

```C
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
julien@ubuntu:~/0x0e. Function pointers$ 
```

## 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

This is a program that prints the ```C opcodes``` of its own main function.

Usage: ```C ./main number_of_bytes```
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use ```C printf``` and ```C atoi```
You have to use ```C atoi``` to convert the argument to an ```C int```
If the number of argument is not the correct one, print ```C Error```, followed by a new line, and exit with the status ```C 1```
If the number of bytes is negative, print ```C Error```, followed by a new line, and exit with the status ```C 2```
You do not have to compile with any flags
**Note:** if you want to translate your opcodes to assembly instructions, you can use, for instance ```C udcli```.

### 100-main_opcodes.c

```C
julien@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main
julien@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
julien@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
julien@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f             
julien@ubuntu:~/0x0e. Function pointers$ 
```

* **Note 0:** ```C je``` is equivalent to ```C jz```
* **Note 1:** depending on how you write your ```C main``` function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example

**coded with lots of love to my darling ~ Centrine**
@Eng. Adioz 👻
