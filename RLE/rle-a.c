#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	char x[] = {4, 4, -3, 1, 2, 3, 5, 10};
	char y[] = {4, 4, 4, 4, 4, 1, 2, 3, 10, 10, 10 ,10, 10, 10};
	char z[50];

	int n;

    printf("n: ");
    scanf("%d\n", &n);
    
	int s = 0;
	int d = 0;

	while (s < n)
	{
	 char h = x[s];
	 s++;

	 if(h < 0)
	  {
	   h = -h;
	    for (int i = 0; i < h; i++)
	   {
	    z[d] = x[s];
	    d++;
	    s++;
	   }
	  }
	else
	if(h >= 0)
	{
	 int v = x[s];
	 s++;
	 for (int i = 0; i <= h; i++)
	  {
	   z[d] = v;
	   d++;
	  }
	}
}
