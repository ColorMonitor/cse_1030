#include <stdio.h>
#define BOOLEAN int
#define TRUE 1
#define FALSE 0
#define ROW_MAX 100
#define COL_MAX 100
void sittingPlan(int[ROW_MAX][COL_MAX], int, int);
void convertSittingPlan(int[ROW_MAX][COL_MAX], int, int);
void displaySittingPlan(int[ROW_MAX][COL_MAX], int, int);
void displayTicketNumbers(int[ROW_MAX][COL_MAX], int, int);
BOOLEAN perfectNum(int);

int main()
{
    int old_theater[ROW_MAX][COL_MAX];
    int modern_theater[ROW_MAX][COL_MAX];
    int seat_row, seat_col;
    int modern_seat_row, modern_seat_col;

    do
    {
        printf("\nEnter the number of seats in a row : ");
        scanf("%d", &seat_row);
        printf("Enter the number of seats in a column : ");
        scanf("%d", &seat_col);
    } while (!((seat_row > 0 && seat_row <= ROW_MAX) && (seat_col > 0 && seat_col <= COL_MAX)));

    modern_seat_row = seat_col;
    modern_seat_col = seat_row;

    printf("\n\t\tDISPLAYING SITTING PLAN\n\t\t-----------------------\n\n");
    sittingPlan(old_theater, seat_row, seat_col);
    printf("\t\tIn An Old Movie Theater\n");
    printf("\t\t***********************\n");

    displaySittingPlan(old_theater, seat_row, seat_col);
    convertSittingPlan(modern_theater, modern_seat_row, modern_seat_col);
    printf("\t\tIn A Modernized Movie Theater\n");
    printf("\t\t*****************************\n");
    displaySittingPlan(modern_theater, modern_seat_row, modern_seat_col);

    printf("The ticket numbers that are the perfect numbers to receive a souvenir in the special program : \n");
    displayTicketNumbers(modern_theater, modern_seat_row, modern_seat_col);

    return 0;
}

void sittingPlan(int old_theater[ROW_MAX][COL_MAX], int row, int col)
{
    int seatNo = 1;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            old_theater[r][c] = seatNo++;
    }
}

void convertSittingPlan(int modern_theater[ROW_MAX][COL_MAX], int row, int col)
{
    int seatNo = 1;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            modern_theater[r][c] = seatNo++;
    }
}

void displaySittingPlan(int theater[ROW_MAX][COL_MAX], int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            printf("%3d ", theater[r][c]);
        printf("\n");
    }
    printf("\n");
}

BOOLEAN perfectNum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return (sum == num) ? TRUE : FALSE;
}

void displayTicketNumbers(int theater[ROW_MAX][COL_MAX], int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (perfectNum(theater[r][c]))
                printf("=>>%3d at row %2d col %2d\n", theater[r][c], r, c);
        }
    }
}