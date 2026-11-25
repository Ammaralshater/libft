LIBFT

*This project has been created as part of the 42 curriculum by aal-shat*

**Description** 

libft is a personal library that recreates a selection of standerd C library functions and added  multiple utility functions for strings ,memory, conversions and fd(file descriptor) output the idea of this project is to understand and recreate how C functions works internally while using pointers  , memory allocation , error handling and MAKEFILE , the sorces files are compiled into a static library libft.a which we can reuse it in 42 future projects.

**ft\_functions**

**{ charchter checks and conversions;** 

\* ft\_isdigit , ft\_isalpha ,ft\_isascii , ft\_isalnum, ft\_isprint, ft\_toupper,ft\_tolower 

**strings;** 

\* ft\_split , ft\_strchr , ft\_strdup , ft\_striteri ,ft\_strjoin , ft\_strlcat , ft\_strlcpy , ft\_strlen , ft\_strncmp , ft\_strnstr, ft\_strrchr, ft\_strtrim , ft\_substr 

**memeory ;**

\*ft\_memchr , ft\_memcmp , ft\_memcpy , ft\_memmove , ft\_memeset 

**fd output;**

\*ft\_putchar\_fd,ft\_putendl\_fd , ft\_putnbr\_fd , ft\_putstr\_fd 

**Linked list functions**

**\***ft\_lstnew, ft\_lstadd\_front , ft\_lstadd\_back\
\*ft\_lstsize, ft\_lstlast ft\_lstdelone ,ft\_lstclear

\*ft\_lstiter , ft\_lstmap

**}**

**Instructions**

compiling with **make**

command **make re** rebuilding the library 

**make clean**  remove the files that created -o files 

**make fclean**  remove teh files that created -o files and -a files

**Resources**

Linux manual page for the original C function

C reference documentation.

Github 

GNU make manual
