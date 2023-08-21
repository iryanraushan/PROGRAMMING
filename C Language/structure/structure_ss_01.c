/*
# what is structure ?
    * structure is a way to group variables.
    * structure is a collection of dissimilar elements.
    * defining structure means creating new datatype.*/

struct date
{
    int d, m, y;
} d2, d3;       // 3.also a type for defining variable.
struct date d1; //2. called global variable for whole program.
main()
{
    struct date today = {21, 02, 2021}; //1. called local variable only for main ().
                                        // 1. initialization.

    {today.d = 21; // 2. second method to intializing variable.
    today.m = 02;
    today.y = 2021;
}}