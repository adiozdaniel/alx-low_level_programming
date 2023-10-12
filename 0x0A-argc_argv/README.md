# 0x0A-argc_argv

## 0. It ain't what they call you, it's what you answer to

* A program that prints its name, followed by a new line.

### 0-whatsmyname.c

    * If you rename the program, it will print the new name, without having to compile it again
    * The path is not removed before the name of the program

## 1. Silence is argument carried out by other means

* A program that prints the number of arguments passed into it.

### 1-args.c

    * This program  prints a number, followed by a new line.

## 2. The best argument against democracy is a five-minute conversation with the average voter

* A program that prints all arguments it receives.

### 2-args.c

    * All arguments are printed, including the first one
    * Only print one argument per line, ending with a new line

## 3. Neither irony nor sarcasm is argument

* A program that multiplies two numbers.

### 3-mul.c

    * This program prints the result of the multiplication, followed by a new line
    * You can assume that the two numbers and result of the multiplication can be stored in an integer
    * The program does not receive two arguments, it prints ```C Error```, followed by a new line, and return ```C 1```.

## 4. To infinity and beyond

* A program that adds positive numbers.

### 4-add.c

    * Print the result, followed by a new line
    * If no number is passed to the program, it  prints ```C 0```, followed by a new line
    * If one of the number contains symbols that are not digits, it prints ```C Error```, followed by a new line, and return ```C 1```.
    * You can assume that numbers and the addition of all the numbers can be stored in an ```C int```

## 5. Minimal Number of Coins for Change

* A program that prints the minimum number of coins to make change for an amount of money.

### 100-change.c

    * Usage: ```C ./change cents```
    * where ```C cents```  is the amount of cents you need to give back
    * if the number of arguments passed to your program is not exactly ```C 1```, print ```C Error``` , followed by a new line, and return ```C 1```.
    * you should use  ```C atoi``` to parse the parameter passed to your program
    * If the number passed as the argument is negative, print ```C 0``` , followed by a new line
    * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

**coded with lots of love to my darling ~ Centrine**
@Eng. Adioz 👻
