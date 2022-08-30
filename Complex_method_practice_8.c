#include <stdio.h>
typedef struct bank_data
{
    char coustomer_name[100];
    int account_number[8];
    // int ifsc_code[10];
} bank_data;
typedef struct ifsc_code
{
    char ifsc[5];
    int code[4];
} ifsc_code;
void display(bank_data *info, ifsc_code *info1)
{
    for (int i = 0; i < 2; i++)
    {
        printf("So the name of the %d customer is %s\n", i+1, (info[i]).coustomer_name);
        printf("The account number of this customer in bank is ");
        for (int ia = 0; ia < 8; ia++)
        {
            printf("%d", (info[i]).account_number[ia]);
        }
        printf("\n");
        printf("Now the IFSC Code of this customer in bank is %s", (info1[i]).ifsc);
        for (int ia = 0; ia < 4; ia++)
        {
            printf("%d", (info1[i]).code[ia]);
        }
        printf("\n");
    }
}
int main()
{
    // int n,m;
    // printf("Enter how much bank data you want to give\n");
    // scanf("%d",&n);
    // m=n;
    bank_data info[2];
    ifsc_code info1[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Give the name of the %d customer in the bank\n", i + 1);
        fflush(stdin);
        gets(info[i].coustomer_name);
        printf("Now give the account number of %d customer\n", i + 1);
        for (int ia = 0; ia < 8; ia++)
        {
            scanf("%d", &info[i].account_number[ia]);
        }
    }

    for (int a = 0; a < 2; a++)
    {
        printf("Give Ifsc code of the %d customer\n", a + 1);
        fflush(stdin);
        gets(info1[a].ifsc);
        for (int ii = 0; ii < 4; ii++)
        {
            scanf("%d", &info1[a].code[ii]);
        }
    }
    display(info, info1);

    return 0;
}
