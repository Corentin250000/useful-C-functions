/*
** EPITECH PROJECT, 2024
** tests.c
** File description:
** units tests
*/

#include "../includes/change_base_superior.h"
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



Test(character_to_put, char0)
{
    cr_assert(character_to_put(0) == '0');
}

Test(character_to_put, char1)
{
    cr_assert(character_to_put(1) == '1');
}

Test(character_to_put, char2)
{
    cr_assert(character_to_put(2) == '2');
}

Test(character_to_put, char3)
{
    cr_assert(character_to_put(3) == '3');
}

Test(character_to_put, char4)
{
    cr_assert(character_to_put(4) == '4');
}

Test(character_to_put, char5)
{
    cr_assert(character_to_put(5) == '5');
}

Test(character_to_put, char6)
{
    cr_assert(character_to_put(6) == '6');
}

Test(character_to_put, char7)
{
    cr_assert(character_to_put(7) == '7');
}

Test(character_to_put, char8)
{
    cr_assert(character_to_put(8) == '8');
}

Test(character_to_put, char9)
{
    cr_assert(character_to_put(9) == '9');
}

Test(character_to_put, charA)
{
    cr_assert(character_to_put(10) == 'A');
}

Test(character_to_put, charB)
{
    cr_assert(character_to_put(11) == 'B');
}

Test(character_to_put, charC)
{
    cr_assert(character_to_put(12) == 'C');
}

Test(character_to_put, charD)
{
    cr_assert(character_to_put(13) == 'D');
}

Test(character_to_put, charE)
{
    cr_assert(character_to_put(14) == 'E');
}

Test(character_to_put, charF)
{
    cr_assert(character_to_put(15) == 'F');
}



Test(value_to_add, base2)
{
    cr_assert(value_to_add(2, '0', 5) == 0);
    cr_assert(value_to_add(2, '1', 5) == 32);
}

Test(value_to_add, base3)
{
    cr_assert(value_to_add(3, '0', 5) == 0);
    cr_assert(value_to_add(3, '1', 5) == 243);
    cr_assert(value_to_add(3, '2', 5) == 486);
}

Test(value_to_add, base4)
{
    cr_assert(value_to_add(4, '0', 5) == 0);
    cr_assert(value_to_add(4, '1', 5) == 1024);
    cr_assert(value_to_add(4, '2', 5) == 2048);
    cr_assert(value_to_add(4, '3', 5) == 3072);
}

Test(value_to_add, base5)
{
    cr_assert(value_to_add(5, '0', 5) == 0);
    cr_assert(value_to_add(5, '1', 5) == 3125);
    cr_assert(value_to_add(5, '2', 5) == 6250);
    cr_assert(value_to_add(5, '3', 5) == 9375);
    cr_assert(value_to_add(5, '4', 5) == 12500);
}

Test(value_to_add, base6)
{
    cr_assert(value_to_add(6, '0', 5) == 0);
    cr_assert(value_to_add(6, '1', 5) == 7776);
    cr_assert(value_to_add(6, '2', 5) == 15552);
    cr_assert(value_to_add(6, '3', 5) == 23328);
    cr_assert(value_to_add(6, '4', 5) == 31104);
    cr_assert(value_to_add(6, '5', 5) == 38880);
}

Test(value_to_add, base7)
{
    cr_assert(value_to_add(7, '0', 5) == 0);
    cr_assert(value_to_add(7, '1', 5) == 16807);
    cr_assert(value_to_add(7, '2', 5) == 33614);
    cr_assert(value_to_add(7, '3', 5) == 50421);
    cr_assert(value_to_add(7, '4', 5) == 67228);
    cr_assert(value_to_add(7, '5', 5) == 84035);
    cr_assert(value_to_add(7, '6', 5) == 100842);
}

Test(value_to_add, base8)
{
    cr_assert(value_to_add(8, '0', 5) == 0);
    cr_assert(value_to_add(8, '1', 5) == 32768);
    cr_assert(value_to_add(8, '2', 5) == 65536);
    cr_assert(value_to_add(8, '3', 5) == 98304);
    cr_assert(value_to_add(8, '4', 5) == 131072);
    cr_assert(value_to_add(8, '5', 5) == 163840);
    cr_assert(value_to_add(8, '6', 5) == 196608);
    cr_assert(value_to_add(8, '7', 5) == 229376);
}

