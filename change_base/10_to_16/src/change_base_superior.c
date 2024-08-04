/*
** EPITECH PROJECT, 2024
** change_base.c
** File description:
** change base
*/

#include <stdlib.h>

#include "../includes/change_base_superior.h"

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

static char character_to_put(int res_mod)
{
    char result = 0;

    if (res_mod >= 10)
        result = 65 + (res_mod - 10);
    else if (res_mod < 10)
        result = 48 + res_mod;
    return result;
}

char *base10_to_superior_base(unsigned long long nb, int base)
{
    char *result;
    int temp = nb;
    int res_mod = 0;
    int i = 0;

    result = malloc(sizeof(char) * (max_power(nb, base) + 1));
    for (i = max_power(nb, base) - 1; i >= 0; i--) {
        res_mod = temp % base;
        result[i] = character_to_put(res_mod);
        temp /= base;
    }
    result[max_power(nb, base)] = '\0';
    return result;
}

static int value_to_add(int base, char letter, int power_max)
{
    int result = 0;

    if (letter >= '0' && letter <= '9')
        result = (letter - 48) * power(base, power_max);
    else if (letter >= 'A' && letter <= 'F')
        result = (letter - 55) * power(base, power_max);
    return result;
}

unsigned long long return_to_base10(char *nb, int base)
{
    int size = my_strlen(nb);
    int power_max = size - 1;
    unsigned long long result = 0;

    for (int i = 0; i < size; i++) {
        result += value_to_add(base, nb[i], power_max);
        power_max--;
    }
    return result;
}
