#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float lerp(float a, float b, float t) // Linear interpolation
{
    return a + (b - a) * t;
}

int main()
{
    int n;
    float m, y = acosf(-1);

    printf("n: ");
    scanf("%d", &n);

    for (int i; i < n; i++)
    {
        float x = lerp(-1.0f, 1.0f, rand() / (float)RAND_MAX);
        float y = lerp(-1.0f, 1.0f, rand() / (float)RAND_MAX);

        if ((x * x) + (y * y) <= 1.0f)
        {
            m += 1;
        }
    }

    float s = 4 * m / n;
    int z = m;

    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("m:\t%d\n", z);
}