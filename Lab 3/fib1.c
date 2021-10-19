#include <stdio.h>

// declare functions
int isFibonacci(int userFib);

int main() {

    // declare variables
    int inputFib;

    // input number from user
    printf("Enter Number: ");
    scanf("%d", &inputFib);

    // checks if input is positive
    while (inputFib < 0) {
        printf("Number must be positive. Enter again: ");
        scanf("%d", &inputFib);
    }

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