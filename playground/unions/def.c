#include "def.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void format_object(snek_object_t *obj, char *buffer)
{
    switch (obj->kind)
    {
    case INTEGER:
        sprintf(buffer, "Int: %d", obj->data.v_int);
        break;
    case STRING:
        sprintf(buffer, "String: %s", obj->data.v_string);
        break;
    default:
        sprintf(buffer, "UNKNOWN TYPE");
    }
}

snek_object_t new_int(int n)
{
    return (snek_object_t){.kind = INTEGER, .data = {.v_int = n}};
}

snek_object_t new_string(char *str)
{
    return (snek_object_t){.kind = STRING, .data = {.v_string = str}};
}

// snek_object_t new_string(const char *str)
// {
//     snek_object_t obj = {.kind = STRING};
//     strncpy(obj.data.v_string, str, sizeof(obj.data.v_string) - 1);
//     obj.data.v_string[sizeof(obj.data.v_string) - 1] = '\0'; // Ensure null termination
//     return obj;
// }

snek_array_t new_snek_arr(size_t initial_capacity)
{
    snek_array_t arr = {.data = (snek_object_t **)malloc(initial_capacity * sizeof(snek_object_t *)),
                        .size = 0,
                        .capacity = initial_capacity};

    if (arr.data == NULL)
    {
        perror("Failed to allocate memory for array");
        exit(EXIT_FAILURE);
    }

    return arr;
}

// Key Differences:
// Memory Allocation:
// Single pointer: One allocation for the entire array
// Double pointer: One allocation for the array of pointers + one allocation per object
// Memory Access:
// Single pointer: Better cache locality (faster iteration)
// Double pointer: More indirection (slower access)
// Flexibility:
// Single pointer: Fixed-size objects
// Double pointer: Can store NULLs, allows object sharing, and handles variable-sized objects
// Memory Management:
// Single pointer: One free() call
// Double pointer: Need to free each object + the array

void push_snek_arr(snek_array_t *arr, snek_object_t obj)
{
    if (arr->size >= arr->capacity)
    {
        size_t new_capacity = arr->capacity * 2;
        snek_object_t **new_data = (snek_object_t **)realloc((void *)arr->data, new_capacity * sizeof(snek_object_t *));
        if (new_data == NULL)
        {
            perror("Failed to resize array");
            free((void *)arr->data);
            exit(EXIT_FAILURE);
        }
        arr->capacity = new_capacity;
        arr->data = new_data;
    }
    // arr->data[arr->size++] = obj;

    // Allocate memory for the new object
    snek_object_t *new_obj = (snek_object_t *)malloc(sizeof(snek_object_t));
    if (new_obj == NULL)
    {
        perror("Failed to allocate memory for object");
        exit(EXIT_FAILURE);
    }

    // Copy the object data
    *new_obj = obj;

    // Store the pointer in the array
    arr->data[arr->size++] = new_obj;
}

void free_snek_arr(snek_array_t *arr)
{
    // free(arr->data);
    // arr->data = NULL;
    // arr->size = arr->capacity = 0;

    if (arr->data)
    {
        // Free each object
        for (size_t i = 0; i < arr->size; i++)
        {
            free(arr->data[i]);
        }
        // Free the array of pointers
        free((void *)arr->data);
        arr->data = NULL;
    }
}
