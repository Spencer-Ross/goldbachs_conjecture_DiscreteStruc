#include "prime.h"

void mkPrime(unsigned int *primeList) {
	extern int primeCnt, i, j;
	//int j=0;

	for(i = 2; primeCnt < LIMIT; i++) {
		if(isprime(i)) {
			primeList[j++] = i;
			primeCnt++;
		}
	}
	
	return;
}
