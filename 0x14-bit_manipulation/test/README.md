# 0x14. C - Bit manipulation

![plot](./test/bitwise.png)

## TESTING DOCUMENTATION

* **ALL TEST FILES** - to be kept in this **TEST** directory

### Testing [0-binary_to_uint.c](../0-binary_to_uint.c)

This function is supposed to convert a binary number to an ```unsigned int```.

* Prototype: ```unsigned int binary_to_uint(const char *b);```
* where ```b``` is pointing to a string of ```0``` and ```1``` chars
* Return: the converted number, or ```0``` if
  * there is one or more chars in the string ```b``` that is not ```0``` or ```1```
  * ```b``` is ```NULL```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-binary_to_uint.c -o a```
  * ```./a```

### Expected output with [0-main.c](./0-main.c) 😋

```C
1
5
0
98
402
```

### Testing [1-print_binary.c](./1-print_binary.c)

This is  a function that prints the binary representation of a number.

* Prototype: ```void print_binary(unsigned long int n);```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-print_binary.c ../_putchar.c -o b```
  * ```./b```

### Expected output with [1-main.c](./1-main.c) 😋

```C
0
1
1100010
10000000000
10000000001
```

### Testing [2-get_bit.c](../2-get_bit.c)

This is a function that returns the value of a bit at a given index.

* Prototype: ```int get_bit(unsigned long int n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to get
* Returns: the value of the bit at index ```index``` or ```-1``` if an error occured
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-get_bit.c -o c```
  * ```./c```

### Expected output with [2-main.c](./2-main.c) 😋

```C
1
1
0
```

### Testing [3-set_bit.c](../3-set_bit.c)

This is a function that sets the value of a bit to ```1``` at a given index.

* Prototype: ```int set_bit(unsigned long int *n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to set
* Returns: ```1``` if it worked, or ```-1``` if an error occurred
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-set_bit.c -o d```
  * ```./d```

### Expected output with [3-main.c](./3-main.c) 😋

```C
1056
1024
99
```

### Testing [4-clear_bit.c](../4-clear_bit.c)

This is a function that sets the value of a bit to ```0``` at a given index.

* Prototype: ```int clear_bit(unsigned long int *n, unsigned int index);```
* where ```index``` is the index, starting from ```0``` of the bit you want to set
* Returns: ```1``` if it worked, or ```-1``` if an error occurred
* The file name [4-clear_bit.c](./4-clear_bit.c)
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-clear_bit.c -o e```
  * ```./e```

### Expected output with [4-main.c](./4-main.c) 😋

```C
0
0
96
```

### Testing [5-flip_bits.c](../5-flip_bits.c)

This a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: ```unsigned int flip_bits(unsigned long int n, unsigned long int m);```
* It does not use the ```%``` or ```/``` operators 🥴
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../5-flip_bits.c -o f```
  * ```./f```

### Expected output with [5-main.c](../5-main.c) 😋

```C
2
5
3
1
```

### Testing [100-get_endianness.c](../100-get_endianness.c)

This is a function that checks the endianness.

* Prototype: ```int get_endianness(void);```
* Returns: ```0``` if big endian, ```1``` if little endian
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-get_endianness.c -o h```
  * ```./h```

### Expected output with [100-main.c](./100-main.c) 😋

```C
Little Endian
```

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
