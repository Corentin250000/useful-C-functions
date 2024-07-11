/*
** EPITECH PROJECT, 2024
** str_to_word_array.h
** File description:
** Header file
*/

#ifndef STR_TO_WORD_ARRAY_H_
    #define STR_TO_WORD_ARRAY_H_

int is_authorized(char c, char *authorized);
int size_not_word(char const *str, int index, char *authorized);
int nb_word(char const *str, char *authorized);
int size_word(char const *str, int index, char *authorized);
char **my_str_to_word_array(char const *str, char *authorized);

#endif /* STR_TO_WORD_ARRAY_H_ */
