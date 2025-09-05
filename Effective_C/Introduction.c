/*
C is a system programming language , designed for performance, ease of access to underlying hardware and providing high level programming features.

C is layered directly on top of computer hardware, making it more sensitive to evolving hardware features, such as vectorized instructions.

The Spirit of C :
1. Trust the Programmer
2. Don't prevent the Programmer from doing what needs to be done
3. Keep the language small and simple
4. Conservation of Mechanism
5. Allow the programmer to write optimally efficient code is the top priority

The programmer is responsible for the portability, safety, and security of the code

To write C code, you need a text editor (or an IDE - INtegrated Development Environment) and a C compiler. The compiler translates the C code into machine code that the computer can execute.

The file extension .c indicates that the file contains C language source code.
*/

#include <stdio.h>
#include <stdlib.h>
/*
The #include directive is a preprocessor command that tells the compiler to include the contents of the specified file (in this case, stdio.h and stdlib.h) into the current file before compilation.
stdio.h: Standard Input Output Header file - contains declarations for input and output functions.
stdlib.h: Standard Library Header file - contains declarations for general utility functions.
*/

int main(void)
/*
The main function is called at program startup. THe main function defines the main entry point of the program. The execution of the program starts from the main function. The indicates that the main function returns an integer value.The void inside the parentheses indicates that the function does not take any arguments. 

The return value of the main function is used to indicate the success or failure of the program to the operating system. A return value of 0 (or EXIT_SUCCESS) typically indicates that the program completed successfully, while a non-zero value (or EXIT_FAILURE) indicates that an error occurred.

C programs must have exactly one main function. The absence of a main function will result in a compilation error. Having multiple main functions will result in a compilation error.

C programs consist of procedures (referred to as functions). A function is a block of code that performs a specific task. Functions can take input parameters and return output values. Functions help in organizing code, improving readability, and promoting code reuse.
*/
{
    if(puts("Hello, World!")==EOF)
    /*
    THe puts function is used to print a string to the standard output (usually the console). The string "Hello, World!" is passed as an argument to the puts function. The puts function automatically appends a newline character at the end of the string, so the output will be followed by a new line.
    */
    {
        return EXIT_FAILURE;
        /*
        Functions will often return a value to indicate the success or failure of the operation. In this case, if the puts function fails (returns EOF), the program returns EXIT_FAILURE to indicate an error occurred.
        EXIT_FAILURE is a macro defined in stdlib.h that represents an unsuccessful program termination. It is typically defined as 1. Returning EXIT_FAILURE from the main function indicates to the operating system that the program encountered an error during execution.

        Code following a return statement in a function will not be executed, as the return statement immediately exits the function and returns control to the calling function or the operating system.
        */
    }
    return EXIT_SUCCESS;
    /*
    EXIT_SUCCESS is a macro defined in stdlib.h that represents a successful program termination. It is typically defined as 0. Returning EXIT_SUCCESS from the main function indicates to the operating system that the program completed successfully.
    */
}