#include<stdio.h>
void rect(int l,int b)
{
    printf("area is %d \n",l*b);
    printf("perimeter is %d \n",2*(l+b));
}
int main ()
{
    rect(6,7);
    rect(7,8);
    return 0;
}