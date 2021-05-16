#include <stdint.h>
#include <stdio.h>

int x;
int i;

int main()
{
    int one = 1;
    printf("x: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("error\n");
    }

    if (x == 0)
    {
        printf("y:\t%d\n", one);
    }

    if (x > 0)
    {
        int first = 1;

        for (i = 1; i <= x; i++)
        {
            first *= i;
        }
        printf("y:\t%d\n", first);
    }
}
