#include <stdio.h>
struct complex_numbers
{
    int real_numbers;
    int imaginary_one;
};
int main()
{
    struct complex_numbers input = {54, 88};
    printf("So the real number is %d and imaginary number is %d in complex number\n", input.real_numbers, input.imaginary_one);

    return 0;
}
