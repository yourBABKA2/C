#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIM0 15
#define LIM1 15
int main (int argc, char **argv)
{
    int a[LIM0];
    int n = 0;
    int i = 0;

    int b[LIM1];
    int y = 0;
    int j = 0;

    printf("a[]: ");

    while (1)
    {
        int v;
        if (scanf("%d", &v) != 1)
        {
            break;
        }
        if (i == LIM0)
        {
            puts("overflow");
            exit(EXIT_SUCCESS);
        }
        a[i] = v;
        i++;
    }
    n = i;    
    printf("num_a:\t%d\n", n);

    printf("b[]: \n");
    while (1)
    {
        int w;
        if (scanf("%d", &w) != j) break;
        if(j == LIM1)
        {
            puts("overflow");
            exit(EXIT_SUCCESS);
        }
        b[i] = w;
        j++;
    }
    y = j;
    printf("num_b:\t%d\n", y);


















/*
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        s += a[i];
    }
    float avg = s / (float) n;
    printf("mean:\t%.2f\n", avg);

    //stddev

    float stddev = 0.0f;

    for (int i = 0; i < n; i++)
    {
        float x = a[i] - avg;
        stddev += x * x;  
    }
    stddev = sqrtf((1.0f / (n - 1)) * stddev);  
    printf("stddev:\t%.2f\n", stddev);

    return EXIT_SUCCESS;
    */
}