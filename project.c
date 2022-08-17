#include <stdio.h>
#include <string.h>

void menu();
void createFile();
void printRecord();
void searchRecord();
void updateRecord();

int main()
{

    int opt;
    menu();

    do
    {
        printf("\nChoose : ");
        scanf("%d", &opt);
    } while (!(opt >= 1 && opt <= 4));

    switch (opt)
    {
    case 1:
        createFile();
        break;
    case 2:
        printRecord();
        break;
    case 3:
        searchRecord();
        break;
    case 4:
        updateRecord();
        break;
    }

    return 0;
}

void menu()
{
    printf("\n1. Creation of file\n");
    printf("2. Printing Records of file\n");
    printf("3. Searching Records of file\n");
    printf("4. Updating Records of file\n");
}

void createFile()
{
    printf("Creating a file...\n");
}

void printRecord()
{
    FILE *fp = fopen("record.dat", "r");

    int eNo;
    char eName[100];
    int eSalary;

    if (fp != NULL)
    {
        printf("\nEmployee Record\n");
        printf("------------------------\n");
        printf("No\tName\tSalary\n");
        printf("------------------------\n");
        while (!feof(fp))
        {
            fscanf(fp, "%d\t%s\t%d", &eNo, eName, &eSalary);
            printf("%d\t%s\t%d\n", eNo, eName, eSalary);
        }
    }

    fclose(fp);
}

void searchRecord()
{
    int opt;
    char searchKey[100];
    FILE *fp = fopen("./record.dat", "r");

    printf("\nSearch By?\n");
    printf("1. Employee No\n");
    printf("2. Employee Name\n");
    printf("3. Employee Salary\n");

    do
    {
        printf("\nChoose : ");
        scanf("%d", &opt);
    } while (!(opt >= 1 && opt <= 3));

    switch (opt)
    {
    case 1:
        strcpy(searchKey, "eNo");
        break;
    case 2:
        strcpy(searchKey, "eName");
        break;
    case 3:
        strcpy(searchKey, "eSalary");
        break;
    default:
        printf("Not Found!\n");
    }

    int eNo;
    char eName[100];
    int eSalary;
    int isFound = 0;
    if (fp != NULL)
    {
        while (!feof(fp) && !isFound)
        {
            fscanf(fp, "%d\t%s\t%d", &eNo, eName, &eSalary);
            if (!(strcmp("eNo", searchKey)))
            {
                int id = 0;
                printf("Type emp no : ");
                scanf("%d", &id);
                printf("id : %d\teNo : %d\n", id, eNo);
                if (id == eNo)
                {
                    printf("%d\t%s\t%d\n", eNo, eName, eSalary);
                    isFound = 1;
                }
                else
                {
                    printf("Not Found!\n");
                }
            }
            else if (!(strcmp("eName", searchKey)))
            {
                printf("emp name is found\n");
                isFound = 1;
            }
            else if (!(strcmp("eSalary", searchKey)))
            {
                printf("emp salary is found\n");
                isFound = 1;
            }
        }
    }
    fclose(fp);
}

void updateRecord()
{
    printf("Updating a file...\n");
}