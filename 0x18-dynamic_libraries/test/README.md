# DYNAMIC LIBRARIES TESTING

## [0-main.c](0-main.c)

### Run the test

Run the following commands:

* ```gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len```
* ```ldd len```

## [2. Let's call C functions from Python](100-tests.py)

### compile the required ```100-operations.so```

* Run the following commands ```gcc -Wall -Werror -Wextra -pedantic -shared -o 100-operations.so -fPIC -I/usr/local/include/python3.4m/ 100-operations.c```
* Grant permission to ```100-tests.py```
* Test the library by running: ```./100-tests.py```. It should find the library
* Export it into the main directory with ```gcc -Wall -Werror -Wextra -pedantic -shared -o ../100-operations.so -fPIC -I/usr/local/include/python3.4m/ 100-operations.c```
