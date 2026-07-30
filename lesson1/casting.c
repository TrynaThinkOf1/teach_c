/*
 * An important part of C is the strong static typing of the language. This means that every
 * piece of data must have a known data type at compile time, no excuses. Sometimes, however,
 * you want to be able to interpret data in a new way (such as converting an int to a double in
 * order to widen it manually). In C there is only one way to do this and it's incredibly simple:
 */
int some_number = 573;
double some_number_decimal = (double)some_number; // or (double)(some_number)
/*
 * Super easy super simple, just place the keyword of the data type in parenthesis right before the
 * variable you wanna cast and it will cast it, be warned however that if the compiler detects that
 * this cast will fail and the program will not compile, such as if you wanted to cast a very large
 * number to a very small data type statically. Once your program compiles and is running however,
 * the program must assume all casts work perfectly and therefore if you have a bad cast, it fails
 * and causes undefined behavior (UB). Read about UB here: https://en.wikipedia.org/wiki/Undefined_behavior
 */
