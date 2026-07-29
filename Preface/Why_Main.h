/*
 * Hopefully as we discussed with our brief preview of how running programs work,
 * all programs must have a `_start` symbol in their assembly code. However the C standard
 * library and runtime define this symbol for you because they need to initialize a ton of
 * global stuff that you don't really touch. To do this, they define the `_start` function
 * and within that function they declare and call a `main(int, char**)` function. That main
 * function is what we use as our entry function to our program.
 *
 * For now just try to keep it in your head that all of our code will be happening within:
 */
int main(int argc, char** argv) {/* here */}
/*
 * block and there is nothing you can do about it (for now) and that you don't need to understand
 * it (yet).
 *
 * the `int argc` defines a number between 0 and 2^32 - 1 which is the number of parameter arguments
 * given to the program (know how you say `git commit -m "message"`? the `commit`, `-m`, and
 * `"message"` are all the arguments for the program, and so is `git` technically but we ignore that)
 * For example, in that example command argc would contain the number 4 and argv would be
 * [ "git", "commit", "-m", "message" ]
 * -- the `int argc, char** argv` are not necessary, sometimes you'll see `main()` or `main(void)`
 *
 * Also, a program must return an integer value, which is traditionally 0 for success, and other
 * positive numbers for error codes. It's stored in an unsigned byte which means that possible
 * values range from...                         0 to 255 (2^8 - 1), hopefully you knew that. This
 * is done via the `return` keyword. For now just know that all of the programs we use will likely
 * end the main function with `return 0;`. Do not ask why it returns an int but there is only space
 * for an unsigned byte as the return code, NOBODY knows.
 *
 * Shell command to access the returned code is `$?` (with `$` meaning value-of-variable and `?` being
 * the variable's name), however this will garner an error like `no such command as '32'`, so it's
 * better to use the `echo` program to just print out the variable: `echo $?`
 *
 * Unlike you may have seen with Python, C's paradigm is not imperative and therefore any actual code
 * execution must take place within the context of the main function, you can't just say like:
 */
int l = 8;
l - (3 / 4);
/*
 * thats not syntactically valid and will not compile or run.
 * however this will:
*/
int main() {
	int l = 0;
	return l - (3 / 4);
}
/*
 * here is some cool info, im just gonna paste the assembly code from the compiled bare-bones:
 */
int main() {
	return 42;
}
/*
 * inside of the file in this directory entitled `__do_not_open_until_asked.S` (`.S` is the standard
 * assembly code file extension). I'll try to leave some comments with explanation, but I'm more-so
 * showing you just cus it's cool not because I want you to understand it.
 */
