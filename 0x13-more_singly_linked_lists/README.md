# 0x13. C - More singly linked lists

## OBJECTIVES

* How to build and use linked lists
* Developing linked lists without the use of library functions like printf, puts, calloc, realloc etc…

## DATA STRUCTURE TO BE USED

```C
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

**ALL TEST FILES** - kept in **TEST** directory

## 0. Print list

This is a function that prints all the elements of a ```listint_t``` list.

* Prototype: ```size_t print_listint(const listint_t *h);```
* Return: the number of nodes
* If ```str``` is ```NULL```, print ```[0] (nil)```
* Did I say it is forbidden? This function employs ```printf``` 😋

### [0-print_listint.c](./0-print_listint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 1. List length

This is a function that returns the number of elements in a linked ```listint_t``` list.

* Prototype: ```size_t listint_len(const listint_t *h);```

### [1-listint_len.c](./1-listint_len.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 2. Add node

This is a function that adds a new node at the beginning of a ```listint_t``` list.

* Prototype: ```listint_t *add_nodeint(listint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed
* ```str``` needs to be duplicated
* Did I say it is forbidden? This function employs ```strdup``` 😋

### [2-add_nodeint.c](./2-add_nodeint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 3. Add node at the end

This a function that adds a new node at the end of a ```listint_t``` list.

* Prototype: ```listint_t *add_nodeint_end(listint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed

### [3-add_nodeint_end.c](./3-add_nodeint_end.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 4. Free list

This is a function that frees a ```listint_t``` list.

* Prototype: ```void free_listint(listint_t *head);```

### [4-free_listint.c](./4-free_listint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 5. Free

This is a function that frees a ```listint_t``` list.

* Prototype: ```void free_listint2(listint_t **head);```
* This function sets the ```head``` to ```NULL```

### [5-free_listint2.c](./5-free_listint2.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 6. Pop

This a function that deletes the head node of a ```listint_t``` linked list, and returns the head node’s data ```(n)```.

* Prototype: ```int pop_listint(listint_t **head);```
* if the linked list is empty return ```0```

### [6-pop_listint.c](./6-pop_listint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 7. Get node at index

This is a function that returns the nth node of a ```listint_t``` linked list.

* Prototype: ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);```
* where ```index``` is the index of the node, starting at ```0```
* if the node does not exist, return ```NULL```

### [7-get_nodeint.c](./7-get_nodeint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 8. Sum list

This is a function that returns the sum of all the data (n) of a ```listint_t``` linked list.

* Prototype: ```int sum_listint(listint_t *head);```
* if the list is empty, return ```0```

### [8-sum_listint.c](./8-sum_listint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 9. Insert

This is a function that inserts a new node at a given position.

* Prototype: ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```
* where```idx``` is the index of the list where the new node should be added. Index starts at ```0```
* Returns: the address of the new node, or ```NULL``` if it failed
* if it is not possible to add the new node at index```idx```, it does not add a new node and return```NULL```

### [9-insert_nodeint.c](./9-insert_nodeint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 10. Delete at index

This is a function that deletes the node at index ```index``` of a ```listint_t``` linked list.

* Prototype: ```int delete_nodeint_at_index(listint_t **head, unsigned int index);```
* where ```index``` is the index of the node that should be deleted. Index starts at ```0```
* Returns: ```1``` if it succeeded, ```C -1``` if it failed

### [10-delete_nodeint.c](./10-delete_nodeint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 11. Reverse list

This is a function that reverses a ```listint_t``` linked list.

* Prototype: ```listint_t *reverse_listint(listint_t **head);```
* Returns: a pointer to the first node of the reversed list
* It does not use more than one loop 🥴.
* It does not use use malloc, free or arrays
* Only a maximum of two variables is declared

### [100-reverse_listint.c](./100-reverse_listint.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 12. Print (safe version)

This is a function that prints a ```listint_t``` linked list.

* Prototype: ```size_t print_listint_safe(const listint_t *head);```
* Returns: the number of nodes in the list
* This function can print lists with a loop
* This function goes through a list only once
* If this function fails, it exits the program with status 98

### [101-print_listint_safe.c](./101-print_listint_safe.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 13. Free (safe version)

This is a function that frees a ```listint_t``` list.

* Prototype: ```size_t free_listint_safe(listint_t **h);```
* This function can free lists with a loop
* This function goes through a list only once
* Returns: the size of the list that was free’d
* The function sets the head to NULL

### [102-free_listint_safe.c](./102-free_listint_safe.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

## 14. Find the loop

This is a function that finds the loop in a linked list.

* Prototype: ```listint_t *find_listint_loop(listint_t *head);```
* Returns: The address of the node where the loop starts, or ```NULL``` if there is no loop
* No use of ```malloc```, ```free``` or arrays 🥴
* Only a maximum of two variables declared 🥴

### [103-find_loop.c](./103-find_loop.c)

[***🧐Look at the testing documentation in the test directory***](./test/README.md)

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
