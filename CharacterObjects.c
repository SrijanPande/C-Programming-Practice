#include <stdio.h>
#include <stdlib.h>
#include <wctype.h>
#include <locale.h>

/*
The C language has 3 character types : char, signed char, and unsigned char.

Each compiler implementation will define char to have the same alignment, size, range, representation, and behavior as either signed char or unsigned char. However char is a seperate type from the other two and incompatible with both.

The char type is commonly used to represent character data in C language programs namely the "basic execution character set" which is the minimum set of characters required in the execution environment (including the upper-case letters, lower-case letters, the 10 decimal digits, the space character, various punctuation marks, and numerous control characters).

The sign char is used for representing small signed integer values.

The unsigned char is used for representing small unsigned integer values.

You can represent characters of a large character set as "wide characters" by using the wchar_t type.

*/

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //Critical for Multilingual Programs
    char cc;
    puts("Enter a character (from the upper-case letters, lower-case letters, the 10 decimal digits, the space character, various punctuation marks, and numerous control characters) :");
    scanf(" %c",&cc);
    printf("Character : %c\n",cc);

    signed char sc;
    puts("Enter a signed number : ");
    scanf(" %hhd",&sc);
    printf("Signed Number : %hhd\n",sc);

    unsigned char uc;
    puts("Enter a unsigned number : ");
    scanf(" %hhu",&uc);
    printf("Unsigned Number : %hhu\n",uc);

    wchar_t wc;
    puts("Enter a wide character : ");
    scanf(" %lc",&wc);
    wprintf(L"Wide Character : %c",wc);
}