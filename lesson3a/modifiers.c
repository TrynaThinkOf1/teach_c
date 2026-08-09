/*
 * Modifiers are incredibly important for writing library code that others will use,
 * but could usually be gone without if writing your own code; they do prove helpful often.
 * These are the basic modifiers and their explanations, in the second part of this lesson
 * you'll learn about "modifiers" that are incredibly important and necessary: pointers.
 */

// lets say you want to create a variable that once initialized cannot be modified:
const double e = 2.718;
// using the "const" qualifier before the type means that under no circumstance can the variable's value be changed

// another common one is to create an integer without a sign:
unsigned short s = 65000;
// the unsigned short has a larger range than the signed short, but cannot represent negatives
// the opposite keyword is rarely used, the "signed" keyword is usually only used on `char`
signed char c = 126; // chars are default unsigned

// heres one you will almost never use, it helps with memory issues:
volatile long addr;
// the volatile keyword means that on every read/write the CPU must load it from memory without
// caching because the value is volatile and can be changed by external sources. This is good
// for representing atomic values (which we might get into later with threading) as well as MMIO.

// a rare one is using the data type `long` as a modifer in one specific case:
long double pi = 3.14159265358;
// this means that this double is actually 16 bytes not just 8
