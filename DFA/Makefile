##################################################################### 
# Name:	   Makefile	for DFA
# Project: Atomaton training
# Descr:   DFA Deterministic Finate Automaton
# Author:  Lars Hübnmer
# Version: 1.0
##################################################################### 

# the excutable
MAIN = dfa

# Source files
HDR = accept.h state.h
SRC = accept.c state.c
MAIN_C = main.c

CC = gcc

$(MAIN): $(HDR) $(SRC)
	$(CC) -o $(MAIN) $(HDR) $(SRC) $(MAIN_C)

clean:
	rm -f $(MAIN) *.o && rm -f $(MAIN) *.gch
