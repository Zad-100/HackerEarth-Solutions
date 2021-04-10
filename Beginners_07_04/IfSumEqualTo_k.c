// This program reads a list of numbers and checks if the sum of any two elements
// is equal to a certain number 'k' input by the user
//                Written By : Akash Parida
//                Date : 10/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// function prototype
unsigned int checkTheSums(int list[], int left, int right, int k);
void bubbleSort(int list[], int size);

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

    bubbleSort(nums, n); // function call to sort the array

    unsigned int result = checkTheSums(nums, 0, (n - 1),  k); // function call

    if (result == 1) {
        printf("%s", "\nTrue\n\n");
    } // end if
    else
    {
        printf("%s", "\nFalse\n\n");
    } // end else
} // end function main
 
// User-defined function definition

void bubbleSort(int list[], int size)
{
    for (unsigned int pass = 1; pass <= (size -1); pass++) { // control the number of passes
        for (size_t i = 0; i <= (size - 2); i++) { // control the number of comparisions per pass
            if (list[i] >= list[i + 1]) {
                // swapping the values
                int hold = list[i];
                list[i] = list[i + 1];
                list[i + 1] = hold;
            } // end if
        } // end for
    } // end for
} // end bubble sort

unsigned int checkTheSums(int list[], int left, int right, int k)
{
    while (left <= right) { // the moment left > right, we have checked for all pairs' sums
        if (list[left] + list[right] == k) {
            return(1); // found
        } // end if
        else if (list[left] + list[right] < k) {
            return(checkTheSums(list, (left + 1), right, k)); // move the left pointer to the right by 1
        } // end else if
        else
        {
            return(checkTheSums(list, left, (right - 1), k)); // move the right pointer to the left by 1
        } // end else
    } // end while

    return(0); // not found
} // end function checkTheSums