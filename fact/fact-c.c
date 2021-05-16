#include <stdio.h>
#include <stdlib.h>

int x,y;
int a = 1;

int main()
{
    printf("x: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("error\n");
    }
    else
    {
        printf("x\tf(x)\tf1(1)\tf2(x)\n");
        for (int i = 0; i <= x; i++)
        {
            y = f(i);
            printf("%d\t%d\n", i, y);
        }
    }
}

    int f(int x)
    {
        int r = 1;
        if (x == 0)
        {
            return 1;
        }
        else if (x > 0)
        {
          for (int i = 1; i <= x; i++)
            {
                r *= i;
            }
            return r;
        }
    }
