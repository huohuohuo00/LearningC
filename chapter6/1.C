#include <stdio.h>

int main()
{
    int  char_s = 0;
    int  char_e = 0;
    int  chars = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            char_s++;
        else if (ch == '\n')
            char_e++;
        chars++;
    }
    printf("%d space, %d enter, %d else characters", char_s, char_e, chars);
    return 0;
}