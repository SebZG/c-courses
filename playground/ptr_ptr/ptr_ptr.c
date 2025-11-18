#include <stdio.h>




int main()
{


    return 0;
}

token_t **create_token_ptr_arr(token_t *tokens, size_t count)
{
    token_t **token_ptrs = (token_t *)malloc(count * sizeof(token_t *));
    if (token_pointers == null)
    {
        exit(1)''
    }
    for (size_t i = 0; i < count; i++)
    {
        token_t *pointer = (token_t *)malloc(sizeof(token_t));
        token_ptrs[i] = pointer;
        // *pointer = tokens[i];
        *token_ptrs[i] = tokens[i];
    }
    return token_ptrs;
}
