/*
** EPITECH PROJECT, 2024
** tests_base_inf.c
** File description:
** units tests
*/

#include "../includes/change_base_inferior.h"
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



Test(power, positive_power)
{
    cr_assert(power(5, 3) == 125);
}

Test(power, negative_power)
{
    cr_assert(power(5, -4) == 0);
}

Test(power, null_power)
{
    cr_assert(power(5, 0) == 1);
}



Test(max_power, basic_test)
{
    cr_assert(max_power(84, 2) == 7);
}

Test(max_power, intermediate_test)
{
    cr_assert(max_power(84, 5) == 3);
}

Test(max_power, avanced_test)
{
    cr_assert(max_power(84, 9) == 3);
}



Test(base10_to_inferior_base, base2)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 2), "1010100");
}

Test(base10_to_inferior_base, base3)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 3), "10010");
}

Test(base10_to_inferior_base, base4)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 4), "1110");
}

Test(base10_to_inferior_base, base5)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 5), "314");
}

Test(base10_to_inferior_base, base6)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 6), "220");
}

Test(base10_to_inferior_base, base7)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 7), "150");
}

Test(base10_to_inferior_base, base8)
{
    cr_assert_str_eq(base10_to_inferior_base(84, 8), "124");
}

Test(base10_to_inferior_base, base9)
{
    cr_assert(base10_to_inferior_base(4, 9), "103");
}

Test(base10_to_inferior_base, base10)
{
    cr_assert(base10_to_inferior_base(4, 10), "84");
}



Test(return_to_decimal, base2)
{
    cr_assert(return_to_decimal("1010100", 2) == 84);
}

Test(return_to_decimal, base3)
{
    cr_assert(return_to_decimal("10010", 3) == 84);
}

Test(return_to_decimal, base4)
{
    cr_assert(return_to_decimal("1110", 4) == 84);
}

Test(return_to_decimal, base5)
{
    cr_assert(return_to_decimal("314", 5) == 84);
}

Test(return_to_decimal, base6)
{
    cr_assert(return_to_decimal("220", 6) == 84);
}

Test(return_to_decimal, base7)
{
    cr_assert(return_to_decimal("150", 7) == 84);
}

Test(return_to_decimal, base8)
{
    cr_assert(return_to_decimal("124", 8) == 84);
}

Test(return_to_decimal, base9)
{
    cr_assert(return_to_decimal("103", 9) == 84);
}

Test(return_to_decimal, base10)
{
    cr_assert(return_to_decimal("84", 10) == 84);
}
