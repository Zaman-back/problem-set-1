#include <stdio.h>

int main(void)
{
    int c;
    do
    {
        printf("Change owed: ");
        scanf("%d", &c);
    }
    while (c < 0);

    int count = 0;

    count += c / 25;
    c %= 25;

    count += c / 10;
    c %= 10;

    count += c / 5;
    c %= 5;

    count += c;

    printf("%d\n", count);

    return 0;
}