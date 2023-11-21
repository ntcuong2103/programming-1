#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tPoint
{
    int x;
    int y;
};

typedef struct tPoint Point;

void draw_bit(char** data, Point* points, int height, int width)
{

}

void draw_to_screen(char** data, int height, int width)
{
    for (int i = 0;i < height;i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (data[i][j])
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: read_ink <file_name>");
        return 0;
    }

    const char* filename = argv[1];

    FILE* f = fopen(filename, "r");

    char s[100];

    while (fgets(s, 100, f) != NULL)
    {
        printf("%s\n", s);
    }

    int width = 50;
    int height = 20;

    char** data = malloc(height * sizeof(char*));

    for (int i = 0; i < height; i++)
    {
        data[i] = malloc(width * sizeof(char));
        memset(data[i], 1, width);
    }

    draw_to_screen(data, height, width);
}