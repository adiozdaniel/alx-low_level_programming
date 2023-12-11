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
```gcc -Wall -Werror -Wextra -pedantic -std=c89 -shared -o libdynamic.so -fPIC -I/usr/local/include/python3.4m/ ./libdynamic/*.c```

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

#### Run the script

Run the following commands:

* Give permission to the script: ```chmod +x 1-create_dynamic_lib.sh```
* Check the availability of the files. Depending on where they are saved. In my case ```ls ./libdynamic/*.c```

  * Expected output:

```py
./libdynamic/_char_case.c
./libdynamic/_interger.c
./libdynamic/_locaters.c
./libdynamic/_memory.c
./libdynamic/_printer.c
./libdynamic/_string.c
```

* Run the script inside the directory
* check the output ```nm -D --defined-only liball.so```

### 2. Let's call C functions from Python

I know, you’re missing C when coding in Python. So let’s fix that!

🤔 Really, who lied you?

Create a dynamic library that contains C functions that can be called from Python.

[see implementation](test/README.md)

### 3. Code injection: Win the Giga Millions!

![tumbler](css/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg)
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

* Our mole got us a copy of the program, you can download it [here](https://github.com/alx-tools/0x18.c). Our mole also gave us a piece of documentation:

```py
/* Giga Millions program
  * Players may pick six numbers from two separate pools of numbers:
  * - five different numbers from 1 to 75 and
  * - one number from 1 to 15
  * You win the jackpot by matching all six winning numbers in a drawing.
  * Your chances to win the jackpot is 1 in 258,890,850
  *
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```

* You can’t modify the program ```gm``` itself as Master Sysadmin Sylvain (MSS) always checks its ```MD5``` before running it
* The system is an ```Linux Ubuntu 16.04```
* The server has internet access
* Our mole will be only able to run two commands from a shell script, without being detected by MSS
* Your shell script should be maximum 3 lines long. You are not allowed to use ```;```, ```&&```, ```||```, ```|```, ` (it would be detected by MSS), and have a maximum of two commands
* Our mole has only the authorization to upload one file on the server. It will be your shell script
* Our mole will run your shell script this way: ```mss@gm_server$ . ./101-make_me_win.sh```
* Our mole will run your shell script from the same directory containing the program ```gm```, exactly 98 seconds before MSS runs ```gm``` with my numbers: ./```gm 9 8 10 24 75 9```
* MSS will use the same terminal and session than our mole
* Before running the ```gm``` program, MSS always check the content of the directory
* MSS always exit after running the program ```gm```
* TL;DR; This is what is going to happen

**Tip:** ```LD_PRELOAD```

![greeting](../files/greeting.svg)
