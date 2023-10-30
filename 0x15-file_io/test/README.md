# 0x15. C - File I/O

## TESTING DOCUMENTATION

* **ALL TEST FILES** - to be kept in this **TEST** directory

### Testing [0-read_textfile.c](../0-read_textfile.c)

This is a function that reads a text file and prints it to the ```POSIX``` standard output.

* Prototype: ```ssize_t read_textfile(const char *filename, size_t letters);```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-read_textfile.c -o a```
  * ```./a Requiescat```

### Expected output with [0-main.c](./0-main.c) 😋

```C
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
```

### Testing [1-create_file.c](../1-create_file.c)

This function creates a file.

* Prototype: ```int create_file(const char *filename, char *text_content);```
* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-create_file.c -o b```
  * ```./b hello world```
  * ```ls -l hello```

### Expected output with [1-main.c](./1-main.c) 😋

```B
-> 1)
```

```B
-rw------- 1 myna myna 5 Oct 30 13:06 hello
```

### Testing [2-append_text_to_file.c](../2-append_text_to_file.c)

* Prototype: ```int append_text_to_file(const char *filename, char *text_content);```
* ***🧐 This function is tested in the following format:***
  * ```echo -n Hello```
  * ```ls -l hello```
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-append_text_to_file.c -o c```
  * ```./c hello " World!"```
  * ```cat hello```

### Expected output with [2-main.c](./2-main.c) 😋

```C
myna@myna-e7450:test$ echo -n Hello
Hellomyna@myna-e7450:test$ ls -l hello
-rw------- 1 myna myna 36 Oct 30 13:31 hello
myna@myna-e7450:test$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-append_text_to_file.c -o c
myna@myna-e7450:test$ ./c hello " World!"
-> 1)
myna@myna-e7450:test$ cat hello
world World!
 World! World!

 World! World!myna@myna-e7450:test$
```

### Testing [3-cp.c](../3-cp.c)

This is a program that copies the content of a file to another file.

* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ../3-cp.c -o cp```
  * ```./cp incitatous Incitatous```
  * ```cat Incitatous```

### Expected output with [3-cp.c](../3-cp.c) 😋

```B
myna@myna-e7450:test$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ../3-cp.c -o cp
myna@myna-e7450:test$ ./cp incitatous Incitatous
myna@myna-e7450:test$ cat Incitatous
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tcmyna@myna-e7450:test$
```

### Testing [100-elf_header.c](../100-elf_header.c)

This is a program that displays the information contained in the ```ELF``` header at the start of an ```ELF``` file.

* ***🧐 This function is tested in the following format:***
  * ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ../100-elf_header.c -o elf_header```
  * ```./elf_header ubuntu64```
  * ```readelf --version```
  * ```readelf -h ubuntu64```
  * ```./elf_header /lib/ld-linux.so.2```
  * ```readelf -h /lib/ld-linux.so.2```
  * ```./elf_header netbsd32```
  * ```./elf_header sortix32```
  * ```./elf_header solaris32```
  * ```./elf_header sparc32```

### Expected output of 4. elf😋

* Did I forget, it will depend on the system architecture

**coded with lots of love 😘 to The Queen of my heart ~ 🥰 Centrine 🥰**
@Eng. Adioz 👻
