#include <stdio.h>

// program to calculate the volume of a sphere when given the radius by the user.

const float pi= 3.14159265359;

int main(void)
{

	float radius;

	// get the data from user
	printf("Please input the radius and length of the sphere: ");
	scanf("%f", radius);
	printf("Volume of sphere is ", 	sphereVolume(radius));

	return 0;
}

float sphereVolume(float r) {
	// calculate volume of a sphere
	// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output

	return (4.0f/3.0f) * pi * (r * r * r);
}

float tetrahedronVolume(float height, float base) {
	// calculate volume of a tetrahedron (3D triangle)

	return (height * base) / 2;
}

float rectangleVolume(float width, float length) {
	// calculate 
}