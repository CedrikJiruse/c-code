#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// declare variables
	char ch;
	int fCount = 0, numCount = 0, capCount = 0, lowCount = 0, ASCIICount = 0, IDCount = 0, symbolsCount = 0;

	// opens files and stores them into memory
	// declares file paths to various files as variables
	FILE* fData = fopen("./data/fData.txt", "r");
	FILE* capData = fopen("./data/cap.txt", "w");
	FILE* lowData = fopen("./data/low.txt", "w");
	FILE* IDData = fopen("./data/id.txt", "w");
	FILE* symbolsData = fopen("./data/symbols.txt", "w");

	// loops through every character in fData.txt and seperates it into certain categories
	// counts each character in each categories
	while (fscanf(fData, "%c", &ch) != EOF) {

		fCount++;

		if (ch >= 'A' && ch <= 'Z') { // upper case letters

			fprintf(capData, "%c", ch);
			capCount++;
		}

		if (ch >= 'a' && ch <= 'z') { // lower case letters

			fprintf(lowData, "%c", ch);
			lowCount++;
		}

		if (ch >= '0' && ch <= '9') { // numbers

			numCount++;
		}

		if (ch < 33) { // ASCII values below 33

			ASCIICount++;
		}

		if (
			ch == 'X' ||
			ch == '0' ||
			ch == '1' ||
			ch == '6' ||
			ch == '5' ||
			ch == '1' ||
			ch == '6' ||
			ch == '6'
			) { // characters which make up my student ID

			fprintf(IDData, "%c", ch);
			IDCount++;
		}

		if (
			(ch >= '33' && ch <= '47') ||
			(ch >= '58' && ch <= '64') ||
			(ch >= '91' && ch <= '96') ||
			(ch >= '123' && ch <= '126')
			) {  // ASCII values in certain ranges

			fprintf(symbolsData, "%c", ch);
			symbolsCount++;
		}
	}

	// prints the total count of all categories
	printf("Total Characters\t%d\n", fCount);
	printf("Numerical Characters\t%d\n", numCount);
	printf("Upper Case Characters\t%d\n", capCount);
	printf("Lower Case Characters\t%d\n", lowCount);
	printf("ASCII Characters\t%d\n", ASCIICount);
	printf("ID Characters\t%d\n", IDCount);
	printf("Symbols Characters\t%d\n", symbolsCount);

	// closes files and removes them from memory
	fclose(fData);
	fclose(capData);
	fclose(lowData);
	return 0;
}