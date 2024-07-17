/*
** EPITECH PROJECT, 2024
** read_stdin.c
** File description:
** read standard input
*/

#include <unistd.h>
#include <stdlib.h>

#include "../includes/read_stdin.h"

char *read_stdin(void)
{
    char *buffer = malloc(sizeof(char) * 32000);
    size_t size = 32000;
    int verify = 0;

    verify = read(0, buffer, size);
    if (verify == -1)
        return NULL;
    return buffer;
}
