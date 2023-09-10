# 0x01. C - Variables, if, else, while

## General Requirements

* All the files have been compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All the files end with a new line
* There are no errors and no warnings during compilation
* System is not used
* This code is complied with the Betty style.

## 0. Positive anything is better than negative nothing

### 0-positive_or_negative.c

* This program will assign a random number to the variable n each time it is executed. **Complete the source code in order to print whether the number stored in the variable n is positive or negative.**

```shell

julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 

```

* You can find the source code [here](https://intranet.alxswe.com/rltoken/Dg4SuuP8gvRYnE54wktySg)
* The variable n will store a different value every time you will run this program

* The output of the program should be:
i. The number, followed by
. if the number is greater than 0: is positive
. if the number is 0: is zero
. if the number is less than 0: is negative
ii. followed by a new line

## 1. The last digit

This program will assign a random number to the variable n each time it is executed. **Complete the source code in order to print the last digit of the number stored in the variable n.**

```shell

julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$

```

* You can find the source code [here](https://intranet.alxswe.com/rltoken/rud8wr5x6VWeahUtd5P14A)
* The variable n will store a different value every time you run this program
* You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
* The string Last digit of, followed by
n, followed by
the string is, followed by
* if the last digit of n is greater than 5: the string and is greater than 5
* if the last digit of n is 0: the string and is 0
* if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
* followed by a new line

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

### 2-print_alphabet.c

* This program prints the alphabet in lowercase, followed by a new line.
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 3. alphABET

### 3-print_alphabets.c

* This program prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 4. When I was having that alphabet soup, I never thought that it would pay off

### 4-print_alphabt.c

* This program prints the alphabet in lowercase, followed by a new line.
* Prints all the letters except q and e

* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 5. Numbers

### 5-print_numbers.c

* This program prints all single digit numbers of base 10 starting from 0, followed by a new line.
* There are no external function calls. All the code is in the main function

## 6. Numberz

### 6-print_numberz.c

* This program prints all single digit numbers of base 10 starting from 0, followed by a new line.
* Does not use any variable of type char
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 7. Smile in the mirror

### 7-print_tebahpla.c

* This program prints the lowercase alphabet in reverse, followed by a new line.
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 8. Hexadecimal

### 8-print_base16.c

* This program prints all the numbers of base 16 in lowercase, followed by a new line.
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than twice in this code

## 9. Patience, persistence and perspiration make an unbeatable combination for success

### 9-print_comb.c

* This program prints all possible combinations of single-digit numbers.
* Numbers are separated by ,, followed by a space
* Numbers are printed in ascending order
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than four times in this code
You are not allowed to use any variable of type char

## 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

### 100-print_comb3.c

* This program prints all possible different combinations of two digits.

* Numbers are separated by ,, followed by a space
* The two digits are different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Prints only the smallest combination of two digits
* Numbers are printed in ascending order, with two digits
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than five times in this code
* there is no variable of type char

## 11. The success combination in business is: Do what you do better... and: do more of what you do'...'

### 101-print_comb4.c

* This program prints all possible different combinations of three digits.

* Numbers are separated by ,, followed by a space
* The three digits are different
* 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than five times in this code
* there is no variable of type char

## 12. Software is eating the World

### 102-print_comb5.c

* This program prints all possible combinations of two two-digit numbers.

* The numbers range from 0 to 99
* The two numbers are separated by a space
* All numbers are printed with two digits. 1 is printed as 01
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers is printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
* It uses the putchar function (every other function (printf, puts, etc…) is forbidden)
* There are no external function calls. All the code is in the main function
* putchar is not used more than eight times in this code
* there is no variable of type char
