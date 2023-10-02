# 0x0B. C - malloc, free

## 0. Float like a butterfly, sting like a bee

* A function that creates an array of chars, and initializes it with a specific char.

### 0-create_array.c

* Prototype: ```C char *create_array(unsigned int size, char c);```
* Returns ```C NULL```  if size = ```C 0```
* Returns a pointer to the array, or ```C NULL``` if it fails

## 1. The woman who has no imagination has no wings

* A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
**FYI:** The standard library provides a similar function: ```C strdup``` . Run ```C man strdup``` to learn more.

### 1-strdup.c

* Prototype: ```C char *_strdup(char *str);```
* The ```C _strdup()```  function returns a pointer to a new string which is a duplicate of the string ```C str```. Memory for the new string is obtained with ```C malloc```  , and can be freed with ```C free``` .
* Returns ```C NULL```  if str = NULL
* On success, the ```C _strdup```  function returns a pointer to the duplicated string. It returns ```C NULL```   if insufficient memory was available.

## 2. He who is not courageous enough to take risks will accomplish nothing in life

* A function that concatenates two strings.

### 2-str_concat.c

* Prototype: ```C char *str_concat(char *s1, char *s2);```
* The returned pointer should point to a newly allocated space in memory which contains the contents of ```C s1```, followed by the contents of ```C s2``` , and null terminated
* if ```C NULL``` is passed, treat it as an empty string
* The function should return ```C NULL``` on failure

## 3. If you even dream of beating me you'd better wake up and apologize

* A function that returns a pointer to a 2 dimensional array of integers.

### 3-alloc_grid.c

* Prototype: ```C int **alloc_grid(int width, int height);```
* Each element of the grid should be initialized to ```C 0```
* The function should return ```C NULL``` on failure
* If ```C width```   or ```C height``` is ```C 0``` or negative, return ```C NULL```

## 4. It's not bragging if you can back it up

* A function that frees a 2 dimensional grid previously created by your ```C alloc_grid``` function.

### 4-free_grid.c

* Prototype: ```C void free_grid(int **grid, int height);```
Note that we will compile with your ```C alloc_grid.c``` file. Make sure it compiles.

## 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

* A function that concatenates all the arguments of your program.

### 100-argstostr.c

* Prototype: ```C char *argstostr(int ac, char **av);```
* Returns ```C NULL``` if ```C ac == 0``` or ```C av == NULL```
* Returns a pointer to a new string, or ```C NULL``` if it fails
* Each argument should be followed by a ```C \n``` in the new string

## 6. I will show you how great I am

* A function that splits a string into words.

### 101-strtow.c

* Prototype: ```C char **strtow(char *str);```
* The function returns a pointer to an array of strings (words)
* Each element of this array should contain a single word, null-terminated
* The last element of the returned array should be ```C NULL```
* Words are separated by spaces
* Returns ```C NULL``` if ```C str == NULL``` or ```C str == ""```
* If your function fails, it should return ```C NULL```

@Eng. Adioz 👻
