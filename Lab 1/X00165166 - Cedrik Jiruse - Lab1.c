#include <stdio.h>

// program to calculate the volume of various shapes where
// the dimensions are defined by the user

const float pi= 3.14159265359;

int main(void)
{

	// VOLUME OF A SPHERE
	float radius, sphereVolume;
	// get the data from user and output result
	printf("Please input the radius and length of the sphere: ");
	scanf("%f", &radius);
	sphereVolume = (4.0f/3.0f) * pi * (radius * radius * radius);	// (4.0f/3.0f) is used instead of (4/3) because the latter gave an integer output
	printf("Volume of sphere is %f\n", sphereVolume);

	// VOLUME OF A TRIANGLE
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

	// TOTAL VOLUME OF ABOVE THREE SHAPES
	printf("\nVolume of shape %f\n", (triangleVolume + secondCuboidVolume + secondCuboidVolume));

	return 0;
}