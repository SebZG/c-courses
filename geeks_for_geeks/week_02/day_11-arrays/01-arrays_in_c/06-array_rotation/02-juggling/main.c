#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int gcd(int a, int b)
{
    printf("a: %d, b:  %d\n", a, b);
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void leftRotate(int arr[], int d, int n)
{
    int i, j, k, temp;

    // To handle if d >= n
    d = d % n;
    printf("d: %d, n: %d\n", d, n);
    int g_c_d = gcd(d, n);
    printf("gcd: %d\n", g_c_d);

    for (i = 0; i < g_c_d; i++)
    {
        // Move i-nth values of blocks
        temp = arr[i];
        j = i;
        while (1)
        {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]); // Length of arr[]
    int d = 3;                            // positions to move

    printf("Original arr: ");
    printArr(arr, n);

    // Rotate array left by d positions
    leftRotate(arr, d, n);
    // Time complexity : O(n)
    // Auxiliary Space : O(1)
    printf("Rotated arr:  ");
    printArr(arr, n);
    // getChar();


    return 0;
}
