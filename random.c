#include <stdlib.h>
#include <time.h>

char randchar(){
	srand(time(NULL));
	int randInd = rand()%26;
	char randChar = 'A' + randInd;
	return randChar;
}

