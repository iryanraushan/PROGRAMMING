#include<stdio.h>
int main() {
float c,F;
    printf("what is your temperature in celcius: \n");
    
    scanf("%f",&c);
    F=1.8*c+32;
    
    printf("temperature in farenheight is :%f \n",1.8*c+32);
   
    return 0;
}