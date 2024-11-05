# Push Swap

## Overview

The **Push Swap** project is part of the 42 curriculum and focuses on creating a sorting algorithm using stacks. The objective is to sort a list of numbers with a limited set of stack operations in the fewest possible moves.

## Features

- Custom sorting algorithm using two stacks (`a` and `b`).
- Predefined operations for stack manipulation, such as `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, and more.
- Optimized solution to minimize the number of operations needed to sort the stack.

## Requirements

- **Language**: C
- **Library**: `libft` may be used for standard functions.
- **Compilation**: Must compile with `gcc` and be free of memory leaks (tested with `valgrind` or similar tools).

## How to Compile

To compile the `push_swap` executable:

```sh
make
```

To run the executable:

´´´sh
./push_swap "(NUMBERS TO BE SORTED")
```
or
´´´sh
./push_swap "(NUMBERS TO BE SORTED") | wc -l 
```
