// 1 = Rock
// 2 = Paper
// 3 = Scissors

#include <stdio.h>      
#include <stdlib.h>
#include <time.h>

// declare funcitons
int getCompMove();
int getUserMove();

int main(void) {

	srand(time(NULL));

	// declare variables
	int compMove, userMove, losses = 0;
	float wins = 0;
	char moves[3][9] = {
		"Rock",
		"Paper",
		"Scissors"
	};

	printf("Playing Rock, Paper, Scissors.\n1. Rock\n2. Paper\n3. Scissors\n");

	// runs each match until the desired amount of matches
	for (int i = 0; i < 10; i++) {

		printf("Enter your move: ");

		// assign users and computers moves into variables
		userMove = getUserMove();
		compMove = getCompMove();

		// prints appropriate message and adds to wins or losses
		if (userMove == compMove) {

			printf("You picked %s, computer picked %s. You have won!.\n", moves[userMove - 1], moves[compMove - 1]);
			wins++;
		}
		else {

			printf("You picked %s, computer picked %s. You have lost!.\n", moves[userMove - 1], moves[compMove - 1]);
			losses++;
		}
	}

	// prints the outcome of the matches
	printf("Your winrate is: %.1f%%. %.0f wins and %d losses.\n", (wins / 10) * 100, wins, losses);

	return 0;
} // end of main

int getCompMove() {

	// generates and outputs a random move
	return rand() % 3 + 1;
} // edn of getCompMove

int getUserMove() {

	// takes data from user and outputs a move
	// checks for incorrect data and after 3 failed attempts the program shuts down
	// incorrect data is anything that is not between 1 and 3
	int badAttempts = 0, move;

	do {

		// do while loops is used to allow the user 3 failed attempts at inputing data
		scanf("%d", &move);

		if (1 <= move && move <= 3) {

			// exits getUserMove() once it a good value has been input
			return move;
		}
		else {

			// checks the input from user for invalid data
			printf("Incorrect data. Must be between 1 and 3. Enter again: ");
			badAttempts++;
		}

		if (badAttempts == 3) {

			// ends the program after 3 bad attempts
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}
	} while (badAttempts <= 3);
} // end of getUserMove