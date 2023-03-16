# 0x00. C - Hello, World

"C programming language" redirects here. For the book, see The C Programming Language.
Not to be confused with C++ or C#.

C (pronounced /ˈsiː/ – like the letter c)[6] is a general-purpose computer programming language. It was created in the 1970s by Dennis Ritchie, and remains very widely used and influential. By design, C's features cleanly reflect the capabilities of the targeted CPUs. It has found lasting use in operating systems, device drivers, protocol stacks, though decreasingly[7] for application software. C is commonly used on computer architectures that range from the largest supercomputers to the smallest microcontrollers and embedded systems.



## Learning Objectives: 


### General :

* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program


## Tasks :

0. Preprocessor :
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c



1. Compiler :
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE 
* The output file should be named the same as the C file, but with the extension .o instead of .c.
      
     - Example: if the C file is main.c, the output file should be main.o




2. Assembler :
Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE 
* The output file should be named the same as the C file, but with the extension .s instead of .c.

     * Example: if the C file is main.c, the output file should be main.s



3. Name :
Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE




4. Hello, puts :
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0




5. Hello, printf :
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.


* Use the function printf 
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option



6. Size is not grandeur, and territory does not make a nation :
Write a C program that prints the size of various types on the computer it is compiled and run on.


* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option




7. Intel :
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
      - Example: if the C file is main.c, the output file should be main.s



8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option




## :)  By Youssef EL MAHMI




















