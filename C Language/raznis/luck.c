// luck aajma
#include <stdio.h>
#include <conio.h>
int main()
{
    int choise;
    printf("  \n ** __you can play this game only one time.__ **\n\n");
    printf("-----------this game is like truth and dare-----------\n\n");
    printf("  **--- you have to do according to your choise---**\n ");
    printf("--------so choose your option carefully--------\n\n");
    printf("     chhose one number between 1 to 9   \n\n");

    do
    {
        scanf("%d", &choise);
    } while (0);

    switch (choise)
    {
    case 1:
        printf("   What is the dumbest thing you have done to impress a crush? \n");
        break;
    case 2:
        printf("   Have you ever had a crush on a teacher? \n");
        break;
    case 3:
        printf("   Have you ever told a secret you promised to keep?\n");
        break;
    case 4:
        printf("   Post a long, nonsensical whatsapp status.\n");
        break;
    case 5:
        printf("   What is  your most bizarre nickname?\n");
        break;
    case 6:
        printf("  What is the cheapest gift you have ever gotten for someone else?\n");
        break;
    case 7:
        printf("   How often do you wash your underwear?\n");
        break;

    case 8:
        printf("   Kiss the person to your right\n");
        break;
    case 9:
        printf("   Put toilet paper on your body in a mummy-like fashion and use the picture on your social media.\n");
        break;

    default:
        break;
    }
    if (choise > 9)
    {
        printf("__ I told you that choose option between 1 to 9.__\n\n");
    }
    getch();
    return 0;
}