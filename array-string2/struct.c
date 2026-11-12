#include <stdio.h>

// define a struct to represent a point in 2D space
struct Point {
    int x; // x-coordinate
    int y; // y-coordinate

};

struct Image {
    int width; // width of the image
    int height; // height of the image
    char *data; // pointer to the image data
};



// create a typedef for the struct
typedef struct Point point; // create a typedef for the struct

float distance(point p1, point p2) {
    // calculate the distance between two points using the distance formula
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    // create an instance of the Point struct
    struct Point p1, p2;
    point p3; // create an instance of the Point struct using the typedef
    point p4; // create another instance of the Point struct using the typedef

    p1.x = 10; // set x-coordinate
    p1.y = 20; // set y-coordinate

    p2.x = 30; // set x-coordinate
    p2.y = 40; // set y-coordinate


    return 0;
}