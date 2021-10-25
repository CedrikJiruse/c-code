#include <stdio.h>
#include <stdlib.h>
#include <math.h> // so you can use a square root
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	float HexagonEdgeLength;
	float HexagonVolume;
	float CylinderVolume;
	float height;
	// no need to add a second height because the depth is the same in the two shapes
	float CylinderRadius;
	float ShapeVolume;
	const float pi = 3.141593;
	int Attempts = 0;
	// do loop first and then before calculations do a while loop

	do {
		

		//get the data (make sure to put a comma between numbers being inputed)
		printf("Please input the Edge Length and height for the hexagon : ");
		scanf("%f%f", &HexagonEdgeLength, &height);

		//input the data for the cylinder
		printf("Please input the radius for the cylinder : ");
		scanf("%f", &CylinderRadius);

		//if number is less then or equal to 0 must input it again 
		if (HexagonEdgeLength <= 0 || height <= 0 || CylinderRadius <= 0) {

			printf("\n Incorrect figure. Number must be greater than 0. \n");

			//After each failed attempt it repeats until inputted correctly
			//or its inputted incorrectly 3 times
			Attempts = Attempts + 1;
		} else {
            Attempts = 5;
        }
        
		if (Attempts == 3) {
			//ends the program after 3 wrong attempts 
			printf("\n 3rd attempt at inputting data wrong. Program closing... \n");
			exit(0);
		}

	} while (Attempts < 3 && Attempts != 0);


	// calculate volume of the hexagon
	HexagonVolume = (3.0 * sqrt(3)) / 2.0 * (HexagonEdgeLength) * (HexagonEdgeLength) * (height);

	// calculate volume of the cylinder
	CylinderVolume = pi * (CylinderRadius) * (CylinderRadius) * (height);

	// calculate the volume of the hexagon - the volume of the cylinder
	ShapeVolume = (HexagonVolume)-(CylinderVolume);


	//return 0;

	// output the result  
	printf("\nVolume of the shape is %f\n", ShapeVolume);

	return 0;
}