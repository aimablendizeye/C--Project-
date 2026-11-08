
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1024

/* Counts vowels, consonants, digits and special characters.
   Spaces and newlines are not counted as special characters.
   Uses pointer traversal only (no array indexing). */
void analyze(char *str, int *v, int *c, int *d, int *s)
{
    *v = *c = *d = *s = 0;

    while (*str != '\0')
    {
        char ch = (char)tolower((unsigned char)*str);

        if (isalpha((unsigned char)ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*v)++;
            else
                (*c)++;
        }
        else if (isdigit((unsigned char)ch))
        {
            (*d)++;
        }
        else if (!isspace((unsigned char)ch))
        {
            (*s)++;
        }
        str++;
    }
}


void reverse(char *str)
{
    char *start = str;
    char *end = str;
    char tmp;

    if (*str == '\0')
        return;

    while (*(end + 1) != '\0')
        end++;

    while (start < end)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}


int isPalindrome(char *str)
{
    char *left = str;
    char *right = str;

    if (*str == '\0')
        return 1;

    while (*(right + 1) != '\0')
        right++;

    while (left < right)
    {
        while (left < right && isspace((unsigned char)*left))
            left++;
        while (left < right && isspace((unsigned char)*right))
            right--;

        if (left >= right)
            break;

        if (tolower((unsigned char)*left) != tolower((unsigned char)*right))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main(void)
{
    char input[MAX_LEN];
    char reversed[MAX_LEN];
    int vowels, consonants, digits, specials;
    char *nl;

    printf("Enter a sentence: ");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("No input received.\n");
        return 1;
    }

   
    nl = strchr(input, '\n');
    if (nl != NULL)
        *nl = '\0';

    analyze(input, &vowels, &consonants, &digits, &specials);
    printf("\nVowels             : %d\n", vowels);
    printf("Consonants         : %d\n", consonants);
    printf("Digits             : %d\n", digits);
    printf("Special characters : %d\n", specials);

    
    strcpy(reversed, input);
    reverse(reversed);
    printf("\nOriginal : %s\n", input);
    printf("Reversed : %s\n", reversed);

    if (isPalindrome(input))
        printf("\nThe string IS a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");

    return 0;
}