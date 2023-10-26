# 0x14. C - Bit manipulation

![plot](./test/bitwise.png)

## OBJECTIVES

* Bit manipulation
* Bitwise operators
* Handle bitwise operations using ```malloc```, ```free``` and ```exit```.
* Handle bitwise operations without using functions like ```printf```, ```puts```, ```calloc```, ```realloc``` etc…
* You can use this [documentation](./test/README.md) to test this functions
* **ALL TEST FILES** - kept in **TEST** directory

## TASKS

### 0. 0

This is a function that converts a binary number to an ```unsigned int```.

* Prototype: ```unsigned int binary_to_uint(const char *b);```
* where ```b``` is pointing to a string of ```0``` and ```1``` chars
* Return: the converted number, or ```0``` if
  * there is one or more chars in the string ```b``` that is not ```0``` or ```1```
  * ```b``` is ```NULL```
* The file name [0-binary_to_uint.c](./0-binary_to_uint.c)

### 1. 1

This is  a function that prints the binary representation of a number.

* Prototype: ```void print_binary(unsigned long int n);```
* It does not use arrays 🥴
* It does not use malloc 🥴
* It does not use the % or / operators 🥴
* The file name [1-print_binary.c](./1-print_binary.c)

### 2. 10

This is a function that returns the value of a bit at a given index.

* Prototype: ```int get_bit(unsigned long int n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to get
* Returns: the value of the bit at index ```index``` or ```-1``` if an error occured
* The file name [2-get_bit.c](./2-get_bit.c)

## 3. 11

This is a function that sets the value of a bit to ```1``` at a given index.

* Prototype: ```int set_bit(unsigned long int *n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to set
* Returns: ```1``` if it worked, or ```-1``` if an error occurred
* The file name [3-set_bit.c](./3-set_bit.c)

### 4. 100

This is a function that sets the value of a bit to ```0``` at a given index.

* Prototype: ```int clear_bit(unsigned long int *n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to set
* Returns: ```1``` if it worked, or ```-1``` if an error occurred
* The file name [4-clear_bit.c](./4-clear_bit.c)

### 5. 101

This a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: ```unsigned int flip_bits(unsigned long int n, unsigned long int m);```
* It does not use the ```%``` or ```/``` operators 🥴
* The file name [5-flip_bits.c](./5-flip_bits.c)

### 6. Endianness

This is a function that checks the endianness.

* Prototype: ```int get_endianness(void);```
* Returns: ```0``` if big endian, ```1``` if little endian
* The file name [100-get_endianness.c](./100-get_endianness.c)

### 7. Crackme3

Password for ```this program```.

* The password is saved in [101-password](./101-password)
* This file contains the exact password, no new line, no extra space
* Did I  😋

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
