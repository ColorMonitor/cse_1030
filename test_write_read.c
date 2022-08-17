#include <stdio.h>

int main()
{
    FILE *fp = fopen("./record.dat", "w");
    int eNo;
    char eName[100];
    int eSalary;
    char ans;
    do
    {
        printf("Emp No     : ");
        scanf("%d", &eNo);
        getchar();

        printf("Emp Name   : ");
        scanf("%[^\n]s", eName);

        printf("Emp Salary : ");
        scanf("%d", &eSalary);
        getchar();

        fprintf(fp, "%d\t%s\t%d\n", eNo, eName, eSalary);

        printf("Any more(y/n) ? ");
        ans = getchar();

    } while (ans == 'y');

    fclose(fp);

    return 0;
}