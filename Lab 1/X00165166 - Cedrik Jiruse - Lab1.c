#include <stdio.h>

// program to calculate the volume of various shapes where
// the dimensions are defined by the user

const float pi= 3.14159265359;

int main(void)
{

	// VOLUME OF A SPHERE
	float sphereRadius, sphereVolume; // declare variables for this shape
	// get the data from user and store it in sphereRadius
	printf("Please input the radius and length of the sphere: ");
	scanf("%f", &sphereRadius);
	// calculate volume of a sphere using vaules from the user
	sphereVolume = (4.0f/3.0f) * pi * (sphereRadius * sphereRadius * sphereRadius);	// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output
	printf("Volume of sphere is %f\n", sphereVolume);

	// VOLUME OF COMPLEX SHAPE
	// it is necesssary to divide the shape into smaller shapes to make calculations easier

	// VOLUME OF A TRIANGLE
	// used previous shape as a template
	// changes include variable names, calculations, and messages
	float triangleheight, trianglebase, trianglelength, triangleVolume;
	printf("\nPlease input the height, base and length of the triangle: ");
	scanf("%f%f%f", &triangleheight, &trianglebase, &trianglelength);
	triangleVolume = ((triangleheight * trianglebase) / 2.0f) * trianglelength;
	printf("Volume of triangle is %f\n", triangleVolume);

	// VOLUME OF A CUBOID
	float cuboidlength, cuboidwidth, cuboidheight, cuboidVolume;
	printf("\nPlease input the length, width and height of the cuboid: ");
	scanf("%f%f%f", &cuboidlength, &cuboidwidth, &cuboidheight);
	cuboidVolume = cuboidlength * cuboidwidth * cuboidheight;
	printf("Volume of cuboid is %f\n", cuboidVolume);

	// VOLUME OF A SECOND CUBOID
	float secondCuboidlength, secondCuboidwidth, secondCuboidheight, secondCuboidVolume;
	printf("\nPlease input the length, width and height of the second : ");
	scanf("%f%f%f", &secondCuboidlength, &secondCuboidwidth, &secondCuboidheight);
	secondCuboidVolume = secondCuboidlength * secondCuboidwidth * secondCuboidheight;
	printf("Volume of a second cuboid is %f\n", secondCuboidVolume);

	// TOTAL VOLUME OF COMPLEX SHAPE
	printf("\nVolume of shape %f\n", (triangleVolume + secondCuboidVolume + secondCuboidVolume));

	return 0;
}