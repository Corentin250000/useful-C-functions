/*
** EPITECH PROJECT, 2024
** change_base.c
** File description:
** change base
*/

#include <stdlib.h>

#include "../includes/change_base.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

int power(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (int i = 0; i < p; i++)
        result *= nb;
    return result;
}

int max_power(int nb, int base)
{
    int result = 0;

    for (; power(base, result) <= nb; result++);
    return result;
}

char *base10_to_inferior_base(unsigned long long nb, int base)
{
    char *result;
    int temp = nb;
    int res_mod = 0;
    int i = 0;

    result = malloc(sizeof(char) * (max_power(nb, base) + 1));
    for (i = max_power(nb, base) - 1; i >= 0; i--) {
        res_mod = temp % base;
        result[i] = 48 + res_mod;
        temp /= base;
    }
    result[max_power(nb, base)] = '\0';
    return result;
}

unsigned long long return_to_base10(char *nb, int base)
{
    int size = my_strlen(nb);
    int power_max = size - 1;
    unsigned long long result = 0;

    for (int i = 0; i < size; i++) {
        result += (nb[i] - 48) * power(base, power_max);
        power_max--;
    }
    return result;
}
