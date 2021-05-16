#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *inp = fopen("C:\\Users\\chike\\inp.txt", "r"); //open file
    FILE *out = fopen("C:\\Users\\chike\\out.txt", "w+");

    #define smin 1000 // limits
    #define smax 5000

    #define n 10
    #define m 12

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            /* linear interpolation x = a + (b - a) * t */
            int sal = rand() % (smax - smin + 1) + smin;
            sum += sal; //add sum
            fprintf(out, "%d ", sal); //print salary
        }
        fprintf(out, "%d\n", sum);
    }

    fclose(inp); //close file
    fclose(out);

    return EXIT_SUCCESS;
}