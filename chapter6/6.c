#include <stdio.h>
#include <string.h>

int main()
{
    char word[100] = { 0 };
    char ch1;
    int  i = 0;
    while ((ch1 = getchar()) != '#')
    {
        word[i] = ch1;
        i++;
    }
    int  length = strlen(word);
    char ch, pre;
    int  time = 0;
    for (int i = 1; i < length; i++)
    {
        pre = word[i - 1];
        ch = word[i];
        if (pre == 'e' && ch == 'i')
            time++;
    }
    printf("%d", time);
    return 0;
}