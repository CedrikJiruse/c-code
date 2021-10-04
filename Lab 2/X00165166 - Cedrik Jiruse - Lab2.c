#include <stdio.h>

// program to calculate the volume of various shapes where
// the dimensions are defined by the user

const float pi= 3.14159265359;
float sphereVolume(float r);

int main(void)
{

	// VOLUME OF A SPHERE
	// variables are declared here
	float radius;

	printf("Volume of sphere is %f\n", sphereVolume(radius));


	// VOLUME OF COMPLEX SHAPE
	// it is necesssary to divide the shape into smaller shapes to make calculations easier

	// VOLUME OF A TRIANGLE
	// used previous shape as a template
	// changes include variable names, calculations, and messages
	float triangleHeight, triangleBase, triangleLength, triangleVolume;
	badAttempts = 0;

	do {
		printf("\nPlease input the height, base and length of the triangle: ");
		scanf("%f%f%f", &triangleHeight, &triangleBase, &triangleLength);

		badAttempts = badAttempts + 1;
		if (badAttempts == 3) {
			printf("Program closing due to 3 failed attempts at inputing data.\n");
			return 0;
		}
	} while (triangleVolume <= 0);

	triangleVolume = ((triangleHeight * triangleBase) / 2.0f) * triangleLength;
	printf("Volume of triangle is %f\n", triangleVolume);


	// VOLUME OF A CUBOID
	float cuboidLength, cuboidWidth, cuboidHeight, cuboidVolume;
	badAttempts = 0;

	printf("\nPlease input the length, width and height of the cuboid: ");
	scanf("%f%f%f", &cuboidLength, &cuboidWidth, &cuboidHeight);
	badAttempts = 0;
	while (cuboidLength <= 0) {
		printf("Must be a positive number");
		scanf("%f", cuboidLength);

		badAttempts = badAttempts + 1;
		if (badAttempts == 3) {
			printf("Program closing due to 3 failed attempts at inputing data.\n");
			return 0;
		}
	}
	badAttempts = 0;
	while (cuboidWidth <= 0) {
		printf("Must be a positive number");
		scanf("%f", cuboidWidth);

		badAttempts = badAttempts + 1;
		if (badAttempts == 3) {
			printf("Program closing due to 3 failed attempts at inputing data.\n");
			return 0;
		}
	}
	badAttempts = 0;
	while (cuboidHeight <= 0) {
		printf("Must be a positive number");
		scanf("%f", cuboidHeight);

		badAttempts = badAttempts + 1;
		if (badAttempts == 3) {
			printf("Program closing due to 3 failed attempts at inputing data.\n");
			return 0;
		}
	}

	cuboidVolume = cuboidLength * cuboidWidth * cuboidHeight;
	printf("Volume of cuboid is %f\n", cuboidVolume);


	// VOLUME OF A SECOND CUBOID
	float secondCuboidlength, secondCuboidwidth, secondCuboidheight, secondCuboidVolume;
	printf("\nPlease input the length, width and height of the second: ");
	scanf("%f%f%f", &secondCuboidlength, &secondCuboidwidth, &secondCuboidheight);
	secondCuboidVolume = secondCuboidlength * secondCuboidwidth * secondCuboidheight;
	printf("Volume of the second cuboid is %f\n", secondCuboidVolume);


	// TOTAL VOLUME OF COMPLEX SHAPE
	printf("\nVolume of shape %f\n", (triangleVolume + cuboidVolume + secondCuboidVolume));

	return 0;

	float sphereVolume(float r) {
		// calculates the volume of a sphere

		float volume = (4.0f/3.0f) * pi * (r * r * r);	
		// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output

		return volume; // returns the calculated output
	}
}