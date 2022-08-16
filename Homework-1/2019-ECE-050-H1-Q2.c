#include <stdio.h>

#define MAX 1000

int intgersReverseOrder(int[]);
void displayArray(int[], int);

int main()
{
    int arr[MAX];
    int size = 0;

    size = intgersReverseOrder(arr);

    printf("\nIntegers in reverse order : \n");
    displayArray(arr, size);

    return 0;
}

int intgersReverseOrder(int arr[])
{
    int count = 0;

    for (int num = MAX; num > 0; num--)
    {
        arr[count] = num;
        count += 1;
    }
    return count;
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
}