#include <stdio.h>

// Define the Rectangle struct that contains pointers
// to functions as member functions
typedef struct Rect
{
    int w, h;
    void (*set)(struct Rect *, int, int);
    int (*area)(struct Rect *);
    void (*show)(struct Rect *);
} Rect;

// Function to find the area
int area(Rect *r)
{
    return r->w * r->h;
}

// Function to print the dimensions
void show(Rect *r)
{
    printf("Rectangle's Width: %d, "
           "Height: %d\n",
           r->w,
           r->h);
}

// Function to set width
// and height (setter)
void set(Rect *r, int w, int h)
{
    r->w = w;
    r->h = h;
}

// Initializer/constructor
// for Rectangle
void constructRect(Rect *r)
{
    r->w = 0;
    r->h = 0;
    r->set = set;
    r->area = area;
    r->show = show;
}

int main()
{
    // Create a Rectangle object
    Rect r;
    constructRect(&r);

    // Use r as a Rectangle
    r.set(&r, 10, 5);
    r.show(&r);
    printf("Rectangle Area: %d", r.area(&r));

    return 0;
}
