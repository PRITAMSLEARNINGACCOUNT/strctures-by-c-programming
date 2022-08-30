#include <stdio.h>
#include <string.h>
struct data
{
    int a;
    float b;
    char array[100];
    // char arra1[10];
};
int main()
{
    struct data e1, e2, e3;
    // char hello[100];
    //fflush(stdin);
    printf("Give the name of 1st employee\n");
    gets(e1.array);
    printf("Give the registration number of 1st employee\n");
    scanf("%d", &e1.a);
    printf("Give the salary of 1st employee\n");
    scanf("%f", &e1.b);
    // printf("Give the name of 1st employee\n");
    // gets(hello);

    // strcpy(e1.array,hello);
    printf("So the registration number of the first employee is %d who has been paid %f salary and the name of the employee is %s\n", e1.a, e1.b, e1.array);
    fflush(stdin);
    printf("Give the name of 2nd employee\n");
    gets(e2.array);
    printf("Give the registration number of 2nd employee\n");
    scanf("%d", &e2.a);
    printf("Give the salary of 2nd employee\n");
    scanf("%f", &e2.b);
    printf("So The enrollment number or registration number of %s employee is %d who has been paid an %f amount of salary everymonth\n", e2.array, e2.a, e2.b);
    fflush(stdin);
    printf("Give the name of 3rd employee\n");
    gets(e3.array);
    printf("Give the registration number of 3rd employee\n");
    scanf("%d", &e3.a);
    printf("Give the salary of 3rd employee\n");
    scanf("%f", &e3.b);
    printf("So The enrollment number or registration number of %s employee is %d who has been paid an %f amount of salary everymonth\n", e3.array, e3.a, e3.b);
    return 0;
}
