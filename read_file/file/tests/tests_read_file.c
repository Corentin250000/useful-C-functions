/*
** EPITECH PROJECT, 2024
** tests_read_file.c
** File description:
** units tests
*/

#include "../includes/read_file.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(size_file, no_errors)
{
    cr_assert(size_file("tests/test_file.txt") != -1);
}

Test(size_file, correct_size)
{
    cr_assert(size_file("tests/test_file.txt") == 13);
}

Test(read_file, correct_content)
{
    cr_assert_str_eq(read_file("tests/test_file.txt"), "Hello\nWorld!\n");
}

Test(read_file, incorrect_path)
{
    cr_assert_str_eq(read_file("tests/incorrect.txt"), "tests/incorrect.txt");
}

Test(read_file, empty)
{
    cr_assert_str_eq(read_file("tests/empty.txt"), "tests/empty.txt");
}
