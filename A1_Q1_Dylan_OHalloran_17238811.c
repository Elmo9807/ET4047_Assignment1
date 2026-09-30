#include <stdio.h>

int main(void) {

	// Initialisation: a = dd, b = mm, c = yyyy, d = age
	int a = 14;
	int b = 7;
	int c = 1998;
	int d = 28;
	int temp = 0;

	// swapped flag to prevent unnecessary passes and provide swap detection
	int swapped;

	printf("Locations before sorting: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);


	do {

		swapped = 0;

		// Compare neighbour pairs on each pass, swap if wrong order detected, repeat until no swaps occur
		if (a < b) { 
			temp = a; a = b; b = temp;
			swapped = 1;
		};
		if (b < c) { 
			temp = b; b = c; c = temp;
			swapped = 1;
		};
		if (c < d) { 
			temp = c; c = d; d = temp; 
			swapped = 1;
			};
		}
	} while (swapped == 1);

	// print output: a >= b >= c >= d
	printf("Locations after sorting: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}