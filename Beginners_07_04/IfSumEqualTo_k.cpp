// This program reads a list of numbers and checks if the sum of any two elements
// is equal to a certain number 'k' input by the user (Compared to the previous
// version which was C file, this is a C++ file which makes the coding a whole
// lot easier!)
// Almost all the C code is made compatible to be stored in a .cpp file using
// the '#include <bits/stdc++.h>' header and the 'using namespace std' file header
// which lets C code syntax to be used in a .cpp file and with the added features
// or functions, more precisely, of C++. Notice the drastic decrement of the 
// number of lines of code. Happy New-Thing-Learned-Which-Is-Damn-Useful day, Bro!
//                Written By : Akash Parida
//                Date : 10/04/21

#include <bits/stdc++.h>
using namespace std;

unsigned int checkTheSums(int list[], int left, int right, int k); // function prototype

// Function main begins program execution
int main(void)
{
    int n; // size of the list
    printf("%s", "\nEnter the size of the list : ");
    scanf("%d", &n);

    int nums[n]; // the list
    printf("%s", "\nEnter the elements of the list below :-\n");
    for (size_t i = 0; i <= (n - 1); i++) {
        scanf("%d", &nums[i]);
    } // end for

    int k; // the number to be checked for
    printf("%s", "\nEnter the integer for which you want to check : ");
    scanf("%d", &k);

    sort(nums, nums + n); // replaced the whole user-defined bubble sort function
                          // that was written in the C version

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