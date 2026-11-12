#include <stdio.h>


int main() {
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

    int a;
    char b[50];

    printf("Enter a string and a number: ");
    scanf("%s %d", b, &a); // read a string and an integer from user input

    printf("You entered: %s and %d\n", b, a); // print the entered string and number

    
    
    return 0;
}