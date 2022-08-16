#include <stdio.h>

#define MAX 500

void readArray(int[], int);
void displayArray(int[], int);

int main()
{
    int arr[MAX];
    int size = 0;

    do
    {
        printf("Enter the number of elements for an array : ");
        scanf("%d", &size);
    } while (!(size > 0 && size <= MAX));

    readArray(arr, size);
    printf("\nThe elements of an array : \n");
    displayArray(arr, size);

    return 0;
}

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
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