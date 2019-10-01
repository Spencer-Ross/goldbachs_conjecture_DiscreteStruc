#include "prime.h"

void askUsr(void) {
	char buffer[LIMIT];
	extern unsigned int input;
	extern int Tote;
	int ret = 0;

	while(ret != 2) {
		usrMsg();
		fgets(buffer, LIMIT, stdin);
		ret = sscanf(buffer, "%u%d", &input, &Tote);
	}
		
	return;
}
