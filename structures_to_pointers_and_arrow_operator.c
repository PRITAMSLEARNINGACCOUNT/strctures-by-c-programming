#include<stdio.h>
#include<string.h>
struct pointer
{
    int number;
    char array[10];
};

int main(){
    struct pointer p1;
    struct pointer *ptr;
    ptr=&p1;
    printf("Give an integer number\n");
    scanf("%d",&(*ptr).number);
    printf("So the number given by the user is %d\n",ptr->number);
    fflush(stdin);
    printf("Give a first name of anyone\n");
    scanf("%s",(*ptr).array);
    printf("So the first name given by the user is %s\n",ptr->array);
    printf("Now printing the first name charecter by charecter\n");
    for (int i = 0; i <=strlen(p1.array); i++)
    {
        printf("%c",(*ptr).array[i]);
    }
    
    return 0;
}