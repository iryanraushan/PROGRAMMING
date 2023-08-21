#include<stdio.h>
int i=6;
display(){
    i=5;
}
int main (){
    display();
    printf("%d\n",i);
    return 0;
}