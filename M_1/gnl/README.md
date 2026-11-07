*This project has been created as part of the 42 curriculum by cade-mou.*

# Get Next Line

## Description

**Get Next Line** is the shortest of the 3 projects in Milestone 1. It is a function capable of reading, line by line, from a file descriptor. Building it is an interesting way to learn more about handling file descriptors and introduces the concept of static variables.

### Individual Function Descriptions

This project does not allow the use of `libft`, therefore some functions were reimplemented with the sole purpose of achieving the expected results:

* **`gnl_strlen`**: Gets the length of a constant string. 
* **`gnl_strchr`**: Returns a pointer to the first occurrence of a given character in a string, or `NULL` if the character is not found.
* **`gnl_cpy`**: Copies the source string to the destination string and returns the length of the string.
* **`gnl_substr`**: Copies a portion of the source string to a new substring, starting at a given point up to a specified length.
* **`gnl_strjoin_free`**: Concatenates and returns the current stash to the previous stash in a new memory space, then frees the previously allocated memory.
* **`gnl_read`**: Reads the file descriptor searching for a line break until `BUFFER_SIZE` is met, repeating until there is nothing left to be read.
* **`gnl_extract_line`**: Returns the substring from the stash, ending it at the line break. 
* **`gnl_trim_stash`**: Updates the stash, keeping only the remaining content after the last line break.
* **`get_next_line`**: Initializes the static variable `stash`, returns the extracted line when a line break is found, and keeps what is left of the file descriptor in the stash for subsequent runs.

## Instructions

There is no Makefile provided; the files must be compiled and run directly on the terminal.

```sh
cat > file.txt << 'EOF'
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...
EOF
```

```sh
cc -Wall -Wextra -Werror \
   get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42 && ./a.out | cat -e
```

### Main:

```c
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int     fd = open("file.txt", O_RDONLY);
    char    *line;
	int i = 0;
    
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("line %d: %s", i, line);
        free(line);
		i++;
    }
    close(fd);
    return (0);
}
```

## Resources

The manual on the Linux terminal, peer-to-peer exchange, and internet research were the main sources for each authorial line of my code. Other relevant sources include:

* [Norminette](https://github.com/42School/norminette)
* [W3Schools](https://www.w3schools.com/)
* [CS50's Playlist](https://www.youtube.com/playlist?list=PLhQjrBD2T383q7Vn8QnTsVgSvyLpsqL_R)

The tester used to compile and for the treatment of errors and specific edge cases:

* [Tripouille gnlTester](https://github.com/Tripouille/gnlTester)

As well as my fellow colleagues' `main` functions.

### AI Usage

AI was used to identify edge cases outside the tester and for the comprehension of new concepts and manual pages that were unclear at first.
And finally, to review typos and format this README.
