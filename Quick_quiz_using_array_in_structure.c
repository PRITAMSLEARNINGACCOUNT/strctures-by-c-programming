#include <stdio.h>
struct info
{
    int a;
    float b;
    char array[100];
};
int main()
{
    struct info abc[10];
    int number = 0;
    printf("Give for how much people you want to entry the data\n");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        fflush(stdin);
        printf("Enter the name of the %d employee\n", i + 1);
        gets(abc[i].array);

        printf("Enter the Enrollment number of %d employee\n", i + 1);
        scanf("%d", &abc[i].a);
        printf("Enter the salary of the %d employee\n", i + 1);
        scanf("%f", &abc[i].b);
    }
    for (int i = 0; i <= number; i++)
    {
        printf("So the name of the %d employee is %s\n", i + 1, abc[i].array);
        printf("The employee has %f salary in every month\n", abc[i].b);
        printf("Last of all the enrollment number of %d employee in our office is %d\n", i + 1, abc[i].a);
    }

    return 0;
}
