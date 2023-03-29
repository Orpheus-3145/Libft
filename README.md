# Structure
- include\           => header files
- objects\           => deposit for object files
- sources\
	- characters     => directory for checking the type of the char received (digit, alphabetical, printable, ...)
	- ft_printf      => implementation of the C function printf(), it handles the following placeholders: %c, %s, %p, %d ('+' and ' '), %i, %u, %x ('#'), %X ('#'), %%
	- get_next_line  => implementation of a function that, given a file descriptor, prints, repeteadly, the lines of the relative file
	- lst            => functions that manage basic operations on a linked list (see libft.h for definition of struct t_list)
	- memory         => some utility functions: implementation of calloc(), something useful to free the memory andexiting properly from a program, managing the memory directly
	- numbers        => managing numbers, convertions to int (dec/bin/hex) from string and vice versa, other random stuff for numbers
	- strings        => implementation both of std and custom function for managing strings (see include/*.h files for specific documentation)

# Execute
- the command `make` creates the file libft.a, that archive can be included in other applications
- other make commands: `re`, `clean`, `fclean`

# References
- 42 project: [Libft](https://cdn.intra.42.fr/pdf/pdf/73987/en.subject.pdf)
- By: Francesco Aru, francesco.aru25@gmail.com, intra42/slack nickname: @faru, Codam, Amsterdam
