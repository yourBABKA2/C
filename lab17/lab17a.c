#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv)
{
    float a, b, eps;
    scanf(" %f %f %f", &a, &b, &eps);

    float c;

    do
    {
        c = (a + b) * 0.5f;

        #define f(x) sinf(x) + cos(f)

        const float fa = f(a);
        const float fc = f(c);

        if (fa * fc < 0.0f) b = c;
        else a = c;
    } 
    while (fabs(b - a) > eps);

    printf("%.5f\n", c);

    return EXIT_SUCCESS;
    
}