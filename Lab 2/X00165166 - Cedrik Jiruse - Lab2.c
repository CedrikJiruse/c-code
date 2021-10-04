#include <stdio.h>

// program to calculate the volume of various shapes where
// the dimensions are defined by the user

const float pi= 3.14159265359;
float sphereVolume(float r);
int main(void)
{
	float radius;
	
	printf("Input the radius of the sphere: ");
	scanf("%f", &radius);
	printf("Volume of sphere is %f\n", sphereVolume(radius));

	// TOTAL VOLUME OF COMPLEX SHAPE
	// printf("\nVolume of shape %f\n", (triangleVolume + cuboidVolume + secondCuboidVolume));

	return 0;
}

float sphereVolume(float r) {
	// calculates the volume of a sphere

	float volume = (4.0f/3.0f) * pi * (r * r * r);	
	// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output

	return volume; // returns the calculated output
}
