# 0x13. C - More singly linked lists

## ABOUT

* This directory contains a list of test main files for all the functions created in this project.
* You can choose to ignore uploading the test outputs in the ```.gitignore```
* You are not obliged to use this directory, it's optional. Hence, you can also create other different ```main.c``` files for further testing purposes
* **KEEP ALL TEST FILES** - kept in this **TEST** directory

## [0-print_listint.c](../0-print_listint.c)

This is a function that prints all the elements of a ```listint_t``` list

* Prototype: ```size_t print_listint(const listint_t *h);```
* Return: the number of nodes
* If ```str``` is ```NULL```, print ```[0] (nil)```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_listint.c -o a```
  * ```./a```

### Expected output with [0-main.c](./0-main.c) 😋

```C
9
8
-> 2 elements
```

## [1-listint_len.c](../1-listint_len.c)

This is a function that returns the number of elements in a linked ```listint_t``` list.

* Prototype: ```size_t listint_len(const listint_t *h);```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-listint_len.c -o b```
  * ```./b```

### Expected output with [1-main.c](./1-main.c) 😋

```C
-> 2 elements
```

## [2-add_nodeint.c](../2-add_nodeint.c)

This is a function that adds a new node at the beginning of a ```listint_t``` list.

* Prototype: ```listint_t *add_nodeint(listint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed
* ```str``` needs to be duplicated
* This function is tested in conjuction with ```0-print_listint.c```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_nodeint.c ../0-print_listint.c -o c```
  * ```./c```

### Expected output with [2-main.c](./2-main.c) 😋

```C
1024
402
98
4
3
2
1
0
```

## [3-add_nodeint_end.c](../3-add_nodeint_end.c)

This a function that adds a new node at the end of a ```listint_t``` list

* Prototype: ```listint_t *add_nodeint_end(listint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed
* This function is tested in conjuction with ```0-print_listint.c```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_nodeint_end.c ../0-print_listint.c -o d```
  * ```./d```

### Expected output with [3-main.c](./3-main.c) 😋

```C
0
1
2
3
4
98
402
1024
```

## [4-free_listint.c](../4-free_listint.c)

This is a function that frees a ```listint_t``` list

* Prototype: ```void free_listint(listint_t *head);```
* This function is tested in conjuction with ```0-print_listint.c``` and ```3-add_nodeint_end.c```; using ```valgrind```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../4-free_listint.c -o e```
  * ```valgrind ./e```

### Expected output with [4-main.c](./4-main.c) 😋

```C
julien@ubuntu:~/0x13. More singly linked lists$
julien@ubuntu:~/0x13. More singly linked lists$
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643==
0
1
2
3
4
98
402
1024
==3643==
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643==
==3643== All heap blocks were freed -- no leaks are possible
==3643==
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$
```

## [5-free_listint2.c](../5-free_listint2.c)

This is a function that frees a ```listint_t``` list.

* Prototype: ```void free_listint2(listint_t **head);```
* This function sets the ```head``` to ```NULL```
* This function is tested in conjuction with ```0-print_listint.c``` and ```3-add_nodeint_end.c```; using ```valgrind```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c -o f```
  * ```valgrind ./f```

### Expected output with [5-main.c](./5-main.c) 😋

```C
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843==
0
1
2
3
4
98
402
1024
(nil)
==3843==
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843==
==3843== All heap blocks were freed -- no leaks are possible
==3843==
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$
```

## [6-pop_listint.c](../6-pop_listint.c)

This a function that deletes the head node of a ```listint_t``` linked list, and returns the head node’s data ```(n)```.

* Prototype: ```int pop_listint(listint_t **head);```
* if the linked list is empty return ```0```
* This function is tested in conjuction with ```0-print_listint.c```, ```5-free_listint2.c``` and ```3-add_nodeint_end.c```; using ```valgrind```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../6-pop_listint.c -o g```
  * ```valgrind ./g```

### Expected output with [6-main.c](./6-main.c) 😋

```C
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369==
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369==
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369==
==4369== All heap blocks were freed -- no leaks are possible
==4369==
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$
```

## [7-get_nodeint.c](../7-get_nodeint.c)

This is a function that returns the nth node of a ```listint_t``` linked list.

* Prototype: ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);```
* where ```index``` is the index of the node, starting at ```0```
* if the node does not exist, return ```NULL```
* This function is tested in conjuction with ```0-print_listint.c```, ```5-free_listint2.c``` and ```3-add_nodeint_end.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../7-get_nodeint.c -o h```
  * ```./h```

### Expected output with [7-main.c](./7-main.c) 😋

```C
0
1
2
3
4
98
402
1024
98
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$
```

## [8-sum_listint.c](../8-sum_listint.c)

This is a function that returns the sum of all the data (n) of a ```listint_t``` linked list.

* Prototype: ```int sum_listint(listint_t *head);```
* if the list is empty, return ```0```
* This function is tested in conjuction with ```5-free_listint2.c``` and ```3-add_nodeint_end.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c ../3-add_nodeint_end.c ../5-free_listint2.c ../8-sum_listint.c -o i```
  * ```./i```

### Expected output with [8-main.c](./8-main.c) 😋

```C
sum = 1534
```

## [9-insert_nodeint.c](../9-insert_nodeint.c)

This is a function that inserts a new node at a given position.

