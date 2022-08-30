#include<stdio.h>
typedef struct vector
{
    int x_axis;
    float y_axis;
}Vector;
int main(){
    vector input1;
    printf("Give the value of x axis\n");
    scanf("%d",&input1.x_axis);
    printf("Give the value(float) of y axis\n");
    scanf("%f",&input1.y_axis);
    printf("So the value of x axis is %d and the value of y axis is %.3f according to the given input by the user\n",input1.x_axis,input1.y_axis);


    return 0;

}