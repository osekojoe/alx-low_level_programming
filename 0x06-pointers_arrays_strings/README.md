- This project explores more pointers, arrays and strings in C
0. a function that concatenates two strings.
	- appends the *src* string to the *dest* string, overwriting the terminating null byte (\0) at
	 the end of dest, and then adds a terminating null byte
1. a function that concatenates two strings(similar to _strncat)
	- it will use at most n bytes from src; and
	- src does not need to be null-terminated if it contains n or more bytes
2. a function that copies a string (works like strncpy)
3. a function that compares two strings.
4. a function that reverses the content of an array of integers
5. a function that changes all lowercase letters of a string to uppercase.
6. a function that capitalizes all words of a string.
7. a function that encodes a string into 1337.
	- Letters a and A should be replaced by 4
	- Letters e and E should be replaced by 3
	- Letters o and O should be replaced by 0
	- Letters t and T should be replaced by 7
	- Letters l and L should be replaced by 1
8. a function that encodes a string using rot13
	- You can only use if statement once in your code
	- You can only use two loops in your code
	- You are not allowed to use switch
	- You are not allowed to use any ternary operation
9. a function that prints an integer.
	- You can only use _putchar function to print
	- You are not allowed to use long
	- You are not allowed to use arrays or pointers
	- You are not allowed to hard-code special values
10. Modification of https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c
	- Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
	- You are not allowed to use the variable a in your new line of code
	- You are not allowed to modify the variable p
	- You can only write one statement
	- You are not allowed to use ,
	- You are not allowed to code anything else than the line of expected line of code at the 
		expected line
	- Your code should be written at line 19, before the ;
	- Do not remove anything from the initial code (not even the comments)
	- and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	- You are allowed to use the standard library
11. a function that adds two numbers.
	- The function returns a pointer to the result
	- You can assume that you will always get positive numbers, or 0
	- You can assume that there will be only digits in the strings n1 and n2
	- n1 and n2 will never be empty
	- If the result can not be stored in r the function must return 0
12. a function that prints a buffer.
	- The function must print the content of size bytes of the buffer pointed by b
	- The output should print 10 bytes per line
	- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), 
		starting with 0
	- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated
		by a space
	- Each line shows the content of the buffer. If the byte is a printable character, print 
		the letter, if not, print .
	- Each line ends with a new line \n
	- If size is 0 or less, the output should be a new line only \n
	- You are allowed to use the standard library
