/* 
 * Name:	Main function	
 * Project: Atomaton training
 * Descr:   DFA Deterministic Finate Automaton
 * Author:  Lars Hübnmer
 * Version: 1.0
 */

#include <stdio.h>
#include "accept.h"

int main(int argc, char* argv[])
{
	printf("Hello Automaton Wolrd. \n\n");

	/* initialize Automaton */
	initStates();

	if(argc == 2){
		if(accept(argv[1])){
			printf("OK");
			return 0;
		} else {
			printf("Failure");
			return 1;
		}
	} else {
		printf("Missing arguments");
		return 2;
	}	
}


