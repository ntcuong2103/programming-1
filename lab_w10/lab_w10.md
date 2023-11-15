# Lab week 10
Objectives:
- Input/output (using `stdio.h` library)
- Run/debug program with input arguments
- Input/output to files

## Useful linux CLI commands
`pwd` (Prints the working directory)

`cd path`  (Change working directory to `path`)

`ls` (Lists files and folders in current directory)

`unzip file_name.zip` (Unzip a .zip file)

`zip -r file_name.zip folder_name` (zip a folder into a file)

## Standard input and output
- `printf`, `scanf`, `sprintf`, `sscanf`
- Reference material: Section 7.1, The C programming language textbook.

### Exercise 1: 

- Check out [datetime.c](datetime.c)

- Print the following content to the screen

```
Current time is: hh:mm:ss
Today is: Wed, dd/mm/yyyy
```

- Implement the following two functions using `sprintf`

```
void sprint_time(char* outstr, struct tm* info);
```
where `sprint_time` will write the time as "hh:mm:ss" into outstr, outstr must be allocated before calling `sprint_time`.


```
void sprint_date(char* outstr, struct tm* info)

```
where `sprint_date` will write the date as "dd/mm/yyyy" into outstr, outstr must be allocated before calling `sprint_date`.

### Exercise 2
- Check out [datetime_input.c](datetime_input.c)
- Run program and input date

- Write `scanf` for the input format of time "hh:mm:ss" and print the input as that format.

## Run/debug program with input arguments (parameters)

### Exercise 3: 

- Check out [hello_loop_with_args.c](hello_loop_with_args.c)

- The main function now has parameters

```
int main(int argc, char* argv[])
```

- Build program

```
gcc hello_loop_with_args.c -o hello_loop_with_args
```

- Run with input arguments

```
./hello_loop_with_args Your_name 3
```

- Here, "Your_name" and "3" are the two input arguments passed to the main function. 

`int argc` : arguments count -> the number of arguments passed to the main function.

`char* argv[]` : the array of arguments (char* or string) passed to the main function. The arguments are separate by blank space input (" ").

- For this example
```
./hello_loop_with_args Your_name 3
```
There are 3 arguments including the executable file name "./hello_loop_with_args",  "Your_name" and "3". Therefore,
```
argc = 3
argv[0] = "./hello_loop_with_args"
argv[1] = "Your_name"
argv[2] = "3"
```

- Debug with input arguments

In `.vscode/launch.json`, we can set the input arguments by adding values to the `"args": []`, for example to run debugger with the two input arguments:
```
./hello_loop_with_args Your_name 3
```
we can set `"args": ["Your_name", "3"]`

## Input/output to files

- `fopen`, `fprintf`, `fscanf`
- Reference material: section 7.5, The C programming language textbook

### Exercise 4
- Check out [read_ink.c](read_ink.c)
- Write a program to read [18_em_1.txt](18_em_1.txt), which is an ink file containing the series of coordinate points, then draw the ink (points) to screen.

- The file content is as follows:
```
[\sqrt 4 8]
2	0	119
0	6	122
0	14	128
...
0	449	-6
0	436	0
4	433	0
2	210	37
0	201	55
...
0	182	164
0	231	157
0	247	157
4	278	160
```

where the first line:
```
[\sqrt 4 8]
```
is the annotation of the ink file

the remaining has this format
```
attr	X	Y
```
where `attr = 2` indicate the start point, `attr = 4` indicate the end point, and `attr = 0` indicate the trajectory points.
