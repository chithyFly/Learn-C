# Chapter 1 Getting ready

## Review Question

1. What does portability mean in the context of programming?

Source code is easier to run on the another machine without modification or a bit of changement
```
A perfectly portable program is one whose source code can, without modification, be
compiled to a successful program on a variety of different computer systems.
```


2. Explain the difference between a source code file, object code file, and executable file.

* Source code file
plain document programmer write for program to run.
```
A source code file contains code as written in whatever language the programmer is
using.
```
* Object code file
source code file compile without start up code and library code
  ```
  An object code file contains machine language code; it need not be the code for a complete program.
  ```
* executable file
​object code file + start up code + library function code  
```
An executable file contains the complete code, in machine language,
constituting an executable program.
```


3. What are the seven major steps in programming?

* Figure out program goal
* Draw out implement frame
* Write code
* Compile
* Run 
* Test
* Modify and Adjustment
```
a. Defining program objectives.
b. Designing the program.
c. Coding the program.
d. Compiling the program.
e. Running the program.
f. Testing and debugging the program.
g. Maintaining and modifying the program.
```


4. What does a compiler do?

Convert source code file into machine code(machine could understand)
```
A compiler translates source code (for example, code written in C) to the equivalent
machine language code, also termed object code .
```


5. What does a linker do?

Combine object code file with start up code, library code
```
The linker combines translated source code with library code and start-up code to
produce an executable program.
```


## Programming Exerciese


1. inch -> centimeter(1 inch = 2.54 cm); Prompt the user to enter an inch value

* Design Program objective
- [ ] inch -> cm
- [ ] Prompt the user to enter an inch value
* Design the program
- [ ] double inche_to_cm(double)


# Chapter 2 Introducing C

## Review Question

1. What are the basic modules of a C program called?

* Self answer
```
Unknown
```

* Standard answer
```
They are called functions.
```

2. What is a syntax error? Give an example of one in English and one in C.

* Self answer
```
Syntax error: violate c rule
English example: i food eat
```
* Standard answer
```
A syntax error is a violation of the rules governing how sentences or programs are put
together. Here’s an example in English: “Me speak English good.” Here’s an example in
C:
printf"Where are the parentheses?";.
```
3. What is a semantic error? Give an example of one in English and one in C.

* Self answer

```
n = 5; n2 = n*n; n3 = n2*n2;
n3 should equal n * n2
```

* Standard answer
```
A semantic error is one of meaning. Here’s an example in English: “This sentence is
excellent Czech.” Here’s a C example:
thrice_n = 3 + n;
```

4. Code question(detail see book)
5.  // :TODO


# Chapter 15 Bit Fiddling

## Review question

1. Convert the following decimal values to binary:
a. 3
b. 13
c. 59
d. 119
```
a: 011
b: 1101
c: 0011 1011
	2^4->16, 2^5->32, 2^6->64
	64 - 5(0b0101) = 59 <=> 0100 0000 - 0101 = 0011 1011
d: 0111 0111
	2^7 = 128
	128 - 9 = 119 <=> 1000 0000 - 1001 = 0111 0111
a. 00000011 b. 00001101 c. 00111011 d. 01110111
```

2. Convert the following binary values to decimal, octal, and hexadecimal:
a. 00010101
b. 01010101
c. 01001100
d. 10011101
```
a. 013 0x15 21
b. 125 0x55 85
c. 114 0x4c 76
d. 235 0x9d 147 -> 13+9*2^4=13+144=157
a. 21, 025, 0x15 b. 85, 0125, 0x55 
c. 76, 0114, 0x4C d. 157, 0235, 0x9D
```

3. Evaluate the following expressions; assume each value is 8 bits:
a. ~3
b. 3 & 6
c. 3 | 6
d. 1 | 6
e. 3 ^ 6
f. 7 >> 1
g. 7 << 2
```
a. 252
	~(0000 0011) = 1111 1100 = 12 + 15*2^4 = 252
b. 2
	011 & 110 = 010
c. 7
	011 | 110 = 111
d. 7
	001 | 110 = 111
e. 0b101=5
f. 3
	0000 0111 >> 1
g. 0011 1111 = 15+3*2^4=31 -> 0001 1100 = 16+12=28
a. 252 b. 2 c. 7 d. 7 e. 5 f. 3 g. 28
```

4. Evaluate the following expressions; assume each value is 8 bits:
	a. ~0
	b. !0
	c. 2 & 4
	d. 2 && 4
	e. 2 | 4
	f. 2 || 4
	g. 5 << 3
```
a. 2^8-1
	1111 1111 = 15*2^4+15 = 255
b. ture<=>1
c. 0
	0010 & 0100 = 0000
d. ture<=>1
e. 6
	0010 | 0100 = 0110
f. 1
g. 72 -> 40
	0000 01001 << 3 = 0100 1000 = 8+4*2^4 = 8+64 = 72 
	->
	5(0000 0101) << 3 = 0010 1000 = 2*16+8 = 40
```

5. Because the ASCII code uses only the final 7 bits, sometimes it is desirable to mask off the other bits. What’s the appropriate mask in binary? In decimal? In octal? In hexadecimal?
```
0111 1111 
7*2^4+15 = 112+15 = 127
0177
0x7e -> 0x7f
```

6. In Listing 15.2 , you can replace
```c
while (bits-- > 0)
{
mask |= bitval;
bitval <<= 1;
}
```
with
```c
while (bits-- > 0)
{
mask += bitval;    // mask: => 0001->0011->0111->1111
bitval *= 2;
}
```
and the program still works. Does this mean the operation *= 2 is equivalent to <<= 1 ?
What about |= and += ?
```
not equivalent, << operate in bit level, more efficent
same for |= and +=
```

7. a. The Tinkerbell computer has a hardware byte that can be read into a program. This byte contains the following information:

| Bit(s) | Meaning                       |
| ------ | ----------------------------- |
| 0–1    | Number of 1.4MB floppy drives |
| 2      | Not used                      |
| 3–4    | Number of CD-ROM drives       |
| 5      | Not used                      |
| 6–7    | Number of hard drives         |
Like the IBM PC, the Tinkerbell fills in structure bit fields from right to left. Create a bitfield
template suitable for holding the information.
b. The Klinkerbell, a near Tinkerbell clone, fills in structures from left to right. Create the
corresponding bit-field template for the Klinkerbell.
```
a. 
struct tb_driver {
	unsigned int floppty_num:    1;
	unsigned int:                2;
	unsignd int cdrom_num:       2;
	unsigned int:                1;
	unsigned int:                1;
}
->
struct tb_driver {
	unsigned int disk_driver:    2;
	unsigned int:                1;
	unsigned int cdrom_driver:   2;
	unsigned int:                1;
	unsigned int hard_diver:     2;
}

b. unknown
->
struct kb_driver {
	unsigned int hard_drive:     2;
	unsigned int:                1;
	unsigned int cdrom_drive:    2;
	unsigned int:                1;
	unsigned int: disk_driver:   2;
}
```