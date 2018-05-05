/* 
 * Name:	State functions
 * Project: Atomaton training
 * Descr:   DFA Deterministic Finate Automaton
 * Author:  Lars Hübnmer
 * Version: 1.0
 */

#ifndef STATE_H
#define STATE_H

#define MAX_STATES 100
#define MAX_LEN 127
#define START_STATE 0
#define ERROR_STATE (MAX_STATES -1)

typedef short state_t;


extern void initStates();
/* Initialize the Atomaton, must be called once before nextState can be called */

extern state_t nextState(state_t q, char s);
/* gives the next state that will be reached with the character wenn the current state is q
 * calcuates the state transition
 */

extern int isFinal(state_t q);
/* checks if the state q is a final state */

#endif //STATE_H
