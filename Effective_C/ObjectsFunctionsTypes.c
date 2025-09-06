#include<stdio.h>
#include<stdlib.h>

/*
Every type in C is either an object type or a function type.

An object is a region of data storage in the memory in which you can represent values.
A variable is an example of an object. A variable is a named object that can hold a value of a specific type.
FUnctions are not objects but do have types. A function type is characterized by both its return type as well as the number and types of its parameters.

C is a statically typed language, which means that the type of every object must be known at compile time. The type of an object determines the size of the memory allocated for it as well as the operations that can be performed on it.

The C language also has pointers, which are variables that store the memory address of another variable. Pointers are used to directly access and manipulate memory locations. A pointer type is defined by the type of object it points to.

Objects and Functions are different. 
Object pointers and Function pointers are different.

When you declare a variable, you assign it a type and a identifier to reference it. The type of the variable determines the size of memory allocated for it and the operations that can be performed on it.

When you declare a function, you specify its return type, name, and parameters. The return type determines the type of value the function will return, while the parameters define the types and number of arguments the function can accept.

C distinguishes between parameters, which are objects declared as part of the function declaration that acquire a value on entry to the function, and arguments, which are comma seperated expressions included in the function call expressions.

C is a call by value language, which means that when you pass an argument to a function, a copy of the argument's value is made and passed to the function. Any changes made to the parameter inside the function do not affect the original argument.

Indirection operator * is a unary operator used to declare a pointer variable and to dereference a pointer to access the value it points to.

The address-of operator & is a unary operator used to obtain the memory address of a variable.

To modify the value of an argument in the calling function, you can pass a pointer to the argument instead of the argument itself. This allows the function to directly access and modify the value at the memory address pointed to by the pointer.
*/
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}

int main(void)
{
    int x;
    puts("Enter a value for x :");
    scanf("%d",&x);

    int y;
    puts("Enter a value for y :");
    scanf("%d",&y);
    
    swap(&x,&y);

    printf("After swapping, x = %d and y = %d\n",x,y);
    return EXIT_SUCCESS;
}
/*
Objects, functions, macros and other C language identifiers have scope that delimits the contiguous region where they can be accessed. C has four levels of scope: file scope, block scope, function prototype scope and function scope.

The scope of an object or function identifier is determined by where it is declared. 

If the declaration is outside any block or parameter list, the identifier has file scope, meaning the scope is the entire text file in which it appears as well as any files included after that point.

If the declaration is withiin a block or within the list of parameters of a function, the identifier has block scope, meaning the identifier it declares is accessible only within the block in which it is declared and any nested blocks.

If the declaration is within the list of parameter declarations of a function prototype (not part of the function definition), the identifier has function prototype scope, meaning the identifier is accessible only within the parameter list of the function prototype.

If the declaration is within the body of a function, the identifier has function scope, meaning the identifier is accessible only within the function in which it is declared. A label name is the only kind of identifier that has function scope.Labels are identifier followed by a colon and identify a statement in a function to which control may be transferred.

Scopes can be nested, with inner scopes and outer scopes.

When an identifier is used, the compiler searches for its declaration in the innermost scope first, then in the next outer scope, and so on, until it finds a matching declaration or reaches the outermost scope. If no matching declaration is found, the compiler generates an error.
*/

/*
Objects have a storage duration that determines their lifetime, or the period during which they exist in memory. C has four storage durations: automatic, static, thread, and allocated.

Automatic storage duration is the default storage duration for local variables declared within a block. These variables are created when the block is entered and destroyed when the block is exited. Automatic variables are typically stored on the stack.

Static storage duration is used for variables declared with the static keyword, as well as for global variables and variables declared outside any function. These variables are created when the program starts and destroyed when the program ends. Static variables retain their values between function calls and are typically stored in a fixed memory location. Static objects with file scope have internal linkage by default, meaning they are accessible only within the file in which they are declared. To make a static object with file scope accessible from other files, you can use the extern keyword in its declaration. You can also use the static keyword in the declaration of a function to give it internal linkage, making it accessible only within the file in which it is defined.

Thread storage duration is used for variables declared with the _Thread_local keyword. These variables are created when a thread is created and destroyed when the thread ends. Each thread has its own instance of the variable, and changes made to the variable in one thread do not affect the value of the variable in other threads.

Allocated storage duration is used for objects created using dynamic memory allocation functions such as malloc, calloc, realloc, and free. These objects are created at runtime and remain in memory until they are explicitly deallocated using the free function. Allocated objects are typically stored on the heap.
*/