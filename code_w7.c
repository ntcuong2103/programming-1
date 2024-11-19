#include <string.h>

int main()
{
    // declare a string
    char str[100] = "Hello, World!";
    // declare a pointer to the string
    char* ptr = str;
    // print the string
    printf("%s\n", ptr);

    // string length
    printf("Length of the string: %ld\n", strlen(ptr));

    // string copy
    char str2[14];
    strcpy(str2, ptr);

    // strncpy
    char str3[11] = ""; // empty string
    strncpy(str3, ptr, 9);

    // string concatenation
    char str4[100] = "Hello, ";
    strcat(str4, "World!");

    // string comparison
    char str5[100] = "Hello, World";
    printf("output of strcmp : %d\n", strcmp(ptr, str5));
    if (strcmp(ptr, str5) == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }

    







    return 0;
}