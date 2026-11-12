#include <stdio.h>

void modify_var1(int var) {
    var = 10; 
}

void modify_var2(int *var) {
    *var = 10; 
}
// C++: calling with reference
// void modify_var3(int &var) {
//     var = 10; 
// }

int main() {
    // address of a pointer to a variable
    int a = 0;
    printf ("Address of a: %p\n", (void*)&a);
    int *ptr = &a;
    printf ("Address of pointer ptr: %p\n", (void*)&ptr);
    // pointer to a pointer
    int **ptr2 = &ptr;

    // ptr2 containing the address of ptr, which contains the address of a
    ptr = *ptr2; // dereference ptr2 to get the address of a
    *ptr = 20; // dereference ptr to modify the value of a

    
    printf("Before modify_var1: a = %d\n", a);
    modify_var1(a);
    printf("After modify_var1: a = %d\n", a);

    printf("Before modify_var2: a = %d\n", a);
    modify_var2(&a);
    printf("After modify_var2: a = %d\n", a);

    // char name[100];

    // scanf("%s", name); // read a string from user input

    // printf("Hello, %s!\n", name); // print the entered name


    // int a, b;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b); // read two integers from user input

    // int c = a + b; // calculate the sum of the two numbers
    // printf("a+b = %d\n", c); // print the sum of the two numbers


    // char str[100];
    // int num;

    // printf("Enter a string and a number: ");
    // scanf("%s %d", str, &num); // read a string and an integer from user input

    // printf("You entered: %s and %d\n", str, num); // print the entered string and number

    // char last_name[50], first_name[50]; // declare a character array to hold the name
    // printf("Enter your name: ");
    // scanf("%s %s", first_name, last_name); // read a string from user input
    // printf("Hello, %s %s!\n", first_name, last_name); // print the entered name

    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num); // read an integer from user input
    // printf("You entered: %d\n", num); // print the entered number

    // char str[100];
    // int num1, num2;
    // printf("Enter a string and a number: ");
    // scanf("%s %d %d", str, &num1, &num2); // read a string and an integer from user input
    // printf("You entered: %s and %d and %d\n", str, num1, num2); // print the entered string and number

    // int a;
    // char b[50];

    // printf("Enter a string and a number: ");
    // scanf("%s %d", b, &a); // read a string and an integer from user input

    // printf("You entered: %s and %d\n", b, a); // print the entered string and number

    
    
    return 0;
}