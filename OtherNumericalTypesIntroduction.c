#include<stdio.h>
#include<stdlib.h>

//Void
/*
Void is a unique type.
By itself, the void keyword means "Cannot Hold Any Value"
A function may have a void return type indicating it does not return any value
A function may have a void parameter indicating it does not take any arguements
However, the derived type (void *) indicates that the pointer can reference any value
*/
void PrintHelloWorld(void){
    puts("Hello, World");
    return;
}

int main(int argc, char *argv[]){
    //Enumerators
    enum Day {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum CardinalDirections {North = 0, East = 90, South = 180, West = 270};
    puts("Days of the Week :");
    printf("%d : Monday\n",Monday);
    printf("%d : Tuesday\n",Tuesday);
    printf("%d : Wednesday\n",Wednesday);
    printf("%d : Thursday\n",Thursday);
    printf("%d : Friday\n",Friday);
    printf("%d : Saturday\n",Saturday);
    printf("%d : Sunday\n",Sunday);
    puts("");
    puts("Compass Degree :");
    printf("%d means\n",North);
    printf("%d means\n",East);
    printf("%d means\n",South);
    printf("%d means\n",West);

    puts("");
    PrintHelloWorld();
    return EXIT_SUCCESS;
}