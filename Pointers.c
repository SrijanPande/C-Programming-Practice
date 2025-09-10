#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
A pointer type is derived from the function type or object type that it points to, called the referenced type. A pointer provides a reference to an entity of the referenced type.
A unary * is an indirection operator used to create a pointer to an object/function and  a unary & operator is used to take the address of an object. 

Taking the address of a *object via the & operator retrieves the pointer. 
*/

int main(int argc, char *argv[])
{
	int number = 13;
	int *pointer = &number;
	printf("The number = %d\n",number);
	printf("The address of the number is %p\n",pointer);
	printf("The number can be obtain by the pointer : %d\n",*pointer);
	printf("The address of the number can be obtained via indirection on it's object : %p\n",&number);
	printf("The address of the pointer : %p",&pointer);
	return EXIT_SUCCESS;
}