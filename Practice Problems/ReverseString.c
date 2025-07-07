// Reverse a given string
#include <stdio.h>
#include <string.h>
int main()
{

    char word[100]; // Use other efficient ways of allocated memmory to variable in future.
    int sizeWord = sizeof(word);
    // printf("%d", sizeWord);

    printf("Enter a String ");
    // scanf(" %s", word); // Does not take anything after encountering spaces. Use fgets(word, sizeof(word), stdin);
    fgets(word, sizeof(word), stdin);
    for (int i = 0; i <= strlen(word); i++)
    {
        if (word[i] == '\0')
        {
            for (int j = i; j >= 0; j--)
            {
                printf("%c", word[j]);
            }
        }
    }

    /* Understanding how Strings and Characters work.
        char a;
        char b[10];
        char c[10];
        printf("Enter value for A \n");
        scanf(" %c", &a); //%s for Char - One Character (Letter) - The Space before %c is to Ignore any spaces, tabs, or newlines before reading this character.

        printf("Enter value for B \n");
        scanf("%s", b); //%s for String - Does not accept anything after Spaces. &b is wrong. Arrays are already pointers

        printf("Enter value for C \n");
        scanf(" %[^\n]", c); // This is for accepting more than one words. Add Space before %. &c is wrong. Arrays are already pointers

        printf("A Value is: %c\n", a);

        printf("B Value is: %s\n", b);

        printf("B Value is: %s\n", c);

        // For Looping through a String:
        for (int i = 0; word[i] != '\0'; i++)
        {
            printf("%c", word[i]);
        }

    */
    return 0;
}