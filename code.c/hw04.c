#include <stdio.h>

int main(void)
{
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3)
        return 0;

    printf("%-9d%-9d%-9d\n", a, a * a, a * a * a);
    printf("%-9d%-9d%-9d\n", b, b * b, b * b * b);
    printf("%-9d%-9d%-9d\n", c, c * c, c * c * c);
    return 0;
}