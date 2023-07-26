#include <stdio.h>
#define SIZE 26

int main()
{
    char letters[SIZE];
    char letter;
    int  index;
    for (index = 0, letter = 'a'; index < SIZE; index++, letter += 1)
    {
        letters[index] = letter;
        printf("%c", letters[index]);
    }
    return 0;
}