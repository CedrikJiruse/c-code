#include <stdio.h>
#include <stdlib.h>

int main() {

	// declare variables
	int inputFib, currentFib = 0, nextFib = 1, x;

	// input number from user
	printf("Enter Number: ");
	scanf("%d", &inputFib);

	// check if the input is valid
	if (inputFib < 0) {
		printf("Number must be positive.\n\n");
		exit(0);
	}

	// runs the fibonacci sequence until it is greater than or equal to the input
	while (inputFib > currentFib) {

		x = nextFib;
		nextFib += currentFib;
		currentFib = x;
	}

	// checks if input is equal to any number in the fibonacci sequence
	// prints a message accordingly
	if (inputFib == currentFib) {
		printf("Number is Fibonacci\n\n");
	}
	else {
		printf("Number is not Fibonacci\n\n");
	}
}