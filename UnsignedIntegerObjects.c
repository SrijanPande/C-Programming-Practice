#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    unsigned char unsigned_character;
    puts("Enter a value for unsigned_character :");
    scanf("%hhu",&unsigned_character);
    printf("%hhu\n",unsigned_character);
    
    unsigned short int unsigned_short_int;
    puts("Enter a value for unsigned_short_int :");
    scanf("%hu",&unsigned_short_int);
    printf("%hu\n",unsigned_short_int);

    unsigned int unsigned_int;
    puts("Enter a value for unsigned_int :");
    scanf("%u",&unsigned_int);
    printf("%u\n",unsigned_int);
    
    unsigned long unsigned_long_int;
    puts("Enter a value for unsigned_long_int :");
    scanf("%lu",&unsigned_long_int);
    printf("%lu\n",unsigned_long_int);
    
    unsigned long long  unsigned_long_long_int;
    puts("Enter a value for unsigned_long_long_int :");
    scanf("%llu",&unsigned_long_long_int);
    printf("%llu\n",unsigned_long_long_int);
    return EXIT_SUCCESS;
}