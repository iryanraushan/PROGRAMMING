#include <stdio.h>
#include <conio.h>
void low2up(char *);
void main()
{
    clrscr();
    char *ipstr;
    printf("\n Enter the string : ");
    gets(ipstr);
    low2up(ipstr); // call by reference
    puts(ipstr);
    getch();
}
void low2up(char *str)
{
    char *upper_str;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }
    upper_str[i] = '\0';
    printf("\n the string converted into upper case is :\n ");
    puts(upper_str);
}