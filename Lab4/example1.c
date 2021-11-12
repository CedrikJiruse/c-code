#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	int count = 0;

	FILE* inData = fopen("C:\\Users\\cedri\\Documents\\git\\c-code\\Lab4\\data\\fData.txt", "r");
	FILE* numData = fopen("C:\\Users\\cedri\\Documents\\git\\c-code\\Lab4\\data\\numericData.txt", "w");
	FILE* capData = fopen("C:\\Users\\cedri\\Documents\\git\\c-code\\Lab4\\data\\capitalsData.txt", "w");

	while (fscanf(inData, "%c", &ch) != EOF) { //EOF(-1) is returned from fscanf when end of file encountered.
		count++;

		if (ch >= 'A' && ch <= 'Z')
			fprintf(capData, "%c", ch);

		if (ch >= '0' && ch <= '9')
			fprintf(numData, "%c", ch);
	}

	printf("the total number of characters in the file is\t%d\n", count);

	fclose(inData);
	fclose(numData);
	fclose(capData);
	return 0;
}