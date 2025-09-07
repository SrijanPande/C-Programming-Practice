#include<stdio.h>
#include<stdlib.h>

//Void
/*
Void is a unique type.
By itself, the void keyword means "Cannot Hold Any Value"
A function may have a void return type indicating it does not return any value
A function may have a void parameter indicating it does not take any arguments
However, the derived type (void *) indicates that the pointer can reference any value
*/
void PrintHelloWorld(void){
    puts("Hello, World");
    return;
}

//A function whose paramters list is empty accepts any number of arguments (contrasted with a parameter list containing only void which indicates a function does not accept any parameters)
void PrintByeWorld(){
    puts("Bye, World");
    return;
}

int main(int argc, char *argv[]){
    PrintHelloWorld();

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
    PrintByeWorld(13,"Bye World",4);
    return EXIT_SUCCESS;
}