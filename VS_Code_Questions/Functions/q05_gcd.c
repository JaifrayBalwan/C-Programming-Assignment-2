#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}