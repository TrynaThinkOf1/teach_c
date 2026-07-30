# This is one of the most important parts

### How do we make our code an executable?

Unlike Python, C code isn't interpreted dynamically at runtime. First, the compiler must turn your source
code into viable assembly code for your specific kernel and hardware, then it uses an assembler to
turn that assembly code into native bytecode, which is then linked using the linker. Finally, this 
turns your original C source code into a pretty executable file which you can run.

#### okay..? how do I actually do that?

These days there are two big compiler toolchains: GCC (GNU Compiler Collection), and Clang (LLVM Frontend for the C Language).
What is LLVM? Don't worry about it. On MacOS we use Apple-Clang which is a version of Clang that the
kind devs at Apple are paid to maintain because some small parts of the Apple hardware and kernel  ecosystem
are closed-source which means that only the Apple devs know what specific bugs might happen and then
they go in and make sure that the Apple specific compiler works perfectly. Using a non-Apple version of
Clang or GCC **WILL NOT** cause your code to run improperly, however your code could potentially run
inefficiently, slow(er)ly, or not make use of certain Apple-specific features. We're just gonna stick with Clang.

##### The simplest version of clang is this

I have a source code file: `main.c`

```bash
clang main.c
```

that one simple command will process, compile, assemble, and link your program, and assuming that
your code was correct and didn't cause any compilation errors, it will spit out an executable `a.out`
which you can run with the simple one-word command: `./a.out`.

If you want to name the executable, you add the -o flag:

```bash
clang main.c -o my_executable
```

Then do the same thing with `./my_executable`

##### 90% of the C you will write in this course will be so simple that you can just use that one command to compile.

However, it does get more complicated, and I will brief you on any extra flags or options we need to pass
to clang to compile a program in the future.

#### Neat trick

One cool thing about modern compilers is that they are no longer just one program, they are a combination
of multiple programs being called in succession, so its possible to just exit the sequence at the end of 
any arbitrary step. The only one with real value to you (maybe) is exiting after the code has been compiled
into assembly code. It's really very cool to see what the assembly version of your code is.

In order to do that, you can run a command like this:

```bash
clang main.c -O0 -S
```

The `-O0` flag means that the compiler will perform _almost_ no optimization on the code in the preprocessor
stage, therefore the generated assembly code will have 99% fidelity to the logic of your original code.
This of course gets muddied up when dealing with asynchronous task scheduling and threads, but we don't
cover those things in that course so it's okay. The `-S` flag does the heavy lifting and tells the compiler
to output a file called `main.s` (`filename.c` -> `filename.s` by default) which contains all of the
assembly code. You can just simply read the code in the terminal using the `less` command:

```bash
less main.s
```

Less is a paginator which means it takes a long file and turns it into readable chunks that you can
scroll through with the arrow keys, just type `q` to close the reader.

---

_this is an example of ONE OF THE compilation commands that CMake uses for one of my programs:_

`clang -Wall -Wextra -std=c17 -O2 -I./include/ -MMD -c builtins.c -o builtins.o -lpthread -lm`
