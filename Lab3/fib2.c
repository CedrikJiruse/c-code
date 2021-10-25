#include <stdio.h>
#include <stdlib.h>

int main() {

	// declare variables
	int smallerInputFib, biggerInputFib;

	// input number from user
	printf("Enter Numbers: ");
	scanf("%d%d", &smallerInputFib, &biggerInputFib);

	// check if the input is valid
	if (smallerInputFib < 0) {
		printf("Number must be positive.\n\n");
		exit(0);
	}

	// check if first is smaller then second
	if (smallerInputFib >= biggerInputFib) {
		printf("Second number must be bigger than the first.\n\n");
		exit(0);
	}

	// runs the fibonacci sequence until it is greater than or equal to the second input
	int currentFib = 0, x = 0, nextFib = 1;

	for (int i = smallerInputFib; currentFib <= biggerInputFib; i += 1) {

		while (i >= currentFib) {

			// only prints numbers between the range given
			if (smallerInputFib <= currentFib) {
				printf("%d\n", currentFib);
			}

			x = nextFib;
			nextFib += currentFib;
			currentFib = x;
		}
	}
}