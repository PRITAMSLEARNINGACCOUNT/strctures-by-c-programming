#include <stdio.h>
struct birth_date_month_year
{
    int date;
    int month;
    int year;
};
int returnyear(struct birth_date_month_year *input, int num)
{
    for (int i = 0; i < num; i++)
    {
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
int returnmonth(struct birth_date_month_year *input, int num)
{
    for (int i = 0; i < num; i++)
    {
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
int returndate(struct birth_date_month_year *input, int num)
{
    for (int i = 0; i < num; i++)
    {
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

int main()
{
    struct birth_date_month_year input[20];
    int num;
    printf("Enter how much birthdate you want to give this programme\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (num > 0)
        {
            continue;
        }
        else
        {
            break;
        }
        printf("Give the date of the birth\n");
        scanf("%d", &input[i].date);
        printf("Give the month of the birth\n");
        scanf("%d", &input[i].month);
        printf("Give the year of the birth\n");
        scanf("%d", &input[i].year);
    }
    for (int ia = 0; ia <= num; ia++)
    {
        printf("So The date of birth of the %d person is %d/%d/%d\n", ia + 1, input[ia].date, input[ia].month, input[ia].year);
    }

    printf("So the function returns in year %d\n", returnyear(input, num));
    printf("So the function returns in month %d\n", returnmonth(input, num));
    printf("So the function returns in date %d\n", returndate(input, num));

    return 0;
}