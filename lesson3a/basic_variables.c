/*
 * I really hope that just via lesson 2 you've figured out the basics of variables,
 * but it's pretty simple:
 */
int var; // just create space for a 4-byte signed integer
		// while OS-Dependant, this usually is initialzed with whatever garbage was in memory

int var = 0; // this will do the exact same thing, except initialize with 0

/*
 * That's basically it for now, just define stack variables with the type, then a
 * name, then if you'd like a value;
 */

short my_short;
short my_short = 8;

/*
 * As a sidenote, we haven't decided upon strings or booleans because those involve special stuff
 */
 
char c = 'h'; // this is equivalent to the number 104
(int)c; // evaluates to 104, remember casting from lesson 2?
