# Again, you should already have this stuff in the back of your mind, but this may help:

#### What is _A_ stack?
A stack is a first-in last-out data structure much like a stack of pancakes: in order to eat the one
at the bottom, you must either slide it out of the stack (and leave a gaping hole) or eat all of the
ones above it.

#### What is _THE_ stack?
The stack usually refers to a fixed-sized frame of memory which is "faster" to access than the heap
(although with modern computers the difference is in less-than-nanoseconds). The stack is only
accessible when in-scope of the stack frame. This means that one function cannot access another
function's stack frame, and when a function returns and goes out of scope its stack frame is "cleared"
and all of the data is freed.

#### What is _A_ heap?
A heap is an any-in any-out data structure much like a checkers board, where at any time anyone can
reach in and place a piece or take away a piece or just look at a piece. The main problem with heaps
is heap-fragmentation, if you allocate a block of the 250 -yte heap to be 100-bytes, and that block
falls right in the middle of the heap, then even though there might theoretically be space for a
50-byte piece, there is no contiguous block large enough. Modern OS's have a combination of advanced
algorithms, advanced hardware, and VERY large memories that this problem is nonexistent. However,
when I write embedded code for things like Arduinos, this is something I have to worry about consistently
with "large" projects.

#### What is _THE_ heap?
Programs are allowed a large chunk of memory that doesn't belong to any scope and can be allocated,
read, and deallocated at (mostly) any time. This can also be extended and shrunk at any time. It's
important to remember, although this will likely never affect your code unless you write an incredibly
fast and efficient program like FFmpeg, that all of the allocation/deallocation expansion/shrink
stuff for the heap are just requests to the operating system, while they very rarely fail and will
likely never fail for your code for a very long time, it is possible for them to fail and it's
necessary to always check that the requests succeeded or you can get some REALLY nasty bugs. Also,
the requests to the OS take a "long" time to complete (like 500ns-2ms) so lots of calls slow code down.

### Final Note
One of the things a good C programmer learns is heap discipline. At first everyone wants to allocate
and deallocate every byte so that they can "save memory footprint". While minimizing memory is a good
mentality to have early-on, however another thing about allocation/deallocation requests is that
sometimes the OS will tell you it succeeded, but based on advanced algorithms has decided that it won't
_actually_ free the memory until the program finishes running. Because of this, if you try to manually
deal with every single byte, it could _byte_ you in the ass later by both actually taking up more
memory than just being normal and taking a long time to do all of the OS requests for manual memory.
