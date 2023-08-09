#include <stdio.h>
#include <ctype.h>

int main()
{
    int  num = 0;
    char ch;
    int  m;
    while ((ch = getchar()) != '#')
    {
        if (isalpha(ch))
        {
            m = ch;
            printf("%c %d ", ch, m);
            num++;
            if (num % 8 == 0)
                printf("\n");
        }
    }
    return 0;
}