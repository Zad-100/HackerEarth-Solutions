// This program helps find Goki find the right friends with the right skill set
//                Written By : Akash Parida
//                Date : 07/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function main begins program execution
int main(void)
{
	unsigned int n; // number of friends to be considered
	scanf("%u", &n);

	unsigned int x; // minimum skill value
	scanf("%u", &x);

	unsigned int y[n]; // declaring an array to store the skill values
	for (unsigned int i = 0; i <= (n - 1); i++) {
		scanf("%u", &y[i]);
	} // end for

	for (unsigned int i = 0; i <= (n - 1); i++) {
		if (y[i] >= x) {
			printf("%s", "YES\n");
		} // end if
		else
		{
			printf("%s", "NO\n");
		} // end else
	} // end for
} // end function main