#include <stdio.h>

int isFibonacci(int userFib);

int main() {
    
    int inputFib;

    printf("Enter Number: ");
    scanf("%d", &inputFib);

    while (inputFib < 0) {
        printf("Number must be positive. Enter again: ");
        scanf("%d", &inputFib);
    }
    
    if (inputFib == isFibonacci(inputFib)) {
        printf("Number is Fibonacci\n");
    }
    else {
        printf("Number is not Fibonacci\n");
    }
}

int isFibonacci(int userFib) {
    int currentFib = 0, nextFib = 1, x;

    while (userFib > currentFib)
    {
        x = nextFib;
        nextFib = currentFib + nextFib;
        currentFib = x;
    }

    return currentFib;
}