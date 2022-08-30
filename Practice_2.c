#include <stdio.h>
typedef struct vector
{
    int x_axis;
    int y_axis;
} vector;
int sumvector(vector input)
{
    int sum;
    sum = input.x_axis + input.y_axis;
    return sum;
}
int main()
{
    vector input;
    int sum;
    printf("Enter the value of x axis\n");
    scanf("%d", &input.x_axis);
    printf("Enter the value of y axis\n");
    scanf("%d", &input.y_axis);
    sum = sumvector(input);
    printf("So the sum of the given two values %d & %d of two-dimensional x & y axis is %d\n", input.x_axis, input.y_axis, sum);

    return 0;
}