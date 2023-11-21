#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc < 2 || argc > 3)
    {
        printf("Usage: hello_loop_with_args <name> [num_of_loops]\n");
        return 1;
    }

    char name[100];
    int num_loops = 1;

    if (argc > 1)
    {
        strcpy(name, argv[1]);
    }

    if (argc == 3)
    {
        num_loops = atoi(argv[2]);
    }

    for (int i = 0; i < num_loops; i++)
    {
        printf("Hello %s !\n", name);
    }

    return 0;
}