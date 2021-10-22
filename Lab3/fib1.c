#include <stdio.h>
#include <stdlib.h>

// declare functions
int isFibonacci(int userFib);
void inputData(int *fib);

int main() {

    // declare variables
    int inputFib;

    // input number from user
    printf("Enter Number: ");
    inputData(&inputFib);

    // checks if input is equal to any number in the fibonacci sequence
    // prints a message accordingly
    if (inputFib == isFibonacci(inputFib)) {
        printf("Number is Fibonacci\n\n");
    }
    else {
        printf("Number is not Fibonacci\n\n");
    }
}

int isFibonacci(int userFib) {
    // runs the fibonacci sequence until it is greater than or equal to the input

    int currentFib = 0, nextFib = 1, x;

    while (userFib > currentFib) {
        x = nextFib;
        nextFib = currentFib + nextFib;
        currentFib = x;
    }

    return currentFib;
}

void inputData(int *fib) {

	int badAttempts = 0;

	do {

		if (badAttempts == 3) {
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}

        scanf("%d", &*fib);

		if (*fib <= 0) {
			printf("Incorrect data. Must be a positive number. ");
			badAttempts += 1;
		} else {
			return;
		}
	} while (badAttempts < 3);
}