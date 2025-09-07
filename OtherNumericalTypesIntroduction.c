#include<stdio.h>
#include<stdlib.h>

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

    return EXIT_SUCCESS;
}