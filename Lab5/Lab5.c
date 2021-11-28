#include <stdio.h>
#include <stdlib.h>

// declare fucntions
void inputData(double* metric);

int main() {

	// declare variables
	int timeElapsed = 0;
	double car1DistTravelled = 0, car1Speed, car1Accel, car1Headstart;
	double car2DistTravelled = 0, car2Speed, car2Accel;

	// car1
	printf("Input the start speed of Car1 (in km/h): ");
	inputData(&car1Speed);
	printf("Input the acceleration of Car1 (in km/h/h): ");
	inputData(&car1Accel);
	printf("Input the headstart Car1 has over Car2 (in km): ");
	inputData(&car1Headstart);

	// car2
	printf("Input the start speed of Car2 (in km/h): ");
	inputData(&car2Speed);
	printf("Input the acceleration of Car2 (in km/h/h): ");
	inputData(&car2Accel);

	// check if car2 is ahead of car1, if not then forward time by 1s and recheck
	for (timeElapsed = 0; (car1DistTravelled + car1Headstart) > car2DistTravelled; timeElapsed++) {

		// calculate distance travelled in seconds
		// speed and acceleration are input in hours and have to be converted to seconds
		car1DistTravelled = (car1Speed / 3600) * timeElapsed + 0.5 * (car1Accel / 3600) * timeElapsed * timeElapsed;
		car2DistTravelled = (car2Speed / 3600) * timeElapsed + 0.5 * (car2Accel / 3600) * timeElapsed * timeElapsed;
	}

	if ((timeElapsed / 3600) <= 24) {

		// print total time elapsed until car2 overtakes car1 in hours:minutes:seconds.
		printf("Time elapsed %d:%d:%d.", (timeElapsed / 3600), ((timeElapsed / 60) % 60), (timeElapsed % 60));
	}
	else {

		// exit the program if time elapsed is over 24 hours
		printf("Time elapsed is over 24 hours.");
		return 0;
	}
}

void inputData(double* metric) {

	// takes data from user and changes the value of the variable given
	// checks for incorrect data and after 3 failed attempts the program shuts down
	// incorrect data is anything that is less than 0
	int badAttempts = 0;

	// do while loops is used to allow the user 3 failed attempts at inputing data
	do {

		if (badAttempts == 3) {
			// ends the program after 3 bad attempts
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}

		scanf("%lf", &*metric);

		if (*metric < 0) {
			// checks the input from user for invalid data
			printf("Incorrect data. Must be a positive number. ");
			badAttempts += 1;
		}
		else {
			// exits the function once it a good value has been input
			// this is to prevent getting stuck in the do while loop once in it
			return;
		}
	} while (badAttempts <= 3);
}