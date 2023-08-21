/* # what is function?
* piece of code to accomplish certain operation.

* it has name for identification.

* there r two types of function-- 
1. predefined function, 2. user defined function  */

/* # important point about function--

     *program must have at least one function.

     *if you have only one function, then it is necessary to make main function.

     *function name must be unique.

     *function is an operation, once defined can be used many times.

     *function consumes memory only when it is invoked and released from RAM 
     as soon as finishes its job.  */

#include <stdio.h>
#include <conio.h>
/* here block of add() is user defined function.bcs we made this.
  but some function like clrscr() is predefined function.*/
add1()
{
    int a, c, b;
    printf("give to numbers:\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum of a and b is %d.\n", c);
}
ifeven() // function definition.
{
    int num;
    printf("give a number:");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is a even number.\n", num);
    else
        printf("%d is a odd number.\n", num);
}

/*  technical terms__
   * function definition
   * function declaration (function prototype)
   * function call  */

/* program me chahe jitne function ho but execute main function se start hota h.
so you have to make a main() function it's neccessary. */

/* main function sare function ko call karta hai,but main function ko 
operating system call karta hai.*/

int main()
{
    ifeven(); // ifeven function call.
    add1();   // add function call.
    return 0;
}
// in a program there is no limit for make function.
// mtlb 1 program me aap jitna marzi chaho utna function bna sakte ho.

/*  benifits of function--
# modularization (splitting of computer task into several small subtaks.)
# Easy to read
# Easy to debug
# Easy to modify
# avoid rewriting of same code over and over
# better memory utilization  */

/*  # ways to define a function--
* takes nothing, return nothing
* takes something, return nothing
* takes nothing, return something
* takes something, return something  */

// takes nothing returns nothing.
void main()
{
    void add2(void);
    add2();
    getch();
}
void add2() // blanks parasynthesis means take nothing.
{
    int a, c, b;
    printf("give to numbers:\n"); // printf is also a function it is a predefined function.
    scanf("%d%d", &a, &b);        // both printf and scanf function is type of takes something
    c = a + b;
    printf("sum of a and b is %d.\n", c);
}

/* # koi function wo khud ke variable ko excess karta h, wo dusre function ke variable ko 
   excess nhi kar sakta hai. */

// takes something, return nothing.
void add(int, int); // global declaration.
void main()
{
    int x, y;
    void add(int, int); // local declaration.
    printf("enter two number:");
    scanf("%d%d", &x, &y);
    add(x, y); // actual arguments.
    getch();
}
void add(int a, int b) // formal arguments.
{
    int c;
    c = a + b;
    printf("sum of a and b is %d.\n", c);
}

// takes nothing, retun somrthing.
int add3(void);
main()
{
    int s;
    s = add3();
    printf("sum is %d.", s);
    getch();
}
int add3()
{
    int c, a, b;
    printf("enter two numbers");
    scanf("%d", &a, &b);
    c = a + b;
    return (c); // we can write in place of c is a+b.
                // printf("raushan"); // after return no any line will execute.
}

// takes something return something.

int add4(int, int);
main()
{
    int s, x, y;

    printf("enter two numbers");
    scanf("%d", &x, &y);
    s = add4(x, y);
    printf("sum is %d.", s);
    getch();
}
int add4(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}
       /*_____THE END____*/