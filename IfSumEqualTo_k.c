// This program reads a list of numbers and checks if the sum of any two elements
// is equal to a certain number 'k' input by the user
//                Written By : Akash Parida
//                Date : 08/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

unsigned int checkTheSums(int list[], int size, int k); // function prototype

// Function main begins program execution
int main(void)
{
    int n; // size of the list
    printf("%s", "\nEnter the size of the list : "); // prompt
    scanf("%d", &n); // read from the user

    int nums[n]; // the list
    printf("%s", "\nEnter the elements of the list below :-\n"); // prompt
    for (size_t i = 0; i <= (n - 1); i++) {
        scanf("%d", &nums[i]); // read and store
    } // end for

    int k; // the number to be checked for
    printf("%s", "\nEnter the integer for which you want to check : "); // prompt
    scanf("%d", &k); // read from the user

    unsigned int result = checkTheSums(nums, n, k); // function call

    if (result == 1) {
        printf("%s", "\nTrue\n\n");
    } // end if
    else
    {
        printf("%s", "\nFalse\n\n");
    } // end else
} // end function main
 
// User-defined function definition
unsigned int checkTheSums(int list[], int size, int k)
{
    for (size_t i = 0; i <= (size - 1); i++) {
        for (size_t j = (i + 1); j <= (size - 1); j++) {
            if (list[i] + list[j] == k) {
                return(1);
            } // end if
        } // end for
    } // end for

    return(0);
} // end function checkTheSums