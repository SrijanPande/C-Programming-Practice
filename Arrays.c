#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
An array is a contiguously allocated sequence of objects that all have the same element type.

An array is characterized by the quantity and type of the object it holds.
*/


int main(int argc, char *argv[]){
    float *sampleArray1[13]; //Array of 13 pointers to floating point objects with none initialized
    int sampleArray2[] = {2,0,0,5}; //Array of 4 integers with all initialized
    char sampleArray3[4] = {'S','T'}; //Array of 4 characters with 2 initialized
    int sampleArray4[7] = {13}; //Array of 7 integers with all initialized to 13
    int sampleArray5[5] = {13,}; //Array of 5 integers with 1 initialized to 13
    float sampleArray6[5][7] = {
        {1,2,3,4,5,6,7},
        {8,9,10}
    }; //Array of Multiple Dimensions : 5 arrays of 7 floating point objects with the first sub-array full initialized and the second sub-array partially initialized
    return EXIT_SUCCESS;
}