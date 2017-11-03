#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

bool checkPalindrome(char *inputString)
{
    unsigned int size = strlen(inputString);

    for (unsigned int i = 0; i < size; i++)
        if (inputString[i] != inputString[size-- - 1])
            return false;

    return true;
}

bool checkPalindrome2(char *inputString)
{
    unsigned int size = strlen(inputString);

    char *answer = malloc(size);

    for (unsigned int i = 0; i < size; i++)
        answer[i] = inputString[size - i - 1];

    for (unsigned int i = 0; i < size; i++)
        if (inputString[i] != answer[i])
            return false;

    return true;
}

int main()
{
    char *str = "bbaba";
    printf("%s\r\n", str);

    printf("%d\r\n", checkPalindrome(str));
    printf("%d\r\n", checkPalindrome2(str));

    return 0;
}