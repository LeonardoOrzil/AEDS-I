# C Fundamentals

Programming exercises for the Algorithms and Data Structures I course.

## Organization

```text
exercises/
├── 01-basics/                # Basic input, output, and arithmetic
├── 02-conditionals/          # if, else, and switch exercises
├── 03-loops/                 # for, while, and do-while exercises
├── 04-functions/             # User-defined function exercises
├── 05-arrays-and-strings/    # Arrays, matrices, and text data
├── 06-pointers/              # Pointer exercises
└── 07-file-handling/         # Reading from and writing to files
```

Additional study material and unclassified files are stored in `resources/`.
The original course source is no longer used to organize the exercises.

All programs are independent and contain their own `main` function. To check
the syntax of every C file:

```bash
for file in $(find exercises -type f -name '*.c'); do
    gcc -std=c11 -Wall -Wextra -fsyntax-only "$file" || exit 1
done
```