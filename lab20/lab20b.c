#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *inp = fopen("C:\\Users\\chike\\inp.txt", "r"); //open file
    FILE *out = fopen("C:\\Users\\chike\\out.txt", "w+");
    
    int num;
    fscanf(inp, "%d", &num);

    int two = 2;
    int five = 5;
    int ten = 10;

  //  int max_g = num / lg;
    for (int ng = 0; ng <= max_g; ng++)
    {
        int pg = ng * lg; // pawns used by guses
        int pf = num - ng; // free pawns ca be used by rabbits
        int nr = pf / lr; //number of rabbits

        if (pf % lr != 0) continue;
        fprintf(out, "%d %d\n", ng, nr);
    }
    fclose(inp);
    fclose(out);

    return EXIT_SUCCESS;
}