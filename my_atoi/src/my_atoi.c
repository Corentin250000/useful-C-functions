/*
** EPITECH PROJECT, 2024
** my_atoi.c
** File description:
** my_atoi
*/

#include "../includes/my_atoi.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

int my_atoi(char const *str)
{
    int result = 0;
    int i = 0;
    int neg = 0;

    for (; i < my_strlen(str); i++) {
        if (str[i] == '-' && i == 0) {
            neg = 1;
            continue;
        }
        if (str[i] < '0' || str[i] > '9')
            break;
        else {
            result *= 10;
            result += str[i] - 48;
        }
    }
    result *= neg ? -1 : 1;
    return result;
}
