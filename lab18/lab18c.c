#include<stdlib.h>
#include<stdio.h>
#include<math.h>
 
 unsigned long int fact(int x)
{
    unsigned long int y = 1;

    for (int i = 2; i <= x; i++)
    y *= i;

    return y;
}

int main()
{
    #define lim 0.00001f
    #define f(x) powf(3.0f, x) / (float) fact(x)

    float sum = 0.0f;

    int i = 0;
    int n = 0;
    float ai = 0.0f;
    while (1)
    {   
        ai = f(i);
        if (ai > lim)
        {
            if (i < 13)
            sum += ai;

            printf("%d %.5f\n", i, ai);
            n++;
            
        }
        else 
        {break;}
        
        i++;
    }
        
    printf("%d\n", n);
    printf("%0.5f %d\n", sum, 13);
    
    i = 0;
    
    while(1)
    {
        ai = f(i);
        if (ai > lim)
        {
            if (fabsf(ai - (ai - 1)) > lim)
            printf("%d\n", i);
        }
        else 
        {break;}

        i++;
    }
 return 0;
}    
 
