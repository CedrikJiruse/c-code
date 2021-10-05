#include <stdio.h>

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
	printf("Input the radius of the sphere");
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

	printf("\nVolume of shape %f\n", triangle + cuboid + secondCuboid);

	return 0;
}

void inputData(float *d) {
	// takes data from user and stores it in a variable
	// checks for incorrect data
	// incorrect data is anything that is less than or equal to 0
	
	scanf("%f", &*d);
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