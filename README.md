# formatstring_fun
This repository contains small examples that illustrate the quirks and
potential security vulnerabilities of C format strings. Understanding
these quirks is crucial for writing secure C code. Every now and then, I'll add new examples.


## Adding Numbers
The program `formatstring_add` demonstrates how format strings can be used to perform arithmetic operations, but with limitations and security risks. Here's a step-by-step explanation:

### 1. Outputting a String of Length n
The statement `printf("%%*x", n, 0);` prints the value of `0` as a hexadecimal number, left-padded with spaces to a minimum field width specified by `n`.

* **Learning:** The format string `%*x` allows us to output a string of length `n` greater than 0. However, using this technique for memory manipulation can have security implications due to buffer overflows.

### 2. Storing Output Length
`printf("%n", &i);` stores the number of characters written so far into the integer `i`.

* **Learning:** The format string `%n` writes the number of written characters to a given address. However, using `printf` to write a number to a specific address is generally discouraged due to security risks.

### 3. Writing a Number to an Address
The statement `printf("%*x%n", n, 0, &i);` writes the value of the unsigned integer `n` to the address `i`.

* **Learning:** The format string `%*x%n` allows us to write an arbitrary number to a given address. This technique can be exploited in security vulnerabilities known as format string attacks.

### 4. "Adding" Two Numbers
The statement `printf("%*n%*x%n", a, 0, b, 0, &c);` writes `a + b` characters to standard output (`stdout`) and the address `&c`. However, this is not a true addition operation and can lead to unexpected behavior or security issues.

### Important Note
This repository serves as a cautionary example to illustrate the
pitfalls of format strings. Always prioritize secure coding practices
and rely on standard arithmetic functions for calculations.


## Integer Assignment (Easy)
Your task is to provide input to the program
`formatstring_assign_puzzle.c` that assigns the value `42` to the
variable `target`.

*HINT:* GhlIGNvbnZlcnNpb24gc3BlY2lmaWVyICduJyBtaWdodCBoZWxwIHlvdSBzb2x2ZSB0aGlzIHRhc2suCg==
*Note:* To decode this hint, you can use a Base64 decoder available
online or a command-line tools such as `base64`.


