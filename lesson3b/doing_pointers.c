/*
 * Now that you know all there is to know about pointers and how they work, it is time to learn
 * their C syntax and how to use them in C. It's simpler than others will lead you to believe (for now).
 */

// creating a pointer without a value:
int* my_int_ptr;
int *my_int_ptr; // this is evil and you will only ever see evil people using it
// the `*` character between the type and the name is the modifier for a pointer

// to get the memory address (pointer) of any object:
&my_object;

// to dereference a pointer, aka getting the value out of it:
*my_int_ptr;

/*
 * A helpful way I like to think about it is this:
 *  `*` after the type modifies the type and creates a pointer
 *  `*` before the variable name deletes the modifier (not really) and extracts the raw value
 * That second bit should explain why people think the second type above is evil, because
 * it doesn't express consistent semantic value
 */

double pi = 3.14159265358;
double* ptr_to_pi = &pi;
double another_pi = *ptr_to_pi;

/*
 * Overall, this should be relatively simple to understand. Now this pi example above is all stack;
 * we create a variable (pi) on the stack, then take its address (which points to the stack) and
 * assign it to another stack variable, then dereference the stack address to extract the stack value
 * into another stack variable
 */
