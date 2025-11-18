#include "def.h"

#include <stdio.h>
#include <stdlib.h> // For malloc/free

int main()
{
    // Allocate memory for a string (Buffer)
    char *buffer = (char *)malloc(256 * sizeof(char));

    snek_object_t num = new_int(33);
    format_object(&num, buffer);
    printf("%s\n", buffer);

    snek_object_t str = new_string("Michael Jackson");
    format_object(&str, buffer);
    printf("%s\n\n", buffer);


    // Create array of snek_object_t
    snek_object_t obj_arr[2];
    obj_arr[0] = new_int(33);
    obj_arr[1] = new_string("Michael Jackson");
    for (int i = 0; i < 2; i++)
    {
        format_object(&obj_arr[i], buffer);
        printf("Array[%d]: %s\n", i, buffer);
    }
    // Safely modify the string at obj_arr[1]
    if (obj_arr[1].kind == STRING)
    {
        free(obj_arr[1].data.v_string); // Free the old string
    }
    obj_arr[1] = new_string("James Brown"); // Assign new string
    // Print modified array
    printf("\nAfter modification:\n");
    for (int i = 0; i < 2; i++)
    {
        format_object(&obj_arr[i], buffer);
        printf("Array[%d]: %s\n", i, buffer);
    }
    printf("\n");


    // Allocate memory for a single snek_object_t
    snek_object_t *obj_malloc = (snek_object_t *)malloc(sizeof(snek_object_t));
    *obj_malloc = new_int(33);
    format_object(obj_malloc, buffer);
    printf("Dynamically allocated single object: %s\n\n", buffer);


    // Allocate memory for multiple snek_object_t
    int count = 2;
    snek_object_t *dynamic_arr = (snek_object_t *)malloc(count * sizeof(snek_object_t));
    // Initialize the array elements
    dynamic_arr[0] = new_int(33);
    dynamic_arr[1] = new_string("Michael Jackson");
    for (int i = 0; i < count; i++)
    {
        format_object(&dynamic_arr[i], buffer);
        printf("Dynamic array[%d]: %s\n", i, buffer);
    }
    printf("\n");


    // Create resizable snek_array_t
    snek_array_t resizable_arr = new_snek_arr(2);
    snek_object_t temp = new_int(33);
    push_snek_arr(&resizable_arr, new_int(33));
    // push_snek_arr(&resizable_arr, temp);
    temp = new_string("Michael Jackson");
    push_snek_arr(&resizable_arr, new_string("Michael Jackson"));
    // push_snek_arr(&resizable_arr, temp);
    for (size_t i = 0; i < resizable_arr.size; i++)
    {
        format_object(resizable_arr.data[i], buffer);
        printf("Resizable arr[%d]: %s\n", i, buffer);
    }
    printf("\n");

    free(buffer);
    free(obj_malloc);
    free(dynamic_arr);
    free_snek_arr(&resizable_arr);

    printf("Size of snek_object_t: %zu \n\n", sizeof(snek_object_t));

    return 0;
}