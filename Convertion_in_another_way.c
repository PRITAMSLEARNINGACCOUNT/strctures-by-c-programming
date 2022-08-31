#include <stdio.h>
typedef struct convertion_data
{

    int Day;
    int hour;
    int miniute;
    int seconds;
    int week;
} convertion_data;
int returnminiute(convertion_data *input, int num)
{
    int count1 = 0;
    int second;

    while (input[num].seconds >= 60)
    {
        second = input[num].seconds - 60;
        input[num].seconds = second;

        count1++;
    }
    input[num].miniute += count1;
    return input[num].miniute;
}
int returnsecond(convertion_data *input, int i)
{
    int second;
    while (input[i].seconds >= 60)
    {
        second = input[i].seconds - 60;
        input[i].seconds = second;
    }
    return input[i].seconds;
}
int returnhour(convertion_data *input, int i)
{
    int count = 0;
    int hour;
    while (input[i].miniute >= 60)
    {
        hour = input[i].miniute - 60;
        input[i].miniute = hour;
        count++;
    }
    input[i].hour += count;
    return input[i].hour;
}
int returnDay(convertion_data *input, int i)
{
    int count = 0;
    int Day;
    while (input[i].hour >= 24)
    {
        Day = input[i].hour - 24;
        input[i].hour = Day;
        count++;
    }
    input[i].Day += count;
    return input[i].Day;
}
int returnweek(convertion_data *input, int i)
{
    int count = 0;
    int week;
    while (input[i].Day >= 7)
    {
        week = input[i].Day - 7;
        input[i].Day = week;
        count++;
    }
    input[i].week += count;
    return input[i].week;
}
int main()
{
    convertion_data input[100];
    int num;
    int second, miniute, hour, Day, week;
    printf("How much convertion data you want to entry\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (num == 0)
        {
            break;
        }
        printf("Enter the week\n");
        scanf("%d", &input[i].week);

        printf("Enter the Day \n");
        scanf("%d", &input[i].Day);
        printf("Enter the hour \n");
        scanf("%d", &input[i].hour);
        printf("Enter the miniute \n");
        scanf("%d", &input[i].miniute);
        printf("Enter the seconds \n");
        scanf("%d", &input[i].seconds);
        miniute = returnminiute(input, i);
        second = returnsecond(input, i);
        hour = returnhour(input, i);
        Day = returnDay(input, i);
        week = returnweek(input, i);
        while (miniute >= 60)
        {
            int temp = miniute - 60;
            miniute = temp;
        }
        while (hour >= 24)
        {
            int temp = hour - 24;
            hour = temp;
        }
        while (Day >= 7)
        {
            int temp = Day - 7;
            Day = temp;
        }

        printf("So the Day is %d hour is %d miniute is %d and second is %d and last of all the week is %d\n", Day, hour, miniute, second, week);
    }

    return 0;
}