#include <stdio.h>
#include <string.h>
typedef struct bday_data
{
    char name[100];
    int date;
    int year;
    int month;
} bday_data;
void display(bday_data *input, int num)
{
    char temp[500];
    char equal[] = "Equal";
    char notequal[] = "notequal";
    char string[100];
    int a = 0;
    if (input[0].year < input[1].year)
    {
        a = input[0].year;
        strcpy(string, notequal);
        strcpy(temp, input[0].name);
    }
    if (input[0].year > input[1].year)
    {
        a = input[1].year;
        strcpy(string, notequal);
        strcpy(temp, input[1].name);
    }
    if (input[0].year == input[1].year)
    {
        a = input[0].year;

        strcpy(string, equal);
    }
    for (int i = 2; i < num; i++)
    {
        if (a > input[i].year)
        {
            a = input[i].year;
            strcpy(temp, input[i].name);
            strcpy(string, notequal);
        }
    }
    if (strlen(string) == 5)
    {
        if (input[0].month < input[1].month)
        {
            a = input[0].month;
            strcpy(temp, input[0].name);
            strcpy(string, notequal);
        }
        if (input[0].month > input[1].month)
        {
            a = input[1].month;
            strcpy(temp, input[1].name);
            strcpy(string, notequal);
        }
        if (input[0].month == input[1].month)
        {
            a = input[1].month;
            strcpy(string, equal);
            // strcpy(temp,input[1].name);
        }

        for (int ia = 2; ia < num; ia++)
        {
            if (a > input[ia].month)
            {
                a = input[ia].month;
                strcpy(temp, input[ia].name);
                strcpy(string, notequal);
            }
        }
    }

    if (strlen(string) == 5)
    {
        if (input[0].date < input[1].date)
        {
            a = input[0].date;
            strcpy(temp, input[0].name);
            strcpy(string, notequal);
        }
        if (input[0].date > input[1].date)
        {
            a = input[1].date;
            strcpy(temp, input[1].name);
            strcpy(string, notequal);
        }
        if (input[0].date == input[1].date)
        {
            a = input[0].date;
            strcpy(string, equal);
            // strcpy(temp,input[1].name);
        }

        for (int iaa = 2; iaa < num; iaa++)
        {
            if (a > input[iaa].date)
            {
                a = input[iaa].date;
                strcpy(temp, input[iaa].name);
                strcpy(string, notequal);
            }
        }
    }
    if (strlen(temp) > 2)
    {
        printf("So %s person is The Most Younger among the others given by the user\n", temp);
    }
}
int main()
{
    bday_data input[200];
    int num;
    printf("How much birth day data you want to entry?(User have to put value above 1)\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (num == 1)
        {
            break;
        }

        printf("Enter the name of the person you want to give birth day\n");
        fflush(stdin);
        gets(input[i].name);
        printf("Enter the birth date\n");
        scanf("%d", &input[i].date);
        printf("Enter the birth month\n");
        scanf("%d", &input[i].month);
        printf("Enter the birth year\n");
        scanf("%d", &input[i].year);
    }
    display(input, num);

    return 0;
}
