/*
** EPITECH PROJECT, 2024
** change_base_inferior.h
** File description:
** Header file
*/

#ifndef CHANGE_BASE_INFERIOR_H_
    #define CHANGE_BASE_INFERIOR_H_

int my_strlen(char *str);
int power(int nb, int p);
int max_power(int nb, int base);
char *base10_to_inferior_base(unsigned long long nb, int base);
/* Depuis une base inférieure */
unsigned long long return_to_decimal(char *nb, int base);

#endif /* CHANGE_BASE_INFERIOR_H_ */
