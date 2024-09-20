/*
** EPITECH PROJECT, 2024
** sort_int.c
** File description:
** sort int
*/

void my_swap_int(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int verify_sort_array(int *array, int size)
{
    for (int i = 1; i < size; i++) {
        if (array[i - 1] > array[i])
            return 0;
    }
    return 1;
}

void sort_int(int *array, int size)
{
    if (size <= 0)
        return;
    for (int i = 1; !verify_sort_array(array, size); i++) {
        if (i == size)
            i = 1;
        if (array[i - 1] > array[i])
            my_swap_int(&array[i - 1], &array[i]);
    }
}