* Prototype: ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```
* where```idx``` is the index of the list where the new node should be added. Index starts at ```0```
* Returns: the address of the new node, or ```NULL``` if it failed
* if it is not possible to add the new node at index```idx```, it does not add a new node and return```NULL```
* This function is tested in conjuction with ```0-print_listint.c```, ```5-free_listint2.c``` and ```3-add_nodeint_end.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../9-insert_nodeint.c -o j```
  * ```./j```

### Expected output with [9-main.c](./9-main.c) 😋

```C
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
```

## [10-delete_nodeint.c](../10-delete_nodeint.c)

This is a function that deletes the node at index ```index``` of a ```listint_t``` linked list.

* Prototype: ```int delete_nodeint_at_index(listint_t **head, unsigned int index);```
* where ```index``` is the index of the node that should be deleted. Index starts at ```C 0```
* Returns: ```1``` if it succeeded, ```-1``` if it failed
* This function is tested in conjuction with ```0-print_listint.c```, ```5-free_listint2.c``` and ```3-add_nodeint_end.c```; using ```valgrind```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../10-delete_nodeint.c -o k```
  * ```valgrind ./k```

### Expected output with [10-main.c](./10-main.c) 😋

```C
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./k
==5571==
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
==5571==
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==5571==
==5571== All heap blocks were freed -- no leaks are possible
==5571==
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$
```

## [100-reverse_listint.c](../100-reverse_listint.c)

This is a function that reverses a ```listint_t``` linked list.

* Prototype: ```listint_t *reverse_listint(listint_t **head);```
* Returns: a pointer to the first node of the reversed list
* This function is tested in conjuction with ```0-print_listint.c```, ```5-free_listint2.c``` and ```3-add_nodeint_end.c```; using ```valgrind```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../100-reverse_listint.c -o l```
  * ```valgrind ./l```

### Expected output with [100-main.c](./100-main.c) 😋

```C
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117==
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117==
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117==
==3117== All heap blocks were freed -- no leaks are possible
==3117==
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$
```

## [101-print_listint_safe.c](../101-print_listint_safe.c)

This is a function that prints a ```listint_t``` linked list.

* Prototype: ```size_t print_listint_safe(const listint_t *head);```
* Returns: the number of nodes in the list
* This function can print lists with a loop
* This function goes through a list only once
* If this function fails, it exits the program with status 98
* This function is tested in conjuction with ```2-add_nodeint.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c ../2-add_nodeint.c ../101-print_listint_safe.c -o m```
  * ```./m```

### Expected output with [101-main.c](./101-main.c) 😋

```C
[0x1b500f0] 1024
[0x1b500d0] 402
[0x1b500b0] 98
[0x1b50090] 4
[0x1b50070] 3
[0x1b50050] 2
[0x1b50030] 1
[0x1b50010] 0
[0x1b50600] 1024
[0x1b505e0] 402
[0x1b505c0] 98
[0x1b505a0] 4
[0x1b50580] 3
[0x1b50560] 2
[0x1b50540] 1
[0x1b50110] 0
-> [0x1b505c0] 98
```

## [102-free_listint_safe.c](../102-free_listint_safe.c)

This is a function that frees a ```listint_t``` list.

* Prototype: ```size_t free_listint_safe(listint_t **h);```
* This function can free lists with a loop
* This function goes through a list only once
* Returns: the size of the list that was free’d
* The function sets the head to NULL
* This function is tested in conjuction with ```2-add_nodeint.c``` and ```C 101-print_listint_safe.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c ../2-add_nodeint.c ../101-print_listint_safe.c ../102-free_listint_safe.c -o n```
  * ```./n```

### Expected output with [102-main.c](./102-main.c) 😋

```C
[0x11260f0] 1024
[0x11260d0] 402
[0x11260b0] 98
[0x1126090] 4
[0x1126070] 3
[0x1126050] 2
[0x1126030] 1
[0x1126010] 0
[0x1126600] 1024
[0x11265e0] 402
[0x11265c0] 98
[0x11265a0] 4
[0x1126580] 3
[0x1126560] 2
[0x1126540] 1
[0x1126110] 0
-> [0x11265c0] 98
(nil), (nil)
```

## [103-find_loop.c](../103-find_loop.c)

This is a function that finds the loop in a linked list.

* Prototype: ```listint_t *find_listint_loop(listint_t *head);```
* Returns: The address of the node where the loop starts, or ```NULL``` if there is no loop
* This function is tested in conjuction with ```2-add_nodeint.c```, ```101-print_listint_safe.c``` and ```102-free_listint_safe.c```.
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c ../2-add_nodeint.c ../101-print_listint_safe.c ../102-free_listint_safe.c ../103-find_loop.c -o o```
  * ```./n```

### Expected output with [103-main.c](./103-main.c) 😋

```C
[0x13700f0] 1024
[0x13700d0] 402
[0x13700b0] 98
[0x1370090] 4
[0x1370070] 3
[0x1370050] 2
[0x1370030] 1
[0x1370010] 0
[0x1370560] 1024
[0x1370540] 402
[0x1370010] 98
[0x1370030] 7
[0x1370050] 6
[0x1370070] 5
[0x1370090] 4
[0x13700b0] 3
[0x13700d0] 2
[0x13700f0] 1
[0x1370110] 0
-> [0x1370030] 7
Loop starts at [0x1370030] 7
julien@ubuntu:~/0x13. More singly linked lists$
```

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
