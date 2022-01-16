#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    int i = 0;
    while (i < size)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i = i + 2;
    }

        for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}