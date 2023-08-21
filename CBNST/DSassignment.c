#include <stdio.h>
#include <string.h>
char STR[20], PAT[20], REP[20], FINAL[30];
int i, j, k, l, flag;
char * replacement(char *STR, char *PAT, char *REP)
{
    for (i = 0, k = 0; STR[i] != '\0'; i++)
    {
        flag = 1;
        for (j = 0; PAT[j] != '\0'; j++)
            if (STR[i + j] != PAT[j])
                flag = 0;
        l = j;
        if (flag)
        {
            for (j = 0; REP[j] != '\0'; j++, k++)
                FINAL[k] = REP[j];
            i += l - 1;
        }
        else
            FINAL[k++] = STR[i];
    }
    FINAL[k] = '\0';
    return FINAL;
}
void main()
{
    printf("Enter a String SAT:\n");
    scanf("%s", STR);
    printf("Enter pattern for replacement PAT:\n");
    scanf("%s", PAT);
    printf("Enter replace string REP:\n");
    scanf("%s", REP);
    printf("your final string is : %s", replacement(STR, PAT, REP));
}
