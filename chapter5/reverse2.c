#include <stdio.h>
#include <string.h>

int main()
{
    int  index = 0;
    char ch;
    char word[40];
    printf("please enter a word:");
    scanf("%c", &ch);
    while (ch = '\0')
    {
        word[index] = ch;
        index++;
        scanf("%c", &ch);
    }
    int size = strlen(word);
    int i;
    for (i = size; i >= 0; i--)
    {
        char ch1 = word[i];
        printf("%c", ch1);
    }
    return 0;
}