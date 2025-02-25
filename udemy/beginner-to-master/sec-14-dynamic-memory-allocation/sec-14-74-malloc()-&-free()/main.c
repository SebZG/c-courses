/*

To use heap memory in our program, we need to know how to use the following four functions: malloc(), free(), calloc(), and realloc():

- void* malloc(size_t size)
    - Allocates a memory block from the heap and makes it addressable.
    - Takes in an argument, the size (in bytes) of the block to be allocated.
    - Returns a pointer to the beginning of that memory block if successful.
    - If it fails to allocate memory, it returns null.

- void free(void* ptr)
    - De-allocates a memory block previously allocated by either malloc(), calloc(), or realloc(), making it available to the free part of the heap again for other calls of the malloc() function to use.
    - Takes as an argument a ptr to the beginning of the data block that it needs to free.
    - Free does not change the value of the pointer fed into it for freeing. Therefore, if this pointer is used later, it may cause some unwanted behaviors.

- void* calloc(size_t num, size_t size)
    - Allocates a memory block for an array of num elements, each element is size bytes long.
    - All elements in the array are initialized to 0.
    - Returns a pointer to the beginning of that memory block if successful.
    - If it fails to allocate memory, it returns null.
    
- void* realloc(void* ptr, size_t size)
    - Changes the size of the memory block pointed to by ptr.
    - Returns a pointer to the beginning of the memory block if successful.
    - May move the block of memory to a different location.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr;
    int i;

    ptr = (char *)malloc(100);

    if (ptr == NULL)
    {
        printf("ERROR: Failed to allocate memory");
        return -1;
    }

    strcpy(ptr, "This is a dynamically allocated memory");

    printf("%s", ptr);

    // for (i = 0; i < 100; i++)
    // {
    //     printf("%c", ptr[i]);
    // }

    free(ptr);

    return 0;
}