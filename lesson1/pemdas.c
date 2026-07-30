/*
 * If you don't remember PEMDAS, or the order of operations, from elementary school math then that's
 * a problem. C follows the rules of PEMDAS:
 *  PARENTHESES, EXPONENTS, MULTIPLY/DIVIDE, ADD/SUBTRACT
 * I know what you're thinking, "exponents?", we'll get to that later when we examine libraries.
 */

// simple as
double num = 4 + 5 / 7 - 9 * 4; // -31.2857
double num = (4 + 5) / (7 - 9) * 4; // -18

/*
 * It's at this point that we are just gonna cover the rest of the variables because there really
 * isn't a better place to. As you've already seen, declaring a simple variable is `type name = value;`.
 * Here are all of the elementary C data types, complex ones will come later
 *  char: one single byte, unsigned by default (0, 2^8 - 1) that the computer treats as a character
 *  short: two bytes, signed by default (0, 2^15 - 1) just for smaller numbers
 *  int: four bytes, signed by default (0, 2^31 - 1) for standard numbers
 *  long: eight bytes, signed by default (0, 2^63 - 1) for very large numbers
 *  void: one of the most important types, its size is indeterminate and it can be used to hold
 *   any type of data, or symbolize that a function returns no data at all
 */

char c = 'a'; // singular chars must be in single quotes, '', we will learn about strings later
short s = 3278;
int i = 712863;
long l = 18923123;

void v; // this is not possible, you cannot "create" a void value from scratch, however
// you can cast a type into void, for example:
void vl = (void)l; // this will give you eight bytes of uninterpreted memory rather than one long
// in general voids arent really used unless you are writing a type-agnostic library, so not stuff
// we are gonna get into in this course
