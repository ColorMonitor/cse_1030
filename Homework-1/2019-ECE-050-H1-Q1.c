#include <stdio.h>

#define MAX 100

void fibonacciArray(int[], int);
void displayFibonacci(int[], int);

int main()
{
    int fiboArr[MAX];
    int size = 0;

    do
    {
        printf("Enter the number of elements for an array : ");
        scanf("%d", &size);
    } while (!(size > 0 && size <= MAX));

    fibonacciArray(fiboArr, size);
    printf("\nThe fibonacci numbers of an array : \n");
    displayFibonacci(fiboArr, size);

    return 0;
}

void fibonacciArray(int fibo[], int n)
{
    int first = 0;
    int second = 1;
    int next = 0;

    fibo[0] = first;
    fibo[1] = second;

    for (int i = 2; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        fibo[i] = next;
    }
}

void displayFibonacci(int fibo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibo[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
}