Test(value_to_add, base9)
{
    cr_assert(value_to_add(9, '0', 5) == 0);
    cr_assert(value_to_add(9, '1', 5) == 59049);
    cr_assert(value_to_add(9, '2', 5) == 118098);
    cr_assert(value_to_add(9, '3', 5) == 177147);
    cr_assert(value_to_add(9, '4', 5) == 236196);
    cr_assert(value_to_add(9, '5', 5) == 295245);
    cr_assert(value_to_add(9, '6', 5) == 354294);
    cr_assert(value_to_add(9, '7', 5) == 413343);
    cr_assert(value_to_add(9, '8', 5) == 472392);
}

Test(value_to_add, base10)
{
    cr_assert(value_to_add(10, '0', 5) == 0);
    cr_assert(value_to_add(10, '1', 5) == 100000);
    cr_assert(value_to_add(10, '2', 5) == 200000);
    cr_assert(value_to_add(10, '3', 5) == 300000);
    cr_assert(value_to_add(10, '4', 5) == 400000);
    cr_assert(value_to_add(10, '5', 5) == 500000);
    cr_assert(value_to_add(10, '6', 5) == 600000);
    cr_assert(value_to_add(10, '7', 5) == 700000);
    cr_assert(value_to_add(10, '8', 5) == 800000);
    cr_assert(value_to_add(10, '9', 5) == 900000);
}

Test(value_to_add, base11)
{
    cr_assert(value_to_add(11, '0', 5) == 0);
    cr_assert(value_to_add(11, '1', 5) == 161051);
    cr_assert(value_to_add(11, '2', 5) == 322102);
    cr_assert(value_to_add(11, '3', 5) == 483153);
    cr_assert(value_to_add(11, '4', 5) == 644204);
    cr_assert(value_to_add(11, '5', 5) == 805255);
    cr_assert(value_to_add(11, '6', 5) == 966306);
    cr_assert(value_to_add(11, '7', 5) == 1127357);
    cr_assert(value_to_add(11, '8', 5) == 1288408);
    cr_assert(value_to_add(11, '9', 5) == 1449459);
    cr_assert(value_to_add(11, 'A', 5) == 1610510);
}

Test(value_to_add, base12)
{
    cr_assert(value_to_add(12, '0', 5) == 0);
    cr_assert(value_to_add(12, '1', 5) == 248832);
    cr_assert(value_to_add(12, '2', 5) == 497664);
    cr_assert(value_to_add(12, '3', 5) == 746496);
    cr_assert(value_to_add(12, '4', 5) == 995328);
    cr_assert(value_to_add(12, '5', 5) == 1244160);
    cr_assert(value_to_add(12, '6', 5) == 1492992);
    cr_assert(value_to_add(12, '7', 5) == 1741824);
    cr_assert(value_to_add(12, '8', 5) == 1990656);
    cr_assert(value_to_add(12, '9', 5) == 2239488);
    cr_assert(value_to_add(12, 'A', 5) == 2488320);
    cr_assert(value_to_add(12, 'B', 5) == 2737152);
}

Test(value_to_add, base13)
{
    cr_assert(value_to_add(13, '0', 5) == 0);
    cr_assert(value_to_add(13, '1', 5) == 371293);
    cr_assert(value_to_add(13, '2', 5) == 742586);
    cr_assert(value_to_add(13, '3', 5) == 1113879);
    cr_assert(value_to_add(13, '4', 5) == 1485172);
    cr_assert(value_to_add(13, '5', 5) == 1856465);
    cr_assert(value_to_add(13, '6', 5) == 2227758);
    cr_assert(value_to_add(13, '7', 5) == 2599051);
    cr_assert(value_to_add(13, '8', 5) == 2970344);
    cr_assert(value_to_add(13, '9', 5) == 3341637);
    cr_assert(value_to_add(13, 'A', 5) == 3712930);
    cr_assert(value_to_add(13, 'B', 5) == 4084223);
    cr_assert(value_to_add(13, 'C', 5) == 4455516);
}

Test(value_to_add, base14)
{
    cr_assert(value_to_add(14, '0', 5) == 0);
    cr_assert(value_to_add(14, '1', 5) == 537824);
    cr_assert(value_to_add(14, '2', 5) == 1075648);
    cr_assert(value_to_add(14, '3', 5) == 1613472);
    cr_assert(value_to_add(14, '4', 5) == 2151296);
    cr_assert(value_to_add(14, '5', 5) == 2689120);
    cr_assert(value_to_add(14, '6', 5) == 3226944);
    cr_assert(value_to_add(14, '7', 5) == 3764768);
    cr_assert(value_to_add(14, '8', 5) == 4302592);
    cr_assert(value_to_add(14, '9', 5) == 4840416);
    cr_assert(value_to_add(14, 'A', 5) == 5378240);
    cr_assert(value_to_add(14, 'B', 5) == 5916064);
    cr_assert(value_to_add(14, 'C', 5) == 6453888);
    cr_assert(value_to_add(14, 'D', 5) == 6991712);
}

Test(value_to_add, base15)
{
    cr_assert(value_to_add(15, '0', 5) == 0);
    cr_assert(value_to_add(15, '1', 5) == 759375);
    cr_assert(value_to_add(15, '2', 5) == 1518750);
    cr_assert(value_to_add(15, '3', 5) == 2278125);
    cr_assert(value_to_add(15, '4', 5) == 3037500);
    cr_assert(value_to_add(15, '5', 5) == 3796875);
    cr_assert(value_to_add(15, '6', 5) == 4556250);
    cr_assert(value_to_add(15, '7', 5) == 5315625);
    cr_assert(value_to_add(15, '8', 5) == 6075000);
    cr_assert(value_to_add(15, '9', 5) == 6834375);
    cr_assert(value_to_add(15, 'A', 5) == 7593750);
    cr_assert(value_to_add(15, 'B', 5) == 8353125);
    cr_assert(value_to_add(15, 'C', 5) == 9112500);
    cr_assert(value_to_add(15, 'D', 5) == 9871875);
    cr_assert(value_to_add(15, 'E', 5) == 10631250);
}

Test(value_to_add, base16)
{
    cr_assert(value_to_add(16, '0', 5) == 0);
    cr_assert(value_to_add(16, '1', 5) == 1048576);
    cr_assert(value_to_add(16, '2', 5) == 2097152);
    cr_assert(value_to_add(16, '3', 5) == 3145728);
    cr_assert(value_to_add(16, '4', 5) == 4194304);
    cr_assert(value_to_add(16, '5', 5) == 5242880);
    cr_assert(value_to_add(16, '6', 5) == 6291456);
    cr_assert(value_to_add(16, '7', 5) == 7340032);
    cr_assert(value_to_add(16, '8', 5) == 8388608);
    cr_assert(value_to_add(16, '9', 5) == 9437184);
    cr_assert(value_to_add(16, 'A', 5) == 10485760);
    cr_assert(value_to_add(16, 'B', 5) == 11534336);
    cr_assert(value_to_add(16, 'C', 5) == 12582912);
    cr_assert(value_to_add(16, 'D', 5) == 13631488);
    cr_assert(value_to_add(16, 'E', 5) == 14680064);
    cr_assert(value_to_add(16, 'F', 5) == 15728640);
}



Test(base10_to_superior_base, base10)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 10), "1368946");
}

Test(base10_to_superior_base, base11)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 11), "855567");
}

Test(base10_to_superior_base, base12)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 12), "56026A");
}

Test(base10_to_superior_base, base13)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 13), "38C137");
}

Test(base10_to_superior_base, base14)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 14), "278C5C");
}

Test(base10_to_superior_base, base15)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 15), "1C0931");
}

Test(base10_to_superior_base, base16)
{
    cr_assert_str_eq(base10_to_superior_base(1368946, 16), "14E372");
}



Test(return_to_base10, base10)
{
    cr_assert(return_to_base10("1368946", 10) == 1368946);
}

Test(return_to_base10, base11)
{
    cr_assert(return_to_base10("855567", 11) == 1368946);
}

Test(return_to_base10, base12)
{
    cr_assert(return_to_base10("56026A", 12) == 1368946);
}

Test(return_to_base10, base13)
{
    cr_assert(return_to_base10("38C137", 13) == 1368946);
}

Test(return_to_base10, base14)
{
    cr_assert(return_to_base10("278C5C", 14) == 1368946);
}

Test(return_to_base10, base15)
{
    cr_assert(return_to_base10("1C0931", 15) == 1368946);
}

Test(return_to_base10, base16)
{
    cr_assert(return_to_base10("14E372", 16) == 1368946);
}
