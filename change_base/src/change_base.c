/*
** EPITECH PROJECT, 2024
** change_base_superior.c
** File description:
** change base superior
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

    if (nb < 0)
        nb *= -1;
    for (; power(base, result) <= nb; result++);
    return result;
}

char *base10_to_base(long long nb, int base)
{
    unsigned long long temp = nb < 0 ? nb * -1 : nb;
    int res_mod = 0;
    int negative = nb < 0 ? 1 : 0;
    int size = max_power(nb, base) + negative;
    char *result = malloc(sizeof(char) * (size + 1));

    if (negative)
        result[0] = '-';
    for (int i = size - 1; i >= 0; i--) {
        if (i == 0 && result[0] == '-')
            continue;
        res_mod = temp % base;
        result[i] = character_to_put(res_mod);
        temp /= base;
    }
    result[size] = '\0';
    return result;
}

long long return_to_base10(char *nb, int base)
{
    int size = my_strlen(nb);
    int power_max = size - 1;
    long long result = 0;
    int negative = 1;
    int i = 0;

    if (nb[i] == '-') {
        negative = -1;
        power_max--;
        i++;
    }
    for (; i < size; i++) {
        result += value_to_add(base, nb[i], power_max);
        power_max--;
    }
    return result * negative;
}
