#include <stdio.h>
struct complex_numbers
{
    int real_numbers;
    int imaginary_one;
};
void display(struct complex_numbers *input)
{
    for (int i = 0; i < 5; i++)
    {
        printf("So the real number are %d\n", (input[i]).real_numbers);
        printf("And the imaginary one is %d\n", (input[i]).imaginary_one);
    }
}
int main()
{
    struct complex_numbers input[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real number\n");
        scanf("%d", &input[i].real_numbers);
        printf("Now enter the Imaginary one\n");
        scanf("%d", &input[i].imaginary_one);
    }
    display(input);
    return 0;
}