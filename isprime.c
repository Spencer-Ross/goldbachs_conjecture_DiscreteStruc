#include "prime.h"
#include <math.h>

_Bool isprime(unsigned int givenNum) {
	int divisor = 2;
	_Bool prime = TRUE;

	if(givenNum%2 == 0 && givenNum != 2) return FALSE;	//if not 2 AND even
	else if(givenNum == 2) return TRUE;
	else {
		while(divisor/*<= sqrt(givenNum)*/*divisor <= givenNum) { //while divisor ≤ √given #
			//if they divide evenly...FALSE
			if (givenNum%divisor == 0) return FALSE;

			divisor++; //move along
		}
	}

	return TRUE;	//Else return isprime == TRUE
}
