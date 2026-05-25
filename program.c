#include <stdio.h>

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int main()
{
    int x = 10;
    int y = 20;
    int z;

    z = add(x, y);

    printf("Sum = %d\n", z);

    return 0;
}

