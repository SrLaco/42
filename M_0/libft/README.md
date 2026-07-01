# 42
This project has been created as part of the 42 curriculum by cade-mou.
A (in a near future) massive colection of hardcoded functions and aplications developed by me to become/as a Cadet at 42 São Paulo.

# Libft

## Description

Libft is the first and only project of the Milestone 0, it is a static library of useful functions from the original C library, reinplemented by us at 42 schools. Building this is a useful pedagogic tool as we end up learning a lot of how the programming language C actually works in its dephts, aswell as smome of his peculiar signature characteristics: pointers, structs and memory usage was some of the subjects learned through this challenge.

### Individual Function Descriptions

Libft is traditionally divided in 3 sections: 1 - mandatory, 2 - additoinal, and 3 - chained lists. I'll describe thgem accondingly bellow:

### Part 1 - Libc Functions

#### ft_isalpha
Identifies a char passed as argument and returns 1 (true) if the value is equal to an alphabetic value (values between 65 to 90 and 97 to 122 on the ASCII table).

#### ft_isdigit
Identifies a char passed as argument and returns 1 (true) if the value is equal to an decimal value (values between 48 to 57 on the ASCII table).

#### ft_isalnum
Identifies a char passed as argument and returns 1 (true) if the value is equal to an alphabetic or decimal value (values between 65 to 90, 97 to 122 and 48 to 57 on the ASCII table).

#### ft_isascii
Identifies a char passed as argument and returns 1 (true) if the value is equal to any value in the ASCII table (printable or not).

#### ft_isprint
Identifies a char passed as argument and returns 1 (true) if the value is equal to an printable value (values between 32 to 126 on the ASCII table, that can be literally represented on terminal).

#### ft_strlen
Identifies the null character in the string passed as argument and returns the number of characters between the beggining of the string and its end (6 if "banana" is the string received by the ft_strlen function).

#### ft_memset
Iterates through a number of adresses in the memory, equal to the third parameter of the function, filling them with the value passed as the second parameter, beggining in the address received as the first argument.

## Instruções

### Compilação

Resources:
 Internet research, peer-to-peer exchange and the manual on linux terminal were the main font for each authoral line of my code, other relevant sources include: 

https://github.com/42School/norminette
https://www.w3schools.com/
https://www.youtube.com/playlist?list=PLhQjrBD2T383q7Vn8QnTsVgSvyLpsqL_R

No AI was used in the making of this repository.
