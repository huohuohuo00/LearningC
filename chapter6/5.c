#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[40] = { 0 };
    char ch2[80] = { 0 };
    char ch;
    int  i = 0;
    while ((ch = getchar()) != '#')
    {
        ch1[i] = ch;
        i++;
    }
    int length = strlen(ch1);
    int j, m;
    int trans = 0;
    for (j = 0, m = 0; j < length; j++)
    {
        char ch_1 = ch1[j];
        switch (ch_1)
        {
            case '.':
                ch2[m] = '!';
                m += 1;
                trans++;
                break;
            case '!':
                ch2[m] = '!';
                ch2[m + 1] = '!';
                m += 2;
                trans++;
                break;
            default:
                ch2[m] = ch_1;
                m += 1;
        }
    }
    printf("%d", trans);
    return 0;
}