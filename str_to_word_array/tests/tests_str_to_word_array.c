/*
** EPITECH PROJECT, 2024
** tests_str_to_word_array.c
** File description:
** units tests
*/

#include "../includes/str_to_word_array.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(is_authorized, authorized)
{
    cr_assert(is_authorized('G', "Grdf") == 1);
}

Test(is_authorized, not_authorized)
{
    cr_assert(is_authorized('G', "grdf") == 0);
}

Test(size_not_word, basic_test)
{
    char *str = "Hello !! -- World";

    cr_assert(size_not_word(str, 5, "HeloWrd") == 12);
}

Test(size_not_word, advanced_test)
{
    char *str = "HelloWorld";

    cr_assert(size_not_word(str, 5, "HeloWrd") == 5);
}

Test(nb_word, basic_test)
{
    char *str = "Hello !! -- World";

    cr_assert(nb_word(str, "HeloWrd") == 2);
}

Test(nb_word, advanced_test)
{
    char *str = "HelloWorld";

    cr_assert(nb_word(str, "HeloWrd") == 1);
}

Test(size_word, advanced_test)
{
    char *str = "Hello __ -- World!";

    cr_assert(size_word(str, 0, "HeloWrd!") == 5);
    cr_assert(size_word(str, 12, "HeloWrd!") == 6);
}

Test(size_word, basic_test)
{
    char *str = "HelloWorld";

    cr_assert(size_word(str, 0, "HeloWrd") == 10);
}

Test(my_str_to_word_array, basic_test)
{
    char *str = "Hello __ -- World!";
    char **array = my_str_to_word_array(str, "HeloqwvWrd!");

    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_neq(array[1], " __ -- ");
    cr_assert_str_eq(array[1], "World!");
}
