/*
** EPITECH PROJECT, 2024
** change_base_superior.h
** File description:
** Header file
*/

#ifndef CHANGE_BASE_SUPERIOR_H_
    #define CHANGE_BASE_SUPERIOR_H_

int my_strlen(char *str);
int power(int nb, int p);
int max_power(int nb, int base);
int value_to_add(int base, char letter, int power_max);
char character_to_put(int res_mod);
char *base10_to_superior_base(unsigned long long nb, int base);
/* Depuis une base supérieure */
unsigned long long return_to_base10(char *nb, int base);

#endif /* CHANGE_BASE_SUPERIOR_H_ */
