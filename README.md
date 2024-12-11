# **Libft - My Own Library**

## **Overview**
Libft is a C library that I created to implement essential, general-purpose functions that will be used throughout your programming journey. This library contains a variety of standard functions related to memory manipulation, string handling, and linked list operations. The goal is to deepen your understanding of how these functions work internally and allow you to use them in future projects.

## **Table of Contents**
0. [Project Details](#project-details)
1. [General Information](#general-information)
2. [Mandatory Part](#mandatory-part)
3. [Bonus Part](#bonus-part)
4. [How to Use](#how-to-use)
5. [Makefile Rules](#makefile-rules)

---

## Project Details
- **Total Time Spent**: 18 days
- **Total Lines of Code**: 1736
- **Commits**: 111
- **Programming Language**: C

---

## **General Information**
- **Project Goal:** Create a library that includes useful functions for memory management, string handling, and linked list operations.
- **Requirements:** Follow the Norm for C coding standards, ensure no memory leaks, and properly manage heap-allocated memory.
- **Tools:** Use **malloc** and **free** for dynamic memory allocation and deallocation.

---

## **Mandatory Part**

### Mandatory Functions
- **`ft_atoi.c`**: Converts a string to an integer.
- **`ft_bzero.c`**: Sets the first `n` bytes of memory to zero.
- **`ft_calloc.c`**: Allocates memory for an array and initializes it to zero.
- **`ft_isalnum.c`**: Checks if a character is alphanumeric.
- **`ft_isalpha.c`**: Checks if a character is an alphabetic letter.
- **`ft_isascii.c`**: Checks if a character is an ASCII character.
- **`ft_isdigit.c`**: Checks if a character is a digit.
- **`ft_isprint.c`**: Checks if a character is printable.
- **`ft_memchr.c`**: Locates the first occurrence of a byte in memory.
- **`ft_memcmp.c`**: Compares two blocks of memory.
- **`ft_memcpy.c`**: Copies a block of memory from one location to another.
- **`ft_memmove.c`**: Moves a block of memory from one location to another.
- **`ft_memset.c`**: Fills a block of memory with a particular value.
- **`ft_putchar_fd.c`**: Outputs a character to a file descriptor.
- **`ft_putendl_fd.c`**: Outputs a string followed by a newline to a file descriptor.
- **`ft_putnbr_fd.c`**: Outputs an integer to a file descriptor.
- **`ft_putstr_fd.c`**: Outputs a string to a file descriptor.
- **`ft_split.c`**: Splits a string into an array of strings based on a delimiter.
- **`ft_strdup.c`**: Duplicates a string.
- **`ft_strchr.c`**: Finds the first occurrence of a character in a string.
- **`ft_striteri.c`**: Applies a function to each character of a string with its index.
- **`ft_strjoin.c`**: Concatenates two strings.
- **`ft_strlcat.c`**: Appends a string to another, ensuring not to exceed the buffer size.
- **`ft_strlcpy.c`**: Copies a string while ensuring the destination is null-terminated.
- **`ft_strlen.c`**: Computes the length of a string.
- **`ft_strmapi.c`**: Applies a function to each character of a string with its index and returns a new string.
- **`ft_strnstr.c`**: Locates a substring in a string with a specified length.
- **`ft_strncmp.c`**: Compares two strings up to a certain number of characters.
- **`ft_strrchr.c`**: Finds the last occurrence of a character in a string.
- **`ft_strtrim.c`**: Trims leading and trailing whitespace from a string.
- **`ft_substr.c`**: Extracts a substring from a string.
- **`ft_tolower.c`**: Converts a character to lowercase.
- **`ft_toupper.c`**: Converts a character to uppercase.

## **Bonus Part**

### Bonus Functions
- **`ft_lstadd_back_bonus.c`**: Adds a node at the end of the list (bonus).
- **`ft_lstadd_front_bonus.c`**: Adds a node at the beginning of the list (bonus).
- **`ft_lstclear_bonus.c`**: Clears a linked list (bonus).
- **`ft_lstdelone_bonus.c`**: Deletes one node in a list (bonus).
- **`ft_lstiter_bonus.c`**: Iterates through a list and applies a function to each node (bonus).
- **`ft_lstlast_bonus.c`**: Returns the last node of the list (bonus).
- **`ft_lstmap_bonus.c`**: Applies a function to the content of each node and creates a new list (bonus).
- **`ft_lstnew_bonus.c`**: Creates a new node (bonus).
- **`ft_lstsize_bonus.c`**: Counts the number of nodes in a list (bonus).

---

## **How to Use**

To use the functions in this library, you will need to:
1. Include the **libft.h** header file in your C files.
2. Link your project with the **libft** library when compiling.

### Example:

```c
#include "libft.h"

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("Length of string: %d\n", len);
    return 0;
}
```
## **Makefile Rules**

The Makefile automates compilation with the following rules:

- `make all`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Rebuilds everything from scratch.
- `make bonus`: Compiles bonus functions.