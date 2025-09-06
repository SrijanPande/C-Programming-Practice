#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Objects declares as type _Bool can store only the values 0 or 1, and were introduced in the C99 standard.
The header <stdbool.h> defines the macros bool, true, and false as aliases for _Bool, 1, and 0 respectively.
In C, any non-zero value is considered true, while zero is considered false.
*/

/*
Here, main function is defined with two parameters, argc and argv.
argc is an integer that represents the number of command-line arguments passed to the program, including the program's name itself.
argv is an array of character pointers (strings) that holds the actual command-line arguments.
The first element of argv (argv[0]) is the name of the program, and the subsequent elements are the additional arguments provided by the user.
We use parameters argc and argv instead of void to allow the program to accept command-line arguments, which can be useful for configuring the program's behavior at runtime.
*/

const char* UserOpinion(){
    bool userOpinion;
    puts("What is your opinion {0 : false, 1 : true} =");
    scanf("%d",&userOpinion);
    return userOpinion?"true":"false";
}

int main (int argc, char *argv[]){
    puts("The sun rises in the East");
    printf("The user thinks the above statement is %s\n",UserOpinion());
    return EXIT_SUCCESS;
}