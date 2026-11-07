*This project has been created as part of the 42 curriculum by cade-mou.*

# Ft Printf

## Description

`libftprintf.a` is a static library with one function only:

```c
int	ft_printf(const char *format, ...);
```

It mirrors `printf()` a slight part from libc: only nine conversions `c s p d i u x X %`. Reading the format string, prints each charachter and substitutes the variables marked by `%…` for the next var argument, returning how many bytes were written or `-1` when teh writting is interrupted..

## Instructions

### Main

```sh
cat > main.c << 'EOF'
#include "ft_printf.h"

int	main(void)
{
	ft_printf("%s has %d years\n", "42", 0x2a);
	printf("%s has %d years\n", "42", 0x2a);
	return (0);
}
EOF
```

### Compilation

```sh
make
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lftprintf && ./a.out
```

## Resources

The manual on the Linux terminal, peer-to-peer exchange, and internet research were the main sources for each authorial line of my code. Other relevant sources include:

* [Norminette](https://github.com/42School/norminette)
* [W3Schools](https://www.w3schools.com/)
* [CS50's Playlist](https://www.youtube.com/playlist?list=PLhQjrBD2T383q7Vn8QnTsVgSvyLpsqL_R)

The tester used to compile and for the treatment of errors and specific edge cases:

* [Tripouille printfTester](https://github.com/Tripouille/printfTester)

As well as my fellow colleagues' `main` functions.

### AI Usage

AI was used to identify edge cases outside the tester and for the comprehension of new concepts and manual pages that were unclear at first.
And finally, to review typos and format this README.
