// This program takes an integer as input and prints the sum of the digits
//                Written By : Akash Parida
//                Date : 08/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function main begins program execution
int main(void)
{
    int number;

    printf("%s", "\nEnter an integer : "); // prompt
    scanf("%d", &number); // read the input and store

    int sum = 0;
    while (number != 0) {
        sum += (number % 10);
        number /= 10;
    } // end while

    printf("\nThe sum of the digits of the integer is %d.\n\n", sum);
} // end function main