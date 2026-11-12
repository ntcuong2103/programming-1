#include <stdio.h>

int main() {
    int a;
    int b = 10;
    char name = '0';
    int c = 0;

    unsigned int d = 10;
    float e = -10.0;

    // convert
    char converted = (char)(int)(double)e; // Explicit conversion from float to int to char

    int hexa_number = 0xFFFFFFFF;

    // printf("size of char name: %d\n", sizeof(name));

    // printf("hexa_number: %X\n", name);

    float float_value = -10.5;
    int converted_number = float_value; // Implicit conversion from float to int
    int converted_number2 = (int)float_value; // Explicit conversion from float to int

    int value = 10;
    float out = (float) value / 3;
    float out2 = (float)(value / 3);

    // python
    // a = 10.0
    // int(a)

    printf("out: %.2f\n", out);
    printf("out2: %.2f\n", out2);



    

    // printf("float value: %.2f\n", float_value);
    // printf("converted number: %d\n", converted_number);






    return 0;
}