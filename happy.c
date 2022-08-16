#include <stdio.h>
#include <stdlib.h>

#define BOOLEAN int
#define TRUE 1
#define FALSE 0

int sumDigit(int);
BOOLEAN happyNumbers(int);

int main()
{
    int n;
    int i = 0;
    int sum = 0;
    int count = 0;
    printf("Enter an integer : ");
    scanf("%d", &n);

    while(!(count == n)) {
        if(happyNumbers(i)) {
            printf("%d ", i);
            count += 1;
        } 
        i++;
    }
    
    return 0;
}

BOOLEAN happyNumbers(int n)
{
    int sum = 0;
    do
    {
        sum = sumDigit(n);
        if(sum == 4) {
            return FALSE;
        }
        n = sum;
        sumDigit(n);
    } while (!(sum == 1));
    return TRUE;
}

int sumDigit(int n)
{
    int sum = 0;
    int right = 0;
    
    while (n > 0)
    {
        right = n % 10;
        sum += (right * right);
        n /= 10;
    }
    return sum;
}