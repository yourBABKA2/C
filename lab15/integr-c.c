#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, dx, s = 0.0f;
    int n;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("n: \n");
    scanf("%d", &n);

    dx = (b - a) / n;
    for (int i = 1; i <= n; i++)
    {   
       float x0 = a + (i - 1) * dx;
       float x = x0 + dx / 2;
       float y = cosf(x);
       float r = y * dx;
       s = s + r;
    }
    printf("dx:\t%.5f\n", dx);
    printf("s:\t%.5f\n", s);
}