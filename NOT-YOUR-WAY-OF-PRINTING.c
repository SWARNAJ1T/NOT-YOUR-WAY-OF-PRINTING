#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char s[69];
char n[69];
int i = 0;
char f;
char check(char a);
void delay(int sec)
{
    int ms = sec;
    clock_t st = clock();
    while (clock() < st + ms)
    {

    }
}
int main()
{
    printf("\nENTER A STRING\n");
    fgets(s, 69, stdin);
    printf("\nMAGIC WAY\n\n");
    int l = strlen(s);
    s[l - 1] = '\0';
    int j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        srand((time(NULL)));
        if (check(s[i]) == 's')
        {
            do
            {
                int p = rand() % 26;
                f = p + 97;
                printf("%s%c\r\n", n, f);
                delay(75);
            } while (f != s[i]);
            n[j++] = f;
        }
        else if (s[i] == ' ')
        {
            n[j++] = ' ';
        }
        else
        {
            do
            {
                int p = rand() % 26;
                f = p + 65;
                printf("%s%c\n", n, f);
                delay(75);
            } while (f != s[i]);
            n[j++] = f;
        }
    }
    delay(1000);
}
char check(char a)
{
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        return 's';
    }
    else
    {
        return 'c';
    }
}