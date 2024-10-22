#include <stdlib.h>
#include <stdio.h>

struct LinkedList {
    int data;
    struct LinkedList *next;
};

struct fraction {
    int numerator;
    int denominator;
};

int main()
{
    struct fraction f1;
    
    /* data */
    printf("f1: %p %p %p\n", &f1, &f1.numerator, &f1.denominator);

    struct fraction * f2 = malloc(sizeof(struct fraction));
    struct fraction * f3 = &f1;
    f2->numerator = 1;
    f2->denominator = 2;

    printf("f2: %p %p %p\n", f2, &f2->numerator, &f2->denominator);

    printf("f3: %p %p %p\n", f3, &f3->numerator, &f3->denominator);


    // struct LinkedList data4 = {4, NULL};
    // struct LinkedList data3 = {3, &data4};
    // struct LinkedList data2 = {2, &data3};
    // struct LinkedList data1 = {1, &data2};

    struct LinkedList data1 = {1, NULL};
    struct LinkedList data2 = {2, NULL};
    struct LinkedList data3 = {3, NULL};
    struct LinkedList data4 = {4, NULL};

    data1.next = &data2;
    data2.next = &data3;
    data3.next = &data4;

    
    return 0;

};

