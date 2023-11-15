# Lab week 4
Objectives:
- Branching and looping (if else, switch, for, while)
- Debugging using visual studio code (break points, conditional break points, callstack)

## Problem 1: Factorial 
Find [Factorial](https://en.wikipedia.org/wiki/Factorial) of an integer N (N >= 0) 

Special case: 
$$factorial(0) = 1$$

### Exercise 1.1

Find factorial using recursive algorithm.
- Recursive function:

$$factorial(n) = n \times factorial(n-1)$$ 

- Stop condition
$$factorial(1) = 1 $$

- Debug: check the callstack for recursive algorithm, step into, step out of function.
### Exercise 1.2

Solve factorial using for loop.
- Loop with ascendent indexes.
- Loop with decendent indexes.

- Debug: debug with break point, set condition for break point. 

## Problem 2: Even and odd bits

https://leetcode.com/problems/number-of-even-and-odd-bits/

- Convert to binary (for loop, while, do-while)
- Count odd and even bits

## Problem 3: Build a sequential calculator

Given an array of string s which represents an expression, evaluate this expression (left to right regardless of the order of evaluation) and return its value. 

The integer division should truncate toward zero (floor function).
https://www.tutorialspoint.com/c_standard_library/c_function_floor.htm

Example 1:

> Input: `s = ["3", "+", "2", "*", "2"]`

> Output: `10`

Example 2:

> Input: `s = ["3", "/", "2"]`

> Output: `1`

Example 3:

> Input: s = `["3", "+", "5", "/",  "2"]`

> Output: `4`

- More challenging problem: evaluate the expression with the order of operators.
- Related problems

https://leetcode.com/problems/basic-calculator-ii/
https://leetcode.com/problems/clumsy-factorial/

## Further practicing

- Loop, branching
    - https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
    - https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
    - https://leetcode.com/problems/count-symmetric-integers/
    - https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/





