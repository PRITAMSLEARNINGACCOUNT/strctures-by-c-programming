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
    // int second, miniute, hour, Day, week;
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
        // returnminiute(input, i);
        returnsecond(input, i);
        returnhour(input, i);
        returnDay(input, i);
        returnweek(input, i);
        while (returnminiute(input, i) >= 60)
        {
            int temp = returnminiute(input, i) - 60;
            input[i].miniute = temp;
        }
        while (returnhour(input, i) >= 24)
        {
            int temp = returnhour(input, i) - 24;
            input[i].hour = temp;
        }
        while (returnDay(input, i) >= 7)
        {
            int temp = returnDay(input, i) - 7;
            input[i].Day = temp;
        }

        //  printf("So the Day is %d hour is %d miniute is %d and second is %d and last of all the week is %d\n", Day, hour, miniute, second, week);
    }
    for (int ia = 0; ia < num; ia++)
    {
        printf("So the week is %d,Day is %d,Hour is %d,Miniute is %d & Second is %d\n",input[ia].week,input[ia].Day,input[ia].hour,input[ia].miniute,input[ia].seconds);
    }

    return 0;
}