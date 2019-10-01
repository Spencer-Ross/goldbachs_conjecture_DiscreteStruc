#include "prime.h"
#include "vars.h"

/*---------------------------------------------------------*/
// Spencer Ross                                             |
// CSE 215              Synopsis:                           |
//                                                          |
// Class: Daily         This program asks the user for      |
// February 22, 2018    two numbers. The first is the       |
//                      starting number and must be even.   |
// PROGRAM 2            The second number indicates how     |
//                      many times the program will repeat. |
//                      The program’s main objective is to  |
//                      list all the numbers as sums of two |
//                      prime numbers.                      |
//__________________________________________________________|

int main (void) {
	unsigned int prime1, prime2;

	mkTxt();	//make text list to dump #'s into

	askUsr();	//print opening message and get input from user
	unsigned int inNums[Tote];
	mkList(inNums, input);	/*put input number into list and all even 
				numbers after up to limit set by user*/
	unsigned int primeList[LIMIT];
	mkPrime(primeList);		//Make list of the first primes for LIMIT

	for(i = 0; i < Tote; i++) {
		for(j = 0; j < LIMIT; j++) {
			prime1 = primeList[j]; //1st prime additive is prime # in position 'j'
			if(GbC(inNums[i], prime1)) {		//if the sum of 2 primes is #
				printSum(inNums[i], prime1);	//put that sum into text list
				prime2 = inNums[i] - prime1;	//sort of redundant/unecessary
				break;				//break out of loop check next #
			}
		}

		if(!GbC(inNums[i], prime1) && inNums[i] != (prime1 + prime2)) {//shouldn't be True
			printf("WINNER, %u\n", inNums[i]);	//winning discovery
			return 1;
		}
	}
	
	return 0;
}
