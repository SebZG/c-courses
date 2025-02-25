#include <stdio.h>

// void sort(int array[], int size);
// void print(int array[], int size);
void sort(char array[], int size);
void print(char array[], int size);

int main()
{
    // int array[] = { 4, 2, 6, 1, 3, 5, 7, 8, 9, 0 };
    char array[] = { 'd', 'f', 'h', 'b', 'a', 'c', 'e', 'g', 'i', 'j' };
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    print(array, size);

    return 0;
}

// void print(int array[], int size)
void print(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // printf("%d ", array[i]);
        printf("%c ", array[i]);
    }
}

// void sort(int array[], int size)
void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // if (array[j] < array[j + 1])
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}