#include "prime.h"

void printSum(unsigned int givenNum, unsigned int prime1) {
	unsigned int prime2 = givenNum - prime1;

	//printf("<%u = %u + %u>, ", givenNum, prime1, prime2);
	FILE *f;
	f = fopen("pa2_sums", "a");
	fprintf(f, "%u = %2u + %2u\n", givenNum, prime1, prime2);
	fclose(f);
	return;
}
