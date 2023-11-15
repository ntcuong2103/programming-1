# Lab week 9
Objectives:
- Function pointers
- Linux command line interface (CLI)
- Preprocessor
- Compiling, linking

## Useful linux CLI commands
`pwd` (Prints the working directory)

`cd path`  (Change working directory to `path`)

`ls` (Lists files and folders in current directory)

`unzip file_name.zip` (Unzip a .zip file)

`zip -r file_name.zip folder_name` (zip a folder into a file)


## Problem 1: Function pointers

### Exercise 1.1: Function pointer as a parameter
- Check out [sort.c](exercise_1/sort.c)
- Write bubble sort function (from lab week 5) (`bubble_sort_with_type`) using a compare function as a parameter .
- Comparison function is either of

`int greater(int a, int b)
`

`int less(int a, int b)
`
- If "greater" function is used, then the array is sorted by ascending order. If "less" function is used, then the array is sorted by descending order.


### Exercise 1.2: Function pointer as loading library
- Build a shared library from [sort_lib.c](exercise_1/sort_lib.c) which containing the bubble sort function.

`cd exercise_1`


- Compile with `-fPIC`

`gcc -c -fPIC sort_lib.c -o sort_lib.o`

- Build shared library

`gcc sort_lib.o -shared -o sort_lib.so`

- Compile and run the main program of [sort_import_function.c](sort_import_function.c) which load the library "sort_lib.so" and run bubble sort function.


## Problem 2: Working with multiple source files

### Exercise 2.1: Deal with redefinition
- For a function we have its declaration:

```
int less(int a, int b);
```

and its definition (or its implementation):

```
int less(int a, int b)
{
    return a < b ? 1 : 0; // ternary operator
}
```

- In the case of multiple source files, firstly, each would be compiled into an object file. Here, function definitions in the source files (.c) are compiled.

`gcc -c file_name.c -o file_name.o`

- Then, object files are linked to an executable file

`gcc file_name1.o file_name2.o file_name3.o -o output_executable_file`

- Redefinition error occurs when two identical functions are existed among those object files, how is it possible?

#### Redefinition error
Compile and build executable from folder exercise_2

`cd exercise_2`

- Compile source files

`gcc -c sort.c -o sort.o`

`gcc -c main.c -o main.o`

- Build executable file

`gcc sort.o main.o -o main`

- Got multiple definition errors
```
/usr/bin/ld: main.o: in function `greater':
main.c:(.text+0x0): multiple definition of `greater'; sort.o:sort.c:(.text+0x0): first defined here
/usr/bin/ld: main.o: in function `less':
main.c:(.text+0x1c): multiple definition of `less'; sort.o:sort.c:(.text+0x1c): first defined here
collect2: error: ld returned 1 exit status
```

Explanation
- [compare_func.h](exercise_2/compare_func.h) has both the declarations and definitions of its functions

- [sort.c](exercise_2/sort.c) includes the [compare_func.h](exercise_2/compare_func.h) via [sort.h](exercise_2/sort.h), therefore, also included its definitions of functions

- [main.c](exercise_2/main.c) includes the [compare_func.h](exercise_2/compare_func.h) via [sort.h](exercise_2/sort.h), therefore, also included its definitions of functions

How to solve the problem:
- Separate declaration and definition into file_name.h and file_name.c 
```
gcc -c compare_func.c -o compare_func.o
gcc -c sort.c -o sort.o 
gcc -c main.c -o main.o 
gcc compare_func.o sort.o main.o -o main
./main
```

### Exercise 2.2: Extern global variables (shared variable between source files)

- Similar to functions, global variables also have their declaration and definitions
- A global variable that could be shared among source file is declared by `extern`

```
extern int a;
extern int *p;
```

- Only one source file could have its implementation or initialization (otherwise redefinition error occurs)

```
int a = 5;
int *p = malloc(100 * sizeof(int))
```

#### Example

- In sort.h, uncomment the following line to enable debug mode

```
// #define DEBUG
```
- The global variable `swap_counter` is defined in sort.h

```
#ifdef DEBUG
extern int swap_counter;
#endif 
```
- The source file sort.c initialize and increase the variable for each call of swap function.

- The source file main.c access the variable and print it

```
#ifdef DEBUG
    printf("number of swap: %d\n", swap_counter); 
#endif 
```

