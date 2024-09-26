/*
** EPITECH PROJECT, 2024
** read_file.h
** File description:
** Header file
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

#ifndef READ_FILE_H_
    #define READ_FILE_H_

size_t size_file(char *path);
char *read_file(char *path);

#endif /* READ_FILE_H_ */
