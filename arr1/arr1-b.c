#include <stdio.h>
#include <math.h>

int main ()
{
	#define n 5
	int a[n];
	int m;

	printf("num: ");
	scanf("%d", &m);

	if (m >= 1 && m <= n)
	{
		for (int i = 0; i < m; i++)
		{
			printf("a%d: ", i);
            scanf("%d", &a[i]);

			if (a[i] <= -10 || a[i] >= 10)
			{
				printf("(a[i]) is out of range -10..+10\n", i);
                return 0;
			}
		}
			printf("a[] = ");
			for (int i = 0; i < m; i++)
				{
					printf("%d", a[i]);
					if (i < m - 1) putchar(' ');
				}

				putchar('\n');

			int s = 0;
			for (int i = 0; i < m; i++)
			s += a[i];

			printf("sum: %d\n", s);
	
			int p = 1;
			for (int i = 0; i < m; i++)
			{
				if (a[i != 0])
				{
					p *= a[i];
				}
			}
			printf("prod: %d\n", p);
	}
 	else
    {
		printf("(num) is out of range 1..5\n");
    }
  return 0;
}
