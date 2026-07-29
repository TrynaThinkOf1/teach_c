// this is a single line comment

/*
This is a
multi-line
comment.
*/

/*
 * They are often formatted like this
 * so that they look nicer, but strictly speaking
 * everything after the `/*` and before the reverse is a comment
 */


the //
symbolizes the beginning of a section of `code` that the compiler should completely ignore, the
compiler will only ignore characters on the same line after the //
whereas every character after the /* and before the */ is ignored

often, programmers will use a single-line comment to explain what one or two lines of code does...
// find the value stored in the next node of a linked list with the previous node stored in an array
const int n = *(my_node_array[3]).value;

sometimes a multi-line comment is used to explain a larger segment of code like this...
/*
 * Once a the flag is set, terminate the thread
 * and reclaim the original process
 */
if (atomic_end_flag == true) {
	pthread_join(&my_thread);
	end_fork();
}

another neat trick is comment-embedding...
char* compute_str(short number_argument /* , int argument_im_not_I_want_to_keep */ , void* error) {
