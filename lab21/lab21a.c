#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    float c0, cckrit, k;
    scanf("%f %f %f", &c0, &cckrit, &k);

    float c = c0;
    int i = 0;

    while (c > cckrit)
    {
        printf("%d %.5f\n", i + 1, c);

        c /= k;
        i++;
    }
    
    printf("%d\n", i);

    return EXIT_SUCCESS;
}