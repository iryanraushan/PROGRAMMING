//Write a C program to check whether a character is an alphabet, digit or special character
#include<stdio.h>
#include<conio.h>
 void main()  
{  
    char sing_ch;  

    printf("Input a character: ");  
    scanf('%c', &sing_ch);  

    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))  
    {  
        printf("This is an alphabet.\n");  
    }  
    else if(sing_ch>='0' && sing_ch<='9')  
    {  
        printf("This is a digit.\n");  
    }  
    else 
    {  
        printf("This is a special character.\n");  
    } 
 
}
