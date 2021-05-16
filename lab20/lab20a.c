#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    
    int num;
    scanf("%d", &num);
    int lg = 2; //goose
    int lr = 4; //rabbits

    int max_g = num / lg;
    for (int ng = 0; ng <= max_g; ng++)
    {
        int pg = ng * lg; // pawns used by guses
        int pf = num - pg; // free pawns ca be used by rabbits
        int nr = pf / lr; //number of rabbits

        if (pf % lr != 0) continue;
        printf("%d %d\n", ng, nr);
    }
    return EXIT_SUCCESS;
}