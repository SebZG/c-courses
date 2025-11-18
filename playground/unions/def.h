// #pragma once

#ifndef DEF_H
#define DEF_H

#include <stddef.h>

typedef enum SnekObjectKind snek_object_kind_t;
typedef union SnekObjectData snek_object_data_t;
typedef struct SnekObject snek_object_t;
typedef struct SnekArray snek_array_t;

enum SnekObjectKind
{
    INTEGER,
    STRING
};

union SnekObjectData
{
    int v_int;
    char *v_string;
    // char v_string[5];
};

struct SnekObject
{
    snek_object_kind_t kind;
    snek_object_data_t data;
};

struct SnekArray
{
    snek_object_t **data;
    // snek_object_t *data;
    size_t size;
    size_t capacity;
};

void format_object(snek_object_t *obj, char *buffer);
snek_object_t new_int(int n);
snek_object_t new_string(char *str);
snek_array_t new_snek_arr(size_t initial_capacity);
void push_snek_arr(snek_array_t *arr, snek_object_t obj);
void free_snek_arr(snek_array_t *arr);

#endif // DEF_H