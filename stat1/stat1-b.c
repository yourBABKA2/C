#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    #define count 5

    float a[count];
    float b[count];
    float c[count];

    int n;
    printf("num: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("a%d: ", i);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("b%d: ", i);
        scanf("%f", &b[i]);
    }

    float sa = 0;
    float sb = 0;
    for (int i = 0; i < n; i++)
    {
        sa += a[i];
        sb += b[i];
    }
    float ma = sa / n;
    float mb = sb / n;

    printf("sa: %.3f\n", sa);
    printf("sb: %.3f\n", sb);
    printf("ma: %.3f\n", ma);
    printf("mb: %.3f\n", mb);

    float s1 = 0.0f;
    float s2 = 0.0f;
    for (int i = 0; i < n; i++)
    {
        s1 += powf(a[i] - ma, 2.0f);
        s2 += powf(b[i] - mb, 2.0f);
    }

    float sda = sqrtf(s1 / n);
    float sdb = sqrtf(s2 / n);

    printf("sda: %.3f\n", sda);
    printf("sdb: %.3f\n", sdb);

 //first line interpolation
    float t;
    printf("param: ");
    scanf("%f\n", &t);

    printf("c: ");
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + (b[i] - a[i]) * t;
        
	if(i < n - 1)
	{
	    printf("%.2f ", c[i]);
	}
        else if (i > n - 2)
        {    
            printf("%.2f\n", c[i]);
            //puts(" ");
        } 
   }
   
   return 0;
}