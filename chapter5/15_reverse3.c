#include <stdio.h>
#include <string.h>

int main()
{
    int  index = 0;
    char ch;
    char word[255] = { 0 };
    printf("please enter some characters:");
    scanf("%c", &ch);
    while (ch != '\n')
    {
        word[index] = ch;
        index++;
        scanf("%c", &ch);
    }
    int size = strlen(word);
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        char ch1 = word[i];
        printf("%c", ch1);
    }
    return 0;
}