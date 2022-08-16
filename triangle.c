#include <stdio.h>

void displayPyramidTriangle(int);

int main()
{
    int size;

    printf("Enter pyramid triangle's height : ");
    scanf("%d", &size);

    displayPyramidTriangle(size);
    
    return 0;
}

void displayPyramidTriangle(int size)
{
    size = (size / 2) + 1;

    int space = size - 1;
    int space1 = 1;

    // pyramid
    for (int r = 0; r < size; r++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int star = 0; star < (r * 2) + 1; star++)
        {
            printf("*");
        }
        space--;
        printf("\n");
    }
    // invert pyramid
    for (int r = (size - 1); r > 0; r--)
    {
        for (int s = space1; s > 0; s--)
        {
            printf(" ");
        }
        for (int star = (r * 2) - 1; star > 0; star--)
        {
            printf("*");
        }
        space1++;
        printf("\n");
    }
}