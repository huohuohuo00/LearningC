#include <stdio.h>
#include <string.h>

int main()
{
    int  index = 0;
    char ch;
    char word[40];
    printf("please enter a word:");
    scanf("%c", &ch);
    while (ch != '\n')
    {
        word[index] = ch;
        index++;
        scanf("%c", &ch);
    }
    word[index] = '\0';
    int size = strlen(word);
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        char ch1 = word[i];
        printf("%c", ch1);
    }
    return 0;
}