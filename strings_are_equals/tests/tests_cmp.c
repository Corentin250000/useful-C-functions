/*
** EPITECH PROJECT, 2024
** tests_cmp.c
** File description:
** units tests
*/

#include "../includes/strings_are_equals.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlen, size_str_valid)
{
    char *test = "Hello";

    cr_assert(my_strlen(test) == 5);
}

Test(my_strlen, size_str_empty)
{
    cr_assert(my_strlen("") == 0);
}

Test(strings_are_equals, not_same_size)
{
    char *s1 = "test";
    char *s2 = "est";

    cr_assert(strings_are_equals(s1, s2) == 0);
}

Test(strings_are_equals, not_equal)
{
    char *s1 = "test";
    char *s2 = "Test";

    cr_assert(strings_are_equals(s1, s2) == 0);
}

Test(strings_are_equals, equal)
{
    char *s1 = "test";
    char *s2 = "test";

    cr_assert(strings_are_equals(s1, s2) == 1);
}
