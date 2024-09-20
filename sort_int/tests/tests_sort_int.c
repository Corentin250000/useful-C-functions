/*
** EPITECH PROJECT, 2024
** tests_my_sort_int_array.c
** File description:
** units tests
*/

#include "../includes/sort_int.h"
#include <stdlib.h>
#include <criterion/criterion.h>

Test(my_swap_int, basic_test)
{
    int a = 45;
    int b = 0;

    my_swap_int(&a, &b);
    cr_expect(a == 0);
    cr_expect(b == 45);
}

Test(verify_sort_array, basic_test)
{
    int test[6] = {-4, 0, 4, 5, 7};

    cr_assert(verify_sort_array(test, 5) == 1);
}

Test(verify_sort_array, basic_fail_test)
{
    int test[6] = {4, 0, -4, 5, 7};

    cr_assert(verify_sort_array(test, 5) == 0);
}

Test(verify_sort_array, wrong_size)
{
    int test[6] = {-4, 0, 4, 5, -5};

    cr_assert(verify_sort_array(test, 4) == 1);
}

Test(sort_int, basic_test)
{
    int test[6] = {4, 7, 0, -4, 5};

    sort_int(test, 5);
    cr_expect(test[0] == -4);
    cr_expect(test[1] == 0);
    cr_expect(test[2] == 4);
    cr_expect(test[3] == 5);
    cr_expect(test[4] == 7);
}

Test(sort_int, negative_size)
{
    int test[6] = {4, 7, 0, -4, 5};

    sort_int(test, -5);
    cr_expect(test[0] == 4);
    cr_expect(test[1] == 7);
    cr_expect(test[2] == 0);
    cr_expect(test[3] == -4);
    cr_expect(test[4] == 5);
}
