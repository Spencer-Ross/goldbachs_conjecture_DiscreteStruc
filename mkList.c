#include "prime.h"

void mkList(unsigned int *list, unsigned int givenNum) {
	extern int Tote, i;

	for(i = 0; i < Tote; i++) {
		list[i] = givenNum++;
		givenNum++;
	}
	
	return;
}
