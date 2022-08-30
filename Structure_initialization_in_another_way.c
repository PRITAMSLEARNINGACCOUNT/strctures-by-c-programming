#include <stdio.h>
struct initialization
{
    int a;
    float b;
    char name[100];
};

int main()
{
    struct initialization i1 = {100, 100.1, "pagla"};
    printf("So the integer value is %d\n", i1.a);
    printf("So the float value is %3f\n", i1.b);
    printf("So the string value is %s\n", i1.name);

    return 0;
}