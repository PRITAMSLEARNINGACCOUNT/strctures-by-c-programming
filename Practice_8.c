#include <stdio.h>
typedef struct bank_data
{
    char bankname[100];
    char customername[100];
    int accnumber;
    char ifsc[500];
    int code;
} bank_data;
int main()
{
    bank_data no1[100];
    int number;
    printf("How much bank data you want to give\n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("Enter the name of the bank\n");
        fflush(stdin);
        gets(no1[i].bankname);
        printf("Enter the name of the customer on %s bank\n", no1[i].bankname);
        fflush(stdin);
        gets(no1[i].customername);
        printf("Give the account number of the customer named as %s in %s bank\n", no1[i].customername, no1[i].bankname);
        scanf("%d", &no1[i].accnumber);
        printf("Now give the Ifsc(alphabet's only) code of %s person on %s bank\n", no1[i].customername, no1[i].bankname);
        fflush(stdin);
        scanf("%s", &no1[i].ifsc);
        printf("Now give the Ifsc(Numerics only) code of %s person on %s bank\n", no1[i].customername, no1[i].bankname);
        scanf("%d", &no1[i].code);
    }
    for (int ia = 0; ia < number; ia++)
    {
        printf("So %s has a bank account in %s bank\n", no1[ia].customername, no1[ia].bankname);
        printf("The acount number of %s customer is %d\n", no1[ia].customername, no1[ia].accnumber);
        printf("The IFSC Code of %s customer is %s%d\n", no1[ia].customername, no1[ia].ifsc, no1[ia].code);
    }

    return 0;
}