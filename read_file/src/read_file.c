/*
** EPITECH PROJECT, 2024
** read_file.c
** File description:
** read file
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

#include "../includes/read_file.h"

size_t size_file(char *path)
{
    struct stat s;
    int verify = 0;

    verify = stat(path, &s);
    if (verify == -1)
        return 0;
    return s.st_size;
}

char *read_file(char *path)
{
    int verify = 0;
    int fd = open(path, O_RDONLY);
    char *buffer;
    size_t size = size_file(path);

    if (fd == -1 || size == 0)
        return path;
    buffer = malloc(sizeof(char) * (size + 1));
    verify = read(fd, buffer, size);
    if (verify == -1)
        return path;
    close(fd);
    return buffer;
}
