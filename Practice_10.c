#include <stdio.h>
typedef struct bday_data
{
    char name[100];
    int date;
    int month;
    int year;
    int hour;
    int miniute;
    int seconds;
} bday_data;
void display(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("So date of birth of %s is %d-%d-%d %d:%d:%d\n", (input[i]).name, (input[i]).year, (input[i]).month, (input[i]).date, (input[i]).hour, (input[i]).miniute, (input[i]).seconds);
    }
}
int returnyear(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].year < input[i + 1].year)
        {
            return -1;
        }
        if (input[i].year > input[i + 1].year)
        {
            return 1;
        }
    }
    return 0;
}
int returnmonth(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].month < input[i + 1].month)
        {
            return -1;
        }
        if (input[i].month > input[i + 1].month)
        {
            return 1;
        }
    }
    return 0;
}
int returndate(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].date < input[i + 1].date)
        {
            return -1;
        }
        if (input[i].date > input[i + 1].date)
        {
            return 1;
        }
    }
    return 0;
}
int returnhour(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].hour < input[i + 1].hour)
        {
            return -1;
        }
        if (input[i].hour > input[i + 1].hour)
        {
            return 1;
        }
    }
    return 0;
}
int returnminiute(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].miniute < input[i + 1].miniute)
        {
            return -1;
        }
        if (input[i].miniute > input[i + 1].miniute)
        {
            return 1;
        }
    }
    return 0;
}

int returnsecond(bday_data *input, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == (num - 1))
        {
            break;
        }

        if (input[i].seconds < input[i + 1].seconds)
        {
            return -1;
        }
        if (input[i].seconds > input[i + 1].seconds)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    bday_data input[100];
    int num;
    printf("How much bday data you want to entry\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (num == 0 || num == 1)
        {
            break;
        }
        printf("Enter the name\n");
        fflush(stdin);
        gets(input[i].name);
        printf("Enter the year of the birth\n");
        scanf("%d", &input[i].year);
        printf("Enter the month of the birth\n");
        scanf("%d", &input[i].month);
        printf("Enter the date of the birth\n");
        scanf("%d", &input[i].date);
        printf("Enter the hour of the birth\n");
        scanf("%d", &input[i].hour);
        printf("Enter the miniute of the birth\n");
        scanf("%d", &input[i].miniute);
        printf("Enter the seconds of the birth\n");
        scanf("%d", &input[i].seconds);
    }
    display(input, num);
    printf("\n");
    printf("So the year comparison returns%d\n", returnyear(input, num));
    printf("So the month comparison returns%d\n", returnmonth(input, num));
    printf("So the date comparison returns%d\n", returndate(input, num));
    printf("So the hour comparison returns%d\n", returnhour(input, num));
    printf("So the miniute comparison returns%d\n", returnminiute(input, num));
    printf("So the second comparison returns%d\n", returnsecond(input, num));

    return 0;
}