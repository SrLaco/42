This project was created as part of the 42 curriculum by cade-mou.

# Libft

## Description

Libft is the first and only project of Milestone 0. It is a static library of useful functions from the original C library, reimplemented by us at 42 schools. Building this is a useful pedagogical tool as we end up learning a lot about how the C programming language actually works in its depths, as well as some of its peculiar signature characteristics: pointers, structs, and memory usage were some of the subjects learned through this challenge.

### Individual Function Descriptions

Libft is traditionally divided into 3 sections: 1 - mandatory, 2 - additional, and 3 - linked lists. I will describe them accordingly below:

### Part 1 - Libc Functions

#### ft_isalpha
Identifies a char passed as an argument and returns 1 (true) if the value is equal to an alphabetic value (values between 65 to 90 and 97 to 122 on the ASCII table).

#### ft_isdigit
Identifies a char passed as an argument and returns 1 (true) if the value is equal to a decimal value (values between 48 to 57 on the ASCII table).

#### ft_isalnum
Identifies a char passed as an argument and returns 1 (true) if the value is equal to an alphabetic or decimal value (values between 65 to 90, 97 to 122 and 48 to 57 on the ASCII table).

#### ft_isascii
Identifies a char passed as an argument and returns 1 (true) if the value is equal to any value in the ASCII table (printable or not).

#### ft_isprint
Identifies a char passed as an argument and returns 1 (true) if the value is equal to a printable value (values between 32 to 126 on the ASCII table, that can be literally represented on the terminal).

#### ft_strlen
Identifies the null character in the string passed as an argument and returns the number of characters between the beginning of the string and its end (6 if "banana" is the string received by the `ft_strlen` function).

#### ft_memset
Iterates through a number of addresses in memory, equal to the third parameter of the function, filling them with the value passed as the second parameter, beginning at the address received as the first argument.

#### ft_bzero
Iterates through a number of bytes starting at the address of the first parameter until the length provided by the second parameter is met, zeroing its bytes (replacing them with `'\0'`).

#### ft_memcpy
Copies the content of `n` bytes to the address received as the first parameter, from the address of a string in the second parameter. `n` being the third parameter that determines how many bytes will be copied.

#### ft_memmove
Copies the content of `n` bytes from the second parameter's address to the first parameter avoiding overlapping, by copying the data backwards if the memory address from the second appears before in memory.

#### ft_strlcpy
Copies the `n` characters from the content of a constant string to a different string, forcing the null character in the last byte of the destination string.

#### ft_strlcat
Tries to concatenate the second parameter constant string to the first, returning the total size of the intended string.

#### ft_toupper
Returns the equivalent uppercase character to the character received. If there's no equivalent, returns the character itself.

#### ft_tolower
Returns the equivalent lowercase character to the character received. If there's no equivalent, returns the character itself.

#### ft_strchr
Returns the address of the first occurrence of the char passed as the second parameter on the string passed as the first parameter.

#### ft_strncmp
Returns 0 if both strings passed as first and second arguments are equal until the `n`th char, `n` being the third argument. Otherwise, returns a positive or negative integer based on the difference of values between the arguments.

#### ft_memchr
Returns the address of the first occurrence of the char passed as the second parameter on the address passed as the first parameter, but only in the first `n` bytes, passed as the third parameter.

#### ft_memcmp
Returns 0 if both addresses passed as first and second arguments are equal until the `n`th position, `n` being the third argument. Otherwise, returns a positive or negative integer based on the difference of values between the arguments.

#### ft_strnstr
Returns the address of the first occurrence of the constant string passed as the second parameter on the constant string passed as the first parameter, but only in the first `n` bytes, passed as the third parameter.

#### ft_atoi
Receives a char representation of a number and returns its integer equivalent.

#### ft_calloc
Allocates and zeroes memory for `n` bytes, returning `NULL` in a failed allocation.

#### ft_strdup
Allocates memory and copies a constant string.

### Part 2 - Additional Functions

#### ft_substr
Allocates memory for and returns a string that is in between the chars of the first parameter string, starting at the second parameter's position and ending with the third parameter's length.

#### ft_strjoin
Concatenates the first parameter string to the second and returns the result.

#### ft_strtrim
Removes the characters passed in a string as the second argument from the beginning and the end of the string passed as the first argument, returning the "trimmed" string.

#### ft_split
Splits a string passed as the first parameter into `n` strings, `n` being the number of occurrences of the second parameter char. The new strings will be divided by this character, must be null-terminated, and returned as a bidimensional array.

#### ft_itoa
Receives an integer and returns its string equivalent.

#### ft_strmapi
Receives a string as its first parameter and applies a function passed as the second parameter to each of its characters, returning a new modified string.

#### ft_striteri
Receives a string as its first parameter and applies a function passed as the second parameter to each of its characters by address, returning the same array modified by the functions.

#### ft_putchar_fd
Prints the character passed as the first parameter into the file descriptor passed as the second parameter.

#### ft_putstr_fd
Prints the string passed as the first parameter into the file descriptor passed as the second parameter.

#### ft_putendl_fd
Prints the string passed as the first parameter followed by a newline into the file descriptor passed as the second parameter.

#### ft_putnbr_fd
Prints the integer number passed as the first parameter into the file descriptor passed as the second parameter.

### Part 3 - Linked Lists

#### ft_lstnew
Allocates memory for the content of a new node (or the first) in the linked list, and returns the address to the new node.

#### ft_lstadd_front
Allocates memory for the content of a new node (or the first) in the beginning of the linked list, and returns the address to the new node.

#### ft_lstsize
Measures the length of the list and returns the number of nodes.

#### ft_lstlast
Measures the length of the list and returns the address of the last node.

#### ft_lstdelone
Receives a node of the list and deletes only it.

#### ft_lstclear
Receives a node of the list and deletes every node that follows it recursively.

#### ft_lstiter
Iterates through the contents of each node of the list passed as the first parameter and applies the function set as the second parameter to the content of each node, modifying the list itself and returning the list's address.

#### ft_lstmap
Iterates through the contents of each node of the list passed as the first parameter and applies the function set as the second parameter to the content of each node, returning a new list with the modifications, or freeing the whole new list and returning null if allocation fails.

## Instructions

### Compilation

```sh
make        # compiles the sources and creates libft.a (ar rcs)
make clean  # removes the object archives
make fclean # removes the object archives and libft.a
make re     # removes the object archives and libft.a, compiles the sources and creates libft.a

```

The library compiles with `cc -Wall -Wextra -Werror` and generates `libft.a` on the root of the repository. The Makefile doesn't make unnecessary relinks.

### Usage on your own program

```c
#include "libft.h"

int main(void)
{
    char *joined;

    joined = ft_strjoin("Hello, ", "World!");
    ft_putendl_fd(joined, 1);
    free(joined);
    return (0);
}

```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o demo

```

## Resources

The manual on the Linux terminal, peer-to-peer exchange, and internet research were the main sources for each authorial line of my code. Other relevant sources include:

* [Norminette](https://github.com/42School/norminette)
* [W3Schools](https://www.w3schools.com/)
* [CS50's Playlist](https://www.youtube.com/playlist?list=PLhQjrBD2T383q7Vn8QnTsVgSvyLpsqL_R)

External testers were used to compile and for the treatment of errors and specific edge cases. Those testers were:

* [libft-war-machine](https://github.com/0x050f/libft-war-machine)
* [libft-god](https://github.com/pleb42/libft-god)

As well as my fellow colleagues' `main` functions.

### AI Usage

AI was used to debug code in `ft_strlcat`, `ft_memmove`, `ft_substr`, `ft_strtrim`, `ft_strjoin` and `ft_split`. Identifying edge cases that were not included in the function descriptions, which got detected by the testers but were hard to replicate.
And finally, to review typos and format this README.
