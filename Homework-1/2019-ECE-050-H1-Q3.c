#include <stdio.h>

#define MAX 100

int positiveEvenIntegers(int[]);
void displayArray(int[], int);

int main()
{
    int arr[MAX];
    int size = 0;

    size = positiveEvenIntegers(arr);

    printf("\nThe first %d positive even integers : \n", size);
    displayArray(arr, size);
    
    return 0;
}

int positiveEvenIntegers(int arr[])
{
    int count = 0;
    for (int num = 2; num <= MAX; num++)
    {
        if (num % 2 == 0)
        {
            arr[count] = num;
            count += 1;
        }
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