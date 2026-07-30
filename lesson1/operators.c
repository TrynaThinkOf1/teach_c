/*
 * Like nearly every programming language, C features various basic arithmetic operators, as well
 * as some more complicated ones which we will get into much later (involving pointers and whatnot).
 *
 * You have the basic math operators: `+` (add), `-` (subtract), `/` (divide), `*` (multiply)
 * those are all the operators we're gonna learn in this file though, bitwise operators will come later
 */

// examples of possible uses of arithmetic operators on immediate values is something like
4 * 8
7 + 12
9 / 3
78 - 65

// very basic stuff, this shouldn't be anything new for you

/*
 * Remember that numbers can be represented as decimal, binary, octal, and hex in C
 * but all of those are also just types of immediates, so equivalent operations could be
 */

4 * 010 // 4 (decimal) * 8 (octal)
0b0111 + 12 // 7 (binary) + 12 (decimal)
0x9 / 0b011 // 9 (hex) / 3 (binary)
0116 - 0x41 // 78 (octal) - 65 (hex)

