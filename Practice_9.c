#include <stdio.h>
struct birth_date_month_year
{
    int date;
    int month;
    int year;
};
int returnvalue(struct birth_date_month_year *input)
{
    if (input[0].year < input[1].year)
    {
        return 1;
    }
    if (input[0].year > input[1].year)
    {
        return -1;
    }
    if (input[0].month < input[1].month)
    {
        return 1;
    }
    if (input[0].month < input[1].month)
    {
        return -1;
    }
    if (input[0].date < input[1].date)
    {
        return 1;
    }
    if (input[0].date > input[1].date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    struct birth_date_month_year input[20];
    // int num;
    // printf("Enter how much birthdate you want to give this programme\n");
    // scanf("%d", &num);
    for (int i = 0; i < 2; i++)
    {
        printf("Give the date of the birth\n");
        scanf("%d", &input[i].date);
        printf("Give the month of the birth\n");
        scanf("%d", &input[i].month);
        printf("Give the year of the birth\n");
        scanf("%d", &input[i].year);
    }
    for (int ia = 0; ia < 2; ia++)
    {
        printf("So The date of birth of the %d person is %d/%d/%d\n", ia + 1, input[ia].date, input[ia].month, input[ia].year);
    }

    printf("So the function returns %d\n", returnvalue(input));

    return 0;
}