# ![plot](css/title.svg)

## Resources

* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/XLLmLISlteUIxrLzNdm3_Q)
* [create dynamic libraries on Linux](https://intranet.alxswe.com/rltoken/JEqzgE_pPe48rvbspGL-2g)

### Learning Objectives

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable ```$LD_LIBRARY_PATH``` and how to use it
* What are the differences between static and shared libraries
* Basic usage ```nm```, ```ldd```, ```ldconfig```

## Requirements

### C

* Allowed editors: ```vi, vim, emacs```
* All the files can be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
* All the files end with a new line
* The first line of all the files are exactly ```#!/usr/bin/python3```
* A ```README.md``` file, at the root of the folder of the project, is mandatory
* The code is using the ```Betty style```. It can be checked using [```betty-style.pl```](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [```betty-doc.pl```](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
* No global variables used 🥴
* No more than 5 functions per file 🥴
* The only C standard library functions used are ```malloc```, ```free```, ```printf``` and ```exit```
* All the provided ```main.c``` files are for testing purposes. You can use other ```main.c``` files to check the code constistency and coding practices and expectations. 😋
* All the prototypes of all functions are included in header file called ```lists.h```
* The header file is well guarded 😋

### Bash

* Allowed editors: ```vi, vim, emacs```
* All the files can be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
* All the files end with a new line
* The first line of all the files are exactly ```#!/usr/bin/bash```
* A ```README.md``` file, at the root of the folder of the project, is mandatory
* All files are executable

## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the dynamic library libdynamic.so containing all the functions listed below:

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

#### To create it

Run the following command:
```gcc -Wall -Werror -Wextra -pedantic -std=c89 -shared -o libdynamic.so -fPIC -I/usr/local/include/python3.4m/ *.c```

#### To test it

Run the following commands:

* ```ls -la lib*```

  * Expected output:

```py
-rwxrwxr-x 1 myna myna 16320 Dec 11 08:35 libdynamic.so
```

**Note** Instead of ```myna```, your system name will appear.

* ```nm -D libdynamic.so```

```py
myna@myna-e7450:0x18-dynamic_libraries$ nm -D libdynamic.so
000000000000121c T _abs
0000000000001258 T _atoi
                 w __cxa_finalize@GLIBC_2.2.5
                 w __gmon_start__
00000000000011e3 T _isalpha
0000000000001233 T _isdigit
0000000000001199 T _islower
00000000000011be T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
0000000000001478 T _memcpy
0000000000001438 T _memset
0000000000001547 T _putchar
0000000000001570 T _puts
00000000000015f3 T _strcat
000000000000131b T _strchr
0000000000001726 T _strcmp
00000000000015b0 T _strcpy
00000000000014bf T _strlen
000000000000164e T _strncat
00000000000016b9 T _strncpy
00000000000013e8 T _strpbrk
00000000000014ed T _strspn
0000000000001363 T _strstr
                 U write@GLIBC_2.2.5
myna@myna-e7450:0x18-dynamic_libraries$
```

#### To test the dynamic library [see example](test/README.md)

### 1. Without libraries what have we? We have no past and no future

Create a script that creates a dynamic library called ```liball.so``` from all the ```.c``` files that are in the current directory.

#### To create ```libball.so```

Run the following command:
```gcc -Wall -Werror -Wextra -pedantic -std=c89 -shared -o libdynamic.so -fPIC -I/usr/local/include/python3.4m/ ./libdynamic/*.c```

#### To test it

Run the following commands:

* ```ls -la lib*```

  * Expected output:

```py
-rwxrwxr-x 1 myna myna 16320 Dec 11 08:35 libdynamic.so
```

![greeting](../files/greeting.svg)
