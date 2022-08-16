#include <stdio.h>

#define MAX 500

void readArray(int[], int);
int sumOfArray(int[], int);

int main()
{
    int arr[MAX];
    int size = 0;
    int sum = 0;

    do
    {
        printf("Enter the number of elements for an array : ");
        scanf("%d", &size);
    } while (!(size > 0 && size <= MAX));
    
    readArray(arr, size);
    sum = sumOfArray(arr, size);
    printf("Sum of all array elements : %d\n", sum);

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

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}