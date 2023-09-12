# alx-low_level_programming

## INTRODUCTION

This is the first introductory directory in adventure into C Language.
It begins with basics and the wades into more complex and advanced C programming concepts and best practices.

## CODE REQUIREMENTS AND STANDARDS

* Compile with gcc -Wall -Werror -Wextra -pedantic -std=gnu89
* All the files should end with a new line as a standard
* There should be no errors and no warnings during compilation; as the best practice
* This code does not use system libraries
* All the code uses Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Run Betty linter against all the files with command:

```shell
betty <filename>
```

## ABOUT BETTY LINTER

* Go to the [Betty](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) repository
* Clone the [repo](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh
* emacs or vi a new file called betty, and copy the script below:

```bash
    #!/bin/bash
    # Simply a wrapper script to keep you from having to use betty-style
    # and betty-doc separately on every item.
    # Originally by Tim Britton (@wintermanc3r), multiargument added by
    # Larry Madeo (@hillmonkey)

    BIN_PATH="/usr/local/bin"
    BETTY_STYLE="betty-style"
    BETTY_DOC="betty-doc"

    if [ "$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/${BETTY_STYLE} "$argument"
        ${BIN_PATH}/${BETTY_DOC} "$argument"
    done
```

* Once saved, exit file and change permissions to apply to all users with chmod a+x betty
* Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/

### For more information

<adiozdaniel@gmail.com>

Feel free to contribute and improve or even ask questions.

@Eng. ~/Adioz
