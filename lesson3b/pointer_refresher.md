# This isn't your first encounter with pointers hopefully, but just a refresher:

#### What is a pointer?
Basically just a big unsigned number that is interpreted as a memory address. A helpful analogy
is that the address "1234 Sesame St." could be interpreted as a pointer to a plot of land.

#### How do they work in C?
Well typically in C a pointer won't point to an individual byte, but an N-byte sized chunk, with N
being the number of bytes in the datatype. For example, a pointer to an int would actually point to
the first byte of the 4-byte block, but would be interpreted by the program to mean the entire block.
##### To illustrate this principle further, refer to this pseudocode:
```c
int_pointer p = 764; // this means that the first byte of the integer is located 769 bytes away from the start of memory

p = p + 1; // adding one to the pointer, you would think it results in 765
p; // this actually contains the number 768 because it skips the entire integer block
```

#### What actions can I take with a pointer?
For now, all you can do is dereference a pointer. Dereferencing means reading from the memory at
which the pointer points. This basically converts the pointer into a value of the type. Eventually,
we'll learn arrays and functions as well as OS-level code which involves much more complex actions
with pointers.


### Final Note
A lot of people talk about how "pointers are the hardest thing" "I hate pointers" "Pointers are unsafe".
While this is technically an opinion, it's dead wrong. These people are just misinterpreting what
pointers do and how to use them. A lot of them think the complex part is with the syntax, those people
are just plain idiots. As far as the "unsafe" rumors, I assure you only bad programmers and unfocused
programmers write unsafe code, it's not the pointers' faults.
