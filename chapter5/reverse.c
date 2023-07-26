#include <stdio.h>
#include <string.h>

int main()
{
    int  index = 0;
    char ch;
    char word[40];
    int  num;
    printf("The number of letters in the input word is:");
    scanf("%d", &num);
    printf("please enter a word:");
    for (index = 0; index < num; index++)
    {
        scanf("%c", &ch);
        word[index] = ch;
    }
    int size = strlen(word);
    int i;
    for (i = size; i > 0; i--)
    {
        printf("%c", word[i]);
    }
    return 0;
}