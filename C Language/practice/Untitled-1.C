#include <stdio.h>
    int main()
    {
        void foo();
        void f()
        {
            foo();
        }
        f();
    }
    void foo()
    {
        printf("2 ");
    }