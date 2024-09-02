/*
** EPITECH PROJECT, 2024
** tests_my_atoi.c
** File description:
** units tests
*/

#include "../includes/my_atoi.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlen, size_str_valid)
{
    char *test = "Hello";

    cr_assert(my_strlen(test) == 5);
}

Test(my_strlen, size_str_invalid)
{
    char *test = "Hello";

    cr_assert_neq(my_strlen(test) != 5, "OK");
}

Test(my_strlen, size_str_empty)
{
    cr_assert(my_strlen("") == 0);
}

Test(my_atoi, basic_test)
{
    cr_assert(my_atoi("1234") == 1234);
}

Test(my_atoi, basic_test_negative)
{
    cr_assert(my_atoi("-1234") == -1234);
}

Test(my_atoi, intermediate_test)
{
    cr_assert(my_atoi("12n34") == 12);
}

Test(my_atoi, intermediate_test_negative)
{
    cr_assert(my_atoi("-12n34") == -12);
}

Test(my_atoi, advanced_test)
{
    cr_assert(my_atoi("D1234") == 0);
}

Test(my_atoi, advanced_test_negative)
{
    cr_assert(my_atoi("-D1234") == 0);
}
