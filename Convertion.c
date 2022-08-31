#include <stdio.h>
typedef struct convertion_data
{

    float Day;
    float hour;
    float miniute;
    float seconds;
} convertion_data;
void display(convertion_data *input, int num)
{
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    for (int i = 0; i < num; i++)
    {
        while (input[i].seconds >= 60)
        {
            float temp = input[i].seconds - 60;
            input[i].seconds = temp;
            count1++;
        }
        input[i].miniute += count1;

        while (input[i].miniute >= 60)
        {
            float temp2 = input[i].miniute - 60;
            input[i].miniute = temp2;
            count2++;
        }
        input[i].hour += count2;
        while (input[i].hour >= 24)
        {
            float temp3 = input[i].hour - 24;
            input[i].hour = temp3;
            count3++;
        }
        input[i].Day += count3;

        printf("So The data of convertion given by the user is converted to %.3f Day %.3f hour %.3f miniute & %.3f Seconds\n", (input[i]).Day, (input[i]).hour, (input[i]).miniute, (input[i]).seconds);
    }
}

int main()
{
    convertion_data input[100];
    int num;
    printf("How much convertion data you want to entry\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (num == 0)
        {
            break;
        }

        printf("Enter the year \n");
        scanf("%f", &input[i].Day);
        printf("Enter the hour \n");
        scanf("%f", &input[i].hour);
        printf("Enter the miniute \n");
        scanf("%f", &input[i].miniute);
        printf("Enter the seconds \n");
        scanf("%f", &input[i].seconds);
    }

    display(input, num);

    return 0;
}