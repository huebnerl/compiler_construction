/* 
 * Name:	State functions
 * Project: Atomaton training
 * Descr:   DFA Deterministic Finate Automaton
 * Author:  Lars Hübnmer
 * Version: 1.0
 */

#include "state.h"

typedef state_t stateTable_t[MAX_STATES][MAX_LEN];
static stateTable_t StateTable;

void initStates()
{
	state_t q;
	int s;

	/* loop through the state transition table and initialize with ERROR_STATE */
	for(q = START_STATE; q < MAX_STATES; ++q){
		for(s = 0; s < MAX_LEN; ++s){
			StateTable[q][s] = ERROR_STATE;
		}
	}

	/* initialize State transition Table */
	StateTable[0]['n'] = 1;
	StateTable[0]['.'] = 2;
	StateTable[1]['.'] = 2;
	StateTable[1]['e'] = 3;
	StateTable[2]['n'] = 4;
	StateTable[3]['n'] = 5;
	StateTable[3]['+'] = 6;
	StateTable[3]['-'] = 6;
	StateTable[4]['e'] = 3;
	StateTable[6]['n'] = 5;
}

state_t nextState(state_t q, char s)
{
	/* returns the next State with input s */
	return StateTable[q][(int)s];
}

int isFinal(state_t q)
{
	/* check if state q is a final state */
	return q == 1 || q == 4 || q == 5;
}
