#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    #define w 10
    #define h 10
    int m[h][w];

    for(int y = 0; y < h; y++)
        for(int x = 0; x < w; x++)
            m[y][x] = a + rand() % (b - a + 1);
    
    for (int y = 0; y < h; y++)
    {
        for(int x = 0; x < w; x++)
        {
            printf("%d", m[y][x]);
            if (x != w - 1) {printf(" ");}
        }
        printf("\n");
    }
    return 0;
}