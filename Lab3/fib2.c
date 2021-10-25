#include <stdio.h>
#include <stdlib.h>

int main() {

	// declare variables
	int firstInputFib, secondInputFib;

	// input number from user
	printf("Enter Numbers: ");
	scanf("%d%d", &firstInputFib, &secondInputFib);

	// check if the input is valid
	if (firstInputFib < 0 || secondInputFib < 0) {
		printf("Numbers must be positive.\n\n");
		exit(0);
	}

	// runs the fibonacci sequence until it is greater than or equal to the input
	int currentFib = 0, nextFib = 1, x;

	for (int i = firstInputFib; i < secondInputFib; i += 1) {

		while (i > currentFib) {

			x = nextFib;
			nextFib = currentFib + nextFib;
			currentFib = x;

			if (firstInputFib <= currentFib && currentFib <= secondInputFib) {
				printf("%d\n", currentFib);
			}
		}
	}
}