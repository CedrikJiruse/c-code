#include <stdio.h>

// declare functions
int isFibonacci(int userFib);

// declare global variables
int counter = 0;

int main() {

    // declare variables
    int firstInputFib, secondInputFib;

    // input number from user
    printf("Enter Number: ");
    scanf("%d%d", &firstInputFib, &secondInputFib);

    // checks if input is positive
    while (firstInputFib < 0) {
        printf("Number must be positive. Enter again: ");
        scanf("%d%d", &firstInputFib, &secondInputFib);
    }

    // checks if input is equal to any number in the fibonacci sequence
    // prints a message accordingly
    if (firstInputFib == isFibonacci(firstInputFib)) {
        printf("Number is Fibonacci\n\n");
    }
    else {
        printf("Number is not Fibonacci\n\n");
    }
}

int isFibonacci(int userFib) {
    // runs the fibonacci sequence until it is greater than or equal to the input

    int currentFib = 0, nextFib = 1, x; // used to compute the fibonacci sequence

    while (userFib > currentFib) {

        x = nextFib;
        nextFib = currentFib + nextFib;
        currentFib = x;

        counter += 1;
        printf("%d %d\n", counter, currentFib);
    }

    return currentFib;
}