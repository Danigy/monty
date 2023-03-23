# 0x19. C - Stacks, Queues - LIFO, FIFO

**About:** In this project, we created a simple interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.
### The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. 

### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument: [examples](#Examples)

## Objectives:
* To know what LIFO and FIFO mean
* To know what a stack is, and when to use it
* To know what a queue is, and when to use it
* To know the common implementations of stacks and queues
* To know the most common use cases of stacks and queues
* To know the proper way to use global variables

### Resource:
* [Difference between Stack and Queue Data Structures](https://www.geeksforgeeks.org/difference-between-stack-and-queue-data-structures/) || 

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is **README.md** file at the root of the **alx-low_level_programming**
* Maximum of one global variable is allowed
* No more than 5 functions per file
* The C standard library is allowed
* The prototypes of all the functions were included in the header file called monty.h
* All the header files are include guarded


## Compilation & Output
* These codes were compiled using: ```gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty```
* Any output must be printed on ```stdout```
* Any error message must be printed on ```stderr```

## Examples
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
push 3$
pall $
push 4$
push 5$
push 6$
pall$
julien@ubuntu:~/monty$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
push 3$
pall $
$
$
$
push 4$
$
push 5$
push 6$
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
**Brainfc*k** is an esoteric programming language created in 1993 by `Urban Müller`. It is known for its extremely minimalistic syntax consisting of only 8 commands, each represented by a single character. Despite its simplicity, Brainfck is Turing complete, meaning it can compute any computable function given enough time and memory.

The syntax of Brainf*ck consists of 8 commands:

- `>` increments the data pointer
- `<` decrements the data pointer
- `+` increments the value at the data pointer
- `-` decrements the value at the data pointer
- `.` outputs the value at the data pointer
- `,` inputs a value and stores it at the data pointer
- `[` jumps to the matching `]` if the value at the data pointer is zero
- `]` jumps to the matching `[` if the value at the data pointer is non-zero
Brainfck is a language designed for minimalism, not for readability or ease of use. As such, writing programs in Brainfck can be very difficult and time-consuming. However, it is often used for programming challenges and as an exercise in understanding the fundamentals of programming.

Here's an example Brainf*ck script:

```
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
```
This program works by incrementing and decrementing the values at the data pointer to move around in memory and manipulate the values stored there. It uses loops (`[...]`) to repeat sections of code and conditionals (`[` and `]`) to jump to different parts of the program.

While Brainf*ck is a fascinating language, it is not practical for most programming tasks. However, it serves as a reminder of the diversity of programming languages

## Authors
[Daniel Gessese](https://github.com/Danigy/monty)
