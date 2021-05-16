#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 unsigned long int fact(int x)
{
    unsigned long int y = 1;

    for (int i = 2; i <= x; i++)
    y *= i;

    return y;
}

int main()
{
    #define lim 0.00001f
    #define f(x) powf(3.0f, x) / (float) fact(x)

    int i = 0;
    int n = 0;

    while (1)
    {
        float ai = f(i);
        if (ai > lim)
        {
            printf("%d %.5f\n", i, ai);
            n++;
        }
        else {break;}

        if(n == 13)
        {
            break;
        }

        i++;
    }
    printf("%d\n", n);

    return 0;
}
