//5. Write a program to find out the size of int, float, double and char.
#include <stdio.h>
void display(void);
int main()
{
    display();
    return 0;
}
void display(void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of character: %zu byte\n", sizeof(char));
}
 // done......