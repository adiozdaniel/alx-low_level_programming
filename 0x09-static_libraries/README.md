# 0x09. C - Static libraries

## 0. A library is not a luxury but one of the necessities of life

* This is a static library for ```C libmy.a``` containing all the functions listed below:

```C
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### libmy.a

Test the program with the following commands:

1. ```B ar -t libmy.a```

* Expected output:

```B

    0-isupper.o
    0-memset.o
    0-strcat.o
    1-isdigit.o
    1-memcpy.o
    1-strncat.o
    100-atoi.o
    2-strchr.o
    2-strlen.o
    2-strncpy.o
    3-islower.o
    3-puts.o
    3-strcmp.o
    3-strspn.o
    4-isalpha.o
    4-strpbrk.o
    5-strstr.o
    6-abs.o
    9-strcpy.o
    _putchar.o
```

2.```B nm libmy.a```

* Expected output

```B
0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
```

* Finally, compile (with: ```B gcc -std=gnu89 main.c -L. -lmy -o quote```) and run

  * Expected output:

```B
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
```

## 1. Without libraries what have we? We have no past and no future

* This is a script called ```B create_static_lib.sh``` that creates a static library called ```B liball.a``` from all the ```C .c``` files that are in the current directory.

* List all the c files currently in our directory: ```B ls *.c```
* Expected output:

```B
main.c  _putchar.c
```

* Use the script to create the required ```B liball.a``` file by running: ```B ./create_static_lib.sh```
**Do not expect an output**

* In case there is any output, then there is an error in the way you implemented this code. Take time to check again that it corresponds my code.
* List all the files with ```B .a``` extension.
* Expected output is: ```B liball.a```
* Now, we can use out ```B liball.a``` file to generate the output files: ```B ar -t liball.a```
* Expected output:

```B
main.o
_putchar.o
```

**coded with lots of love to my darling ~ Centrine**
@Eng. Adioz 👻
