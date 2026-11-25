<div align="center">

# LIBFT

*Building the foundations of C programming from scratch.*

![Language](https://img.shields.io/badge/Language-C-555FA5?style=for-the-badge&logo=c)
![School](https://img.shields.io/badge/School-42_Nice-222222?style=for-the-badge)
![Project](https://img.shields.io/badge/Project-Libft-2877B5?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-298C50?style=for-the-badge)

</div>

> This project has been created as part of the 42 curriculum by aal-shat.

## 📖 About the project

Libft is a custom C library developed as part of the 42 Common Core curriculum. It recreates a selection of standard C library functions and introduces additional utilities for string manipulation, memory management, file descriptor output and linked lists.

The objective is to understand how fundamental C functions work internally and build a reusable static library for future projects.

| Functions | Language | Linked-list functions | Output |
| :---: | :---: | :---: | :---: |
| 43 | C | 9 | `libft.a` |

## 🧠 Concepts explored

- Pointers and pointer arithmetic
- Dynamic memory allocation
- String and memory manipulation
- Singly linked lists
- Function pointers
- File descriptors
- Static libraries and Makefiles
- Edge cases and error handling

## 📚 Implemented functions

<details>
<summary><b>Character classification & conversion (7)</b></summary>

- [`ft_isalpha`](ft_isalpha.c)
- [`ft_isdigit`](ft_isdigit.c)
- [`ft_isalnum`](ft_isalnum.c)
- [`ft_isascii`](ft_isascii.c)
- [`ft_isprint`](ft_isprint.c)
- [`ft_toupper`](ft_toupper.c)
- [`ft_tolower`](ft_tolower.c)

</details>

<details>
<summary><b>String manipulation (14)</b></summary>

- [`ft_strlen`](ft_strlen.c)
- [`ft_strchr`](ft_strchr.c)
- [`ft_strrchr`](ft_strrchr.c)
- [`ft_strncmp`](ft_strncmp.c)
- [`ft_strlcpy`](ft_strlcpy.c)
- [`ft_strlcat`](ft_strlcat.c)
- [`ft_strnstr`](ft_strnstr.c)
- [`ft_strdup`](ft_strdup.c)
- [`ft_substr`](ft_substr.c)
- [`ft_strjoin`](ft_strjoin.c)
- [`ft_strtrim`](ft_strtrim.c)
- [`ft_split`](ft_split.c)
- [`ft_strmapi`](ft_strmapi.c)
- [`ft_striteri`](ft_striteri.c)

</details>

<details>
<summary><b>Memory management (7)</b></summary>

- [`ft_memset`](ft_memset.c)
- [`ft_bzero`](ft_bzero.c)
- [`ft_memcpy`](ft_memcpy.c)
- [`ft_memmove`](ft_memmove.c)
- [`ft_memchr`](ft_memchr.c)
- [`ft_memcmp`](ft_memcmp.c)
- [`ft_calloc`](ft_calloc.c)

</details>

<details>
<summary><b>Number conversion (2)</b></summary>

- [`ft_atoi`](ft_atoi.c)
- [`ft_itoa`](ft_itoa.c)

</details>

<details>
<summary><b>File descriptor output (4)</b></summary>

- [`ft_putchar_fd`](ft_putchar_fd.c)
- [`ft_putstr_fd`](ft_putstr_fd.c)
- [`ft_putendl_fd`](ft_putendl_fd.c)
- [`ft_putnbr_fd`](ft_putnbr_fd.c)

</details>

<details>
<summary><b>Linked lists (9)</b></summary>

- [`ft_lstnew`](ft_lstnew.c)
- [`ft_lstadd_front`](ft_lstadd_front.c)
- [`ft_lstadd_back`](ft_lstadd_back.c)
- [`ft_lstsize`](ft_lstsize.c)
- [`ft_lstlast`](ft_lstlast.c)
- [`ft_lstdelone`](ft_lstdelone.c)
- [`ft_lstclear`](ft_lstclear.c)
- [`ft_lstiter`](ft_lstiter.c)
- [`ft_lstmap`](ft_lstmap.c)

</details>

## ⚙️ Compilation

Requirements: a C compiler and GNU Make.

```bash
make
```

This builds the static library `libft.a`.

| Command | Description |
|---|---|
| `make` | Build the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | Rebuild the library from scratch |

## 🚀 Usage

Include `libft.h` in your C program and link against the compiled static library.

For a program named `main.c` in the same directory:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
./program
```

## 📂 Project structure

```text
libft/
├── ft_*.c       # Function implementations
├── libft.h      # Header file
├── Makefile     # Build automation
├── .gitignore   # Git exclusion rules
└── README.md    # Project documentation
```

## 💡 What I learned

This project strengthened my understanding of low-level programming, memory manipulation, pointer arithmetic and reusable software components.

It also introduced the importance of testing edge cases, managing allocated memory correctly and organizing source code into a reusable library.

## 🔗 Resources

- [Linux manual pages](https://man7.org/linux/man-pages/)
- [C reference documentation](https://en.cppreference.com/w/c.html)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)

## 👨‍💻 Author

**Ammar Al Shater — aal-shat**

Software Engineering Student @ 42 Nice

[GitHub](https://github.com/Ammaralshater) · [LinkedIn](https://www.linkedin.com/in/ammar-al-shater-973161b4/)

---

<div align="center">
<sub>Building. Learning. Improving.</sub>
</div>
