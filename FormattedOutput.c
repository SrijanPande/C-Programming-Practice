#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    if(printf("%s\n", "Hello, world!")<0)
    /*
    To print formatted output to the standard output (usually the console), you can use the printf function from the stdio.h library. The printf function allows you to specify a format string that contains placeholders for variables, which are replaced by the corresponding arguments provided after the format string. 
    
    The printf function takes a format string as its first argument, followed by a variable number of additional arguments that correspond to the format specifiers in the format string. The function returns the total number of characters printed (excluding the null byte used to end output to strings) or a negative value if an error occurs.

    The format string can include format specifiers that define how the variables should be formatted and displayed. 

    The very first argument to a function is always the format string and never user supplied data (as it may lead to a formatted output security vulnerability)
    */
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}