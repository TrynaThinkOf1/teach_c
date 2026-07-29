Basically, C compilers operate using a "translation unit" which consists of exactly one source
file, and any number of header files.

### What the hell are source files and header files?

Glad you asked, a source file will typically use either camelCase or separator_underscore_case and 
end with a `.c` extension. C++ files use PascalCase with either `.cpp` or `.cxx` extentions, don't 
worry about that. It will contain the **DEFINTIONS** of things. Usually source files exist together 
in a single directory with no organization whatsoever.

A header file will typically use the exact same same as its paired source file and use a `.h` 
file extension. C++ headers use `.hpp` or `.h` (_not_ `.hxx`). Header files contain 
**DECLARATIONS**, and sometimes definitions (rarely, we'll talk about that later). Due to the nature
of header files, they can be organized within directories to separate them, i.e. all headers that
deal with numbers could be placed in a `numbers` directory, separated from other headers,  but their 
corresponding sources wouldn't do the same thing.

### I don't understand definitions vs declarations!

It's funny you should say that, I'll explain.

As we've (probably) discussed, functions and variables are just bytes in memory being interpreted 
in special ways (remember that data are just interpreted bytes). Therefore, if you try to compile 
multiple source files together, and two different files contain a function with the same signature, 
the linker will think that you're **DEFINING** the same symbol twice.

The solution to this problem is using declarations. In a header file, you will **DECLARE** a symbol
like a function or variable to the compiler, and then **DEFINE** it in a single source file. Now,
any time a different source file includes your header file, that function will exist as a specific
place in memory for that file, and it can call the function with no issues.

### That was really confusing. Lets look at a pseudo-code example:

lets say we have two source files...

compute.source:
```sql
FUNCTION compute_numbers(argument1, argument2, argument3) {
	RETURN (argument1 / argument2) + argument3
}
```

test.source:
```sql
FUNCTION compute_numbers(3.8, 42, -6)
```

if we tried to compile these two files together, we would get an error that we're trying to
define the same function, `compute_numbers(int, int, int)` twice.

to fix it, we create a header file that declares the function first

compute.header:
```sql
FUNCTION compute_numbers(int, int, int)
```

then we need to include that in our sources by adding this line to the source files:
```sql
INCLUDE 'compute.header'
```

now, the linker knows that the function exists somewhere in memory (because it was declared) and
that the definition exists in only one place (because it can now tell that one of the source files
is calling the function, and the other is definining the function).

### That was even more confusing, but the goal is that you understand the difference between a header file and a source file, and if you don't then you surely will as the lessons progress
