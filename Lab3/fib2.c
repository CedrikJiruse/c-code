#include <stdio.h>
#include <stdlib.h>

// declare functions
int isFibonacci(int userFib);
void inputData(int *firstFib, int *secondFib);

// declare global variables
int counter = 0;

int main() {

	// declare variables
	int firstInputFib, secondInputFib;

	// input number from user
	printf("Enter Number: ");
	inputData(&firstInputFib, &secondInputFib);
}

int isFibonacci(int userFib) {
	// runs the fibonacci sequence until it is greater than or equal to the input

	int currentFib = 0, nextFib = 1, x;

	while (userFib > currentFib) {

		x = nextFib;
		nextFib = currentFib + nextFib;
		currentFib = x;

		counter += 1;
		printf("%d %d\n", counter, currentFib);
	}

	return currentFib;
}

void inputData(int *firstFib, int *secondFib) {

	int badAttempts = 0;

	do {

		if (badAttempts == 3) {
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}

		scanf("%d%d", &*firstFib, &secondFib);

		// checks if firstFib is greater than zero
		// and if secondFib is greater than firstFib
		// 3 attempts before the program closes
		if (*firstFib <= 0) {
			printf("Incorrect data. Must be a positive number. ");
			badAttempts += 1;
		} else if (*secondFib > *firstFib) {
			printf("Incorrect data. Second number must be higher than the first. ");
		} else {
			return;
		}
	} while (badAttempts < 3);
}