# 0x1B. C - Sorting algorithms & Big O

## Background Context

This project is meant to be done by groups of two students. Each group of two should [pair program](https://intranet.alxswe.com/rltoken/gIcHRL9I7i1lw2CTAll37A) for at least the mandatory part.

## Resources

**Read or watch**:

- [Sorting algorithm](https://intranet.alxswe.com/rltoken/-j5MKLBlzZAC2RfJ5DTBIg)
- [Big O notation](https://intranet.alxswe.com/rltoken/WRvrE2BaNVQFssHiUATTrw)
- [Sorting algorithms animations](https://intranet.alxswe.com/rltoken/ol0P7NbYVb5R31iOv4Q40A)
- [15 sorting algorithms in 6 minutes](https://intranet.alxswe.com/rltoken/_I0aEvhfJ66Xyob6dd9Utw) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
- [CS50 Algorithms explanation in detail by David Malan](https://intranet.alxswe.com/rltoken/Ea93HeEYuNkOL7sGb6zzGg)
- [All about sorting algorithms](https://intranet.alxswe.com/rltoken/21X_eaj5RGcLIL9mZv2sqw)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/b-QhraVUoSGmQ1C4QfNoFw), **_without the help of Google_**:

### General Objectives

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

### GitHub

There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

## More Info

### Data Structure and Functions

- For this project you are given the following `print_array`, and `print_list` functions:

```C
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```C
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
- Please use the following data structure for doubly linked list:

```C
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

Please, note this format is used for Quiz and Task questions.

- `O(1)`
- `O(n)`
- `O(n!)`
- n square -> `O(n^2)`
- log(n) -> `O(log(n))`
- n \* log(n) -> `O(nlog(n))`
- n + k -> `O(n+k)`
- …

Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

### Tests

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: Random.org

## Tasks

### 0. Bubble sort (mandatory)

[![Bubble Sort](css/bubble.png)](https://youtu.be/lyZQPjUT5B4)

Write a function that sorts an array of integers in ascending order using the `Bubble sort` algorithm

- Prototype: `void bubble_sort(int \*array, size_t size);`
- You’re expected to print the array after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `0-bubble_sort.c`, `0-O`

### 1. Insertion sort (mandatory)

[![insertion sort](css/insertion.png)](https://youtu.be/ROalU379l3U)

Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://intranet.alxswe.com/rltoken/GocxRKbPdsmERXeOHMCO2w) algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
- You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo:**

- GitHub repository: `sorting_algorithms`
- File: `1-insertion_sort_list.c`, `1-O`

### 2. Selection sort (mandatory)

[![selection_sort](css/selection.png)](https://youtu.be/Ns4TPTC8whw)

Write a function that sorts an array of integers in ascending order using the `Selection sort` algorithm

- Prototype: `void selection_sort(int *array, size_t size);`
- You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `2-selection_sort.c`, `2-O`

### 3. Quick sort (mandatory)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

- Prototype: `void quick_sort(int *array, size_t size);`
- You must implement the `Lomuto` partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `3-quick_sort.c`, `3-O`

### 4. Shell sort - Knuth Sequence (Advanced)

Write a function that sorts an array of integers in ascending order using the [Shell sort](https://intranet.alxswe.com/rltoken/FdpP4Qin3iDAaz1kuPD2Kg) algorithm, using the Knuth sequence

- Prototype: `void shell_sort(int \*array, size_t size);`
- You must use the following sequence of intervals (a.k.a the Knuth sequence):
  - `n+1 = n * 3 + 1`
  - `1, 4, 13, 40, 121, ...`
- You’re expected to print the `array` each time you decrease the interval (See example below).

#### No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `100-shell_sort.c`

### 5. Cocktail shaker sort (Advanced)

Write a function that sorts a doubly linked list of integers in ascending order using the [Cocktail shaker sort](https://intranet.alxswe.com/rltoken/bwa4mHfUbbWTB8J2OIHvpA) algorithm

- Prototype: `void cocktail_sort_list(listint_t **list);`
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `101-O`, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `101-cocktail_sort_list.c`, `101-O`

### 6. Counting sort (Advanced)

Write a function that sorts an array of integers in ascending order using the [`Counting sort`](https://intranet.alxswe.com/rltoken/ChcoDSCqnJHGC-qrSPEGHQ) algorithm

- Prototype: `void counting_sort(int *array, size_t size);`
- You can assume that `array` will contain only numbers `>= 0`
- You are allowed to use `malloc` and `free` for this task
- You’re expected to print your counting array once it is set up (See example below)
  This array is of size `k + 1` where `k` is the largest number in `array`

Write in the file `102-O`, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `102-counting_sort.c`, `102-O`

### 7. Merge sort (Advanced)

Write a function that sorts an array of integers in ascending order using the `Merge sort` algorithm

- Prototype: `void merge_sort(int *array, size_t size);`
- You must implement the `top-down` merge sort algorithm
  When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` `->` `{1, 2}`, `{3, 4, 5}`
  Sort the left array before the right array
- You are allowed to use `printf`
- You are allowed to use `malloc` and `free` only once (only one call)
- Output: see example

Write in the file `103-O`, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `103-merge_sort.c`, `103-O`

### 8. Heap sort (Advanced)

Write a function that sorts an array of integers in ascending order using the `Heap sort` algorithm

- Prototype: `void heap_sort(int *array, size_t size);`
- You must implement the `sift-down` heap sort algorithm
- You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `104-O`, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `104-heap_sort.c`, `104-O`

### 9. Radix sort (Advanced)

Write a function that sorts an array of integers in ascending order using the [`Radix sort`](https://intranet.alxswe.com/rltoken/pBsj4j_AF_mJAgNZWmX3VQ) algorithm

- Prototype: `void radix_sort(int *array, size_t size);`
- You must implement the `LSD` radix sort algorithm
- You can assume that array will contain only numbers `>= 0`
- You are allowed to use `malloc` and `free` for this task
- You’re expected to print the `array` each time you increase your `significant digit` (See example below)

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `105-radix_sort.c`

### 10. Bitonic sort (Advanced)

Write a function that sorts an array of integers in ascending order using the [`Bitonic sort`](https://intranet.alxswe.com/rltoken/N-bjAbxm5yr4DoeIDz5lLw) algorithm

- Prototype: `void bitonic_sort(int *array, size_t size);`
- You can assume that `size` will be equal to `2^k`, where `k >= 0` (when `array` is not `NULL …` )
- You are allowed to use `printf`
- You’re expected to print the `array` each time you swap two elements (See example below)
- Output: see example

Write in the file `106-O`, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `106-bitonic_sort.c`, `106-O`

### 11. Quick Sort - Hoare Partition scheme (Advanced)

Write a function that sorts an array of integers in ascending order using the [`Quick sort`](https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

- Prototype: `void quick_sort_hoare(int *array, size_t size);`
- You must implement the `Hoare` partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `107-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `107-quick_sort_hoare.c`, `107-O`

### 12. Dealer (Advanced)

[![dealer](css/dealer.png)](https://youtu.be/_HJlGWXzlLA)

Write a function that sorts a deck of cards.

- Prototype: `void sort_deck(deck_node_t **deck);`
- You are allowed to use the C standard library function `qsort`
- Please use the following data structures:

```C
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
```

- You have to push you `deck.h` header file, containing the previous data structures definition
- Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
- You can assume there is exactly `52` elements in the doubly linked list.
- You are free to use the sorting algorithm of your choice
- The deck must be ordered:
  - From `Ace` to `King`
  - From Spades to Diamonds
  - See example below

**Repo**:

- GitHub repository: `sorting_algorithms`
- File: `1000-sort_deck.c`, `deck.h`
