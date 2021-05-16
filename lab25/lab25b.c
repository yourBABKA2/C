#include<stdlib.h>
#include<stdio.h>

int random(int a, int b)
{
    return a + rand() % (b - a + 1);
}

void fill(int *arr, int len, int r0, int r1)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = random(r0, r1);
    }
}

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
}

int sum(int *arr, int len)
{
    int s = 0;
    for(int i = 0; i < len; i++)
    {
        s += arr[i];
    }
    return s;
}

void add(int *arr, int len, int val)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] += val;
    }   
}

float avg(int *arr, int len)
{
    return (float) sum(arr, len) / (float) len;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);

    int r0, r1;
    scanf("%d %d", &r0, &r1);

    int *arr = (int *)malloc(n * sizeof(int));

    fill(arr, n, r0, r1);
    print(arr, n);

    int x0 = 0, x1 = 0;

    for(int i = 0; i < n; i++)
    {
        if (arr[i] == r0)
        {
            x0 = i;
        }
        if(arr[i] == r1)
        {
            x1 = i;
        }
    }

    int s = sum(arr, n);
    printf("%d\n", s);

    add(arr, n, s);
    print(arr, n);

    float a = avg(arr, n);
    printf("%.2f\n", a);

    int min, max;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == arr[x0])
        {
            min = arr[i];
            //arr[x1] = min;
        }
        if(arr[i] == arr[x1])
        {
            max = arr[i];
            //arr[x0] = max;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[x0])
        {
            arr[x1] = min;
        }
        if (arr[i] == arr[x1])
        {
            arr[x0] = max;
        }
    }

    printf("%d\n", x0);
    printf("%d\n", x1);
    print(arr, n);
    free(arr);
}