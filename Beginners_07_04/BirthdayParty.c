// This program determines if the number of chocolates can be distributed among the 
// friends coming to the birthday party
//                Written By : Akash Parida
//                Date : 08/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function main begins program execution
int main(void)
{
    unsigned int t; // number of test cases
	scanf("%u", &t); // read from the user

	unsigned int n; // number of friends
	unsigned int m; // number of chocolates

	for (unsigned int i = 0; i <= (t - 1); i++) {
		scanf("%u %u", &n, &m); // take the inputs

		if (m % n == 0) {
			printf("%s", "Yes\n");
		} // end if
		else
		{
			printf("%s", "No\n");
		} // end else
	} // end for
} // end function main