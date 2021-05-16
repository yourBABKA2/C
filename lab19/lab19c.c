#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *inp = fopen("C:\\Users\\chike\\inp.txt", "r");    //open file
    FILE *out = fopen("C:\\Users\\chike\\out.txt", "w+");

    #define smin 20000 // limits
    #define smax 50000

    #define n 10
    #define m 12
int ySum = 0;
    for (int i = 0; i < n; i++)
    {   
        int avg = 0;
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int sal = rand() % (smax - smin + 1) + smin;
            sum += sal;                                        //add sum
            fprintf(out, "%d \t", sal);                        //print salary
            avg = sum / m;
           // ySum += sum;
        }
        fprintf(out, "Сумма зарплаты: %d\t", sum);
        fprintf(out, "Средняя зарплата: %d\n",avg);
        ySum += sum;
        
        fprintf(out, "Сумма зарпалты за год", ySum);
    }

    //fprintf(out, "Сумма зарпалты за год", ySum);
    fclose(inp);                                               //close file
    fclose(out);

    return EXIT_SUCCESS;
}