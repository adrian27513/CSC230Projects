/**
  @file base.h
  @author Adrian Chan (amchan)
  Header file and declares public implementation of base10.c and base32.c
*/

/** Exit status indicating that the program was given invalid input. */
#define FAIL_INPUT 102

/**
  Read a number from standard input in the current base, terminating unsuccessfully
  if it's not in the right format or if there's an overflow.
  @return the number read in.
  */ 
long readNumber();

/**
  Print the given value to standard output in the current base.
  @param val the value to print.
  */ 
void printNumber( long val );

