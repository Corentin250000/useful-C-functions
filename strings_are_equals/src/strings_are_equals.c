/*
** EPITECH PROJECT, 2024
** strings_are_equals.c
** File description:
** strings_are_equals
*/

#include "../includes/strings_are_equals.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

int strings_are_equals(char *s1, char *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
