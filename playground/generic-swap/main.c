#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *vp1, void *vp2, size_t size);

int main()
{
    return 0;
}

void swap(void *vp1, void *vp2, size_t size)
{
    void *tmp = malloc(size);

    memcpy(tmp, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, tmp, size);

    free(tmp);
}