/*
** EPITECH PROJECT, 2024
** tests_int_to_char.c
** File description:
** units tests
*/

#include "../includes/int_to_char.h"
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



Test(my_strdup, str_equals)
{
    cr_assert_str_eq(my_strdup("Hello World!"), "Hello World!");
}

Test(my_strdup, good_length)
{
    cr_assert(my_strlen(my_strdup("Hello World!")) == 12);
}



Test(int_to_char, one_number)
{
    cr_assert_str_eq(int_to_char(5), "0000000005");
}

Test(int_to_char, two_numbers)
{
    cr_assert_str_eq(int_to_char(75), "0000000075");
}

Test(int_to_char, three_numbers)
{
    cr_assert_str_eq(int_to_char(275), "0000000275");
}

Test(int_to_char, four_numbers)
{
    cr_assert_str_eq(int_to_char(2075), "0000002075");
}

Test(int_to_char, five_numbers)
{
    cr_assert_str_eq(int_to_char(45675), "0000045675");
}

Test(int_to_char, six_numbers)
{
    cr_assert_str_eq(int_to_char(600000), "0000600000");
}

Test(int_to_char, seven_numbers)
{
    cr_assert_str_eq(int_to_char(1690080), "0001690080");
}

Test(int_to_char, eight_numbers)
{
    cr_assert_str_eq(int_to_char(71045675), "0071045675");
}

Test(int_to_char, nine_numbers)
{
    cr_assert_str_eq(int_to_char(120045675), "0120045675");
}

Test(int_to_char, all_numbers)
{
    cr_assert_str_eq(int_to_char(1895145675), "1895145675");
}



Test(remove_zeros, zero)
{
    cr_assert_str_eq(remove_zeros("0000000000"), "");
}

Test(remove_zeros, one_number)
{
    cr_assert_str_eq(remove_zeros("0000000005"), "5");
}

Test(remove_zeros, two_numbers)
{
    cr_assert_str_eq(remove_zeros("0000000075"), "75");
}

Test(remove_zeros, three_numbers)
{
    cr_assert_str_eq(remove_zeros("0000000275"), "275");
}

Test(remove_zeros, four_numbers)
{
    cr_assert_str_eq(remove_zeros("0000002075"), "2075");
}

Test(remove_zeros, five_numbers)
{
    cr_assert_str_eq(remove_zeros("0000045675"), "45675");
}

Test(remove_zeros, six_numbers)
{
    cr_assert_str_eq(remove_zeros("0000600000"), "600000");
}

Test(remove_zeros, seven_numbers)
{
    cr_assert_str_eq(remove_zeros("0001690080"), "1690080");
}

Test(remove_zeros, eight_numbers)
{
    cr_assert_str_eq(remove_zeros("0071045675"), "71045675");
}

Test(remove_zeros, nine_numbers)
{
    cr_assert_str_eq(remove_zeros("0120045675"), "120045675");
}

Test(remove_zeros, all_numbers)
{
    cr_assert_str_eq(remove_zeros("1895145675"), "1895145675");
}
