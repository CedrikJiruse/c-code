#include <stdio.h>
#include <stdlib.h>

// program to calculate the volume of various shapes where
// the dimensions are defined by the user

const float pi= 3.14159265359;

void inputData(float *d);
float sphereVolume(float r);
float triangleVolume(float h, float b, float l);
float cuboidVolume(float l, float w, float h);

int main(void)
{
	float radius, length, width, height, base;

	// sphere
	printf("Input the radius of the sphere: ");
	inputData(&radius);
	printf("Volume of sphere is %f\n", sphereVolume(radius));

	// triangle
	printf("\nInput the height, base, and length of the triangle: ");
	inputData(&height);
	inputData(&base);
	inputData(&length);
	float triangle = triangleVolume(height, base, length);
	printf("Volume of triangle is %f\n", triangle);

	// cuboid
	printf("\nInput the length, width, and height of the cuboid: ");
	inputData(&length);
	inputData(&width);
	inputData(&height);
	float cuboid = cuboidVolume(length, width, height);
	printf("Volume of cuboid is %f\n", cuboid);

	// second cuboid
	printf("\nInput the length, width, and height of the second cuboid: ");
	inputData(&length);
	inputData(&width);
	inputData(&height);
	float secondCuboid = cuboidVolume(length, width, height);
	printf("Volume of second cuboid is %f\n", secondCuboid);

	printf("\nVolume of final shape %f\n", triangle + cuboid + secondCuboid);

	return 0;
}

void inputData(float *d) {
	// takes data from user and changes the value of the variable given
	// checks for incorrect data and after 3 failed attempts the program shuts down
	// incorrect data is anything that is less than or equal to 0
	int badAttempts = 0;

	do {
		// do while loops is used to allow the user 3 failed attempts at inputing data
		scanf("%f", &*d);

		if (badAttempts == 3) {
			// ends the program after 3 bad attempts
			printf("\nToo many failed attempts at inputing data. Program closing.\n");
			exit(0);
		}
		if (*d <=0) {
			// checks the input from user
			printf("Incorrect data. Must be a positive number. ");
			badAttempts = badAttempts + 1;
		}

	} while (badAttempts < 3 && badAttempts != 0);
}

float sphereVolume(float r) {
	// calculates the volume of a sphere

	float volume = (4.0f/3.0f) * pi * (r * r * r);	
	// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output

	return volume; // returns the calculated output
}

float triangleVolume(float h, float b, float l) {
	// calculates the volume of a 3d triangle

	float volume = ((h * b) / 2.0f) * l;

	return volume;
}

float cuboidVolume(float l, float w, float h) {
	// calculates the volume of a sphere

	float volume = l * w * h;

	return volume; // returns the calculated output
}