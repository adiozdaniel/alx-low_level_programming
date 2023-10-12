# 0x10. C - Variadic functions

## 0. Beauty is variable, ugliness is constant

This is a function that returns the sum of all its parameters.

* Prototype: ```C int sum_them_all(const unsigned int n, ...);```
* If ```C  n == 0```, return ```C 0```

### 0-sum_them_all.c (file_name)

***🧐Look at the format:***

```C
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a
1122
500
julien@ubuntu:~/0x0f. variadic functions$
```

## 1. To be is to be the value of a variable

This is a function that prints numbers, followed by a new line.

* Prototype: ```C void print_numbers(const char *separator, const unsigned int n, ...);```
* where ```C separator``` is the string to be printed between numbers
* and ```C n``` is the number of integers passed to the function
* This function employs ```C printf``` 😋
* If ```C separator``` is ```C NULL```, don’t print it
* It prints a new line at the end of the function

### 1-print_numbers.c (file_name)

***🧐Look at the format:***

```C
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```

## 2. One woman's constant is another woman's variable

This is a function that prints strings, followed by a new line.

* Prototype: ```C void print_strings(const char *separator, const unsigned int n, ...);```
* where ```C separator``` is the string to be printed between the strings
* and ```C n``` is the number of strings passed to the function
* This function employs ```C printf``` 😋
* If separator is ```C NULL```, it doesn’t print it
* If one of the string is ```C NULL```, it prints ```C (nil)``` instead
* It prints a new line at the end

### 2-print_strings.c (file_name)

***🧐Look at the format:***

```C
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$
```

## 3. To be is a to be the value of a variable

This is a function that prints anything.

* Prototype: ```C void print_all(const char * const format, ...);```
* where ```C format``` is a list of types of arguments passed to the function
  * ```C c```: ```C char```
  * ```C i```: ```C integer```
  * ```C f```: ```C float```
  * ```C s```: ```C char *``` (if the string is ```C NULL```, print ```C (nil)``` instead)
any other ```C char``` is ignored
* This function does not employ the use of ```C for```, ```C goto```, ternary operator, ```C else```, ```C do ... while```
* This function does not exceed a maximum of
  * 2 ```C while``` loops
  * 2 ```C if```
* This function does not exceed a maximum of 9 variables
* This function employs ```C printf``` 😋
* It also prints a new line at the end

### 3-print_all.c (filen_name)

***🧐Look at the format:***

```C
julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
B, 3, stSchool
julien@ubuntu:~/0x0f. Variadic functions$ 
```

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
