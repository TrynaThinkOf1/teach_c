/*
 * Now that you've learned how to use operators, we can learn how and what expressions are
 * and how to use them.
 *
 * Expressions can be as simple as two immediate operands and an operator. However, they become
 * much more complex when involving variables and many operands/operators.
 *
 * We will also be using our first variables in this file.
 *
 * Quick variable overview (super high-level just for now):
 *  a variable is defined like `<data type> <name> = <value>;`
 *  for now we will only be using the data types `int` and `double`, which we've already learned
 *   on the slides from before this
 *  variable names are typically separator_underscore_case and can contain any alphanumeric
 *   character (as well as _) as long as the name doesn't start with a number
 * For example if I wanted a score counter, I might say `int score = 0;`
 * If I wanted a variable to store pi I might say `double pi = 3.141592653;`
 *  ^ those are also examples of the simplest kind of expression ^
 *
 * Variables can be used to store unknowns or computed values, just like in math.
 *
 * Parentheticals are used to denote an order of precendence for expressions.
 *
 * Here are some quick examples
 */

int length = 4;
int width = 6;
int area = length * width; // 24

// another one could be

double length = 3.2;
int width = 2;
double one_third_area = (length * width) / 3; // 2.133333

/*
 * WOAH! What just happened? How can we have a `double` operate with an `int`?
 * What we just saw is called "widening" and is a thing that the compiler does automatically.
 * When two operands are of different sizes (`int` = 4 bytes, `double` = 8 bytes) and must operate
 * together, the compiler will automatically convert the smaller one into the larger type so that
 * it actually becomes two doubles operating with each other. This process can be augmented via a
 * process known as "casting" which we will learn about in the next file.
 *
 * Expressions become much more complex than just simple math operations when you encounter real C.
 * There are other types of expressions as well, such as bitwise, boolean, and ternary expressions;
 *  we will learn about those later however.
 */
