#include "monty.h"

/**
 * is_number - checks if a string is a number
 * @str: string to evaluate
 *
 * Return: 1 if the string is a number, 0 otherwise
 */

int is_number(char *s)
{
    int i;

    if (s == NULL)
        return (0);

    for (i = 0; s[i]; i++)
    {
        if (s[i] == '-' && i == 0)
            continue;
        if (s[i] < '0' || s[i] > '9')
            return (0);
    }

    return (1);
}
