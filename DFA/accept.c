/* 
 * Name:	Accept functio
 * Project: Atomaton training
 * Descr:   DFA Deterministic Finate Automaton
 * Author:  Lars Hübnmer
 * Version: 1.0
 */

#include "accept.h"

int accept(char* word)
{
	state_t q = START_STATE;
	char    s = *word;

   	++word;		// incremets by size of type

	while(s != '\0'){
		q = nextState(q, s);
		s = *word;
		++word;
	}

	return isFinal(q);
}
