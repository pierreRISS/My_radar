/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** search_info.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib/my/libmy.h"


static int file_size(FILE *fd)
{
    int count = 0;
    char c;

    while (fread(&c, sizeof(char), 1, fd)){
        count++;
    }
    return count;
}

static char *read_content(FILE *fd, int file_size)
{
    char *file_content = malloc(file_size + 1);

    fread(file_content, 1, file_size, fd);
    file_content[file_size] = '\0';
    fclose(fd);
    return file_content;
}

char *read_file(char *path)
{
    FILE *fd;
    int size_file;

    fd = fopen(path, "r");
    if (fd == NULL){
        return NULL;
    }
    size_file = file_size(fd);
    fclose(fd);
    fd = fopen(path, "r");
    return read_content(fd, size_file);
}
