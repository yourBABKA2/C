#include<stdlib.h>
#include<stdio.h>

int find(int *arr, int len, int match)
{
	for (int i = 0; i < len; i++)
		if(arr[i] == match) return 1;
	return -1;
}

void printf(int *arr, int len)
{
	for (int i = 0; i < len; i++)
		{
			printf("%d", arr[i]);
			if (i != len - 1) printf(" ");
		}
		printf("\n");
}

int main(int argc, char **argv)
{
	int x0, x1;
	scanf("%d %d", &x0, &x1);

	#define n 10
	#define m 7
	int a[n];
	int b[m];

	for (int i = 0;i < n; i++)
	{
		int v;
		while (1)
		{
			v = x0 + rand() % (x1 - x0 + 1);
			if (find(a, i, v) == -1) break;
	}
	b[i] = v;

	print(a, n);
	print(b, m);

	int c_un[n + m];
	int j = 0;
	for(int i = 0; i < m; i++)
	{
		c_un[j] = b[i];
		j++;
	}
	
	print(c_un, n + m);
	return EXIT_SUCCESS;
}
