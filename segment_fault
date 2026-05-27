#include <stdio.h>

/* Addition */
int add(int a, int b)
{
    int result = a + b;
    return result;
}

/* Subtraction */
int sub(int a, int b)
{
    int result = a - b;
    return result;
}

/* Multiplication */
int mul(int a, int b)
{
    int result = a * b;
    return result;
}

/* Division */
float divi(int a, int b)
{
    if(b == 0)
    {
        printf("Division by zero not allowed\n");
        return 0;
    }

    float result = (float)a / b;
    return result;
}

int main()
{
    int x = 20;
    int y = 10;

    int addition;
    int subtraction;
    int multiplication;
    float division;

    addition = add(x, y);
    subtraction = sub(x, y);
    multiplication = mul(x, y);
    division = divi(x, y);

    printf("Addition = %d\n", addition);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Division = %.2f\n", division);

    return 0;
}
