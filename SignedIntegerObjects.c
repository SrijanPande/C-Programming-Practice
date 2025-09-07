#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
     char character;
    puts("Enter a value for character :");
    scanf("%hhd",&character);
    printf("%hhd\n",character);
    
     short int shortint;
    puts("Enter a value for shortint :");
    scanf("%hd",&shortint);
    printf("%hd\n",shortint);

     int integer;
    puts("Enter a value for int :");
    scanf("%d",&integer);
    printf("%d\n",integer);
    
     long longint;
    puts("Enter a value for longint :");
    scanf("%ld",&longint);
    printf("%ld\n",longint);
    
     long long  longlongint;
    puts("Enter a value for longlongint :");
    scanf("%lld",&longlongint);
    printf("%lld\n",longlongint);
    return EXIT_SUCCESS;
}