// This program determines which positive integer in a list occurs odd number of times
// where the array contains only one positive integer that occurs odd number of times
// while the other numbers occur even number of times.
//                Written By : Akash Parida
//                Date : 09/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_OF_LIST 15

// Fumction prototypes
unsigned int determineMinimum(unsigned int arrayList[]);
unsigned int determineMaximum(unsigned int arrayList[]);
void determineFrequency(unsigned int arrayList[], unsigned int frequencyArray[]);

// Function main begins program execution
int main(void)
{
    unsigned int listOfNumbers[SIZE_OF_LIST] = {8, 8, 7, 7, 7,   // the list
                                                7, 6, 6, 6, 2,   // declaration
                                                2, 9, 9, 9, 9};  //  and initialization
    
    unsigned int min = determineMinimum(listOfNumbers); // minimum of the elements
    unsigned int max = determineMaximum(listOfNumbers); // maximum of the elements

    unsigned int rangeOfList = ((max - min) + 1);
    
    unsigned int frequency[rangeOfList];
    // Initialisation of the freqency array
    for (size_t i = min; i <= max; i++) {
        frequency[i] = 0;
    } // end for

    determineFrequency(listOfNumbers, frequency); // function call

    for (size_t i = min; i <= max; i++) {
        if (frequency[i] % 2 != 0) {
            printf("\nThe positive integer that occurs odd number of times in the "
                   "list of positive integers is %u\n\n", i);
        } // end if
    } // end for
} //  end function main

// User-defined function definitions

unsigned int determineMinimum(unsigned int arrayList[])
{
    unsigned int smallest = arrayList[0];

    for (size_t i = 0; i <= (SIZE_OF_LIST - 1); i++) {
        if (arrayList[i] <= smallest) {
            smallest = arrayList[i];
        } // end if
    } // end for

    return(smallest);
} // end function determineMinimum

unsigned int determineMaximum(unsigned int arrayList[])
{
    unsigned int greatest = arrayList[0];

    for (size_t i = 0; i <= (SIZE_OF_LIST - 1); i++) {
        if (arrayList[i] >= greatest) {
            greatest = arrayList[i];
        } // end if
    } // end for

    return(greatest);
} // end function determineMaximum

void determineFrequency(unsigned int arrayList[], unsigned int frequencyArray[])
{
    for (size_t i = 0; i <= (SIZE_OF_LIST - 1); i++) {
        ++frequencyArray[arrayList[i]];
    } // end for
} // end function determineFrequency