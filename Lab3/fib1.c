#include <stdio.h>
#include <stdlib.h>

// declare functions
void inputData(int* fib);

int main() {

	// declare variables
	int inputFib, currentFib = 0, nextFib = 1, x;

	// input number from user
	printf("Enter Number: ");
	inputData(&inputFib);

	// runs the fibonacci sequence until it is greater than or equal to the input
	while (inputFib > currentFib) {
		x = nextFib;
		nextFib = currentFib + nextFib;
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

void inputData(int* input) {

	int badAttempts = 0;

	do {

		if (badAttempts == 3) {
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}

		scanf("%d", &*input);

		if (*input <= 0) {
			printf("Incorrect data. Must be a positive number. ");
			badAttempts += 1;
		}
		else {
			return;
		}
	} while (badAttempts < 3);
}