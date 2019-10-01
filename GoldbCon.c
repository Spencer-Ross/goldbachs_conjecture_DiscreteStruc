#include "prime.h"

_Bool GbC(unsigned int givenNum, unsigned int prime) {
	if(isprime(givenNum-prime)) return TRUE;
	return FALSE;
}
