#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t = 0;
	long int *n, *m;
	long int *x;
	long int h = 1;
	long int **matrix;
	long int ii = 0, jj = 0, count = 1;
	
	scanf("%d", &t);
	
	n = (long int*)malloc(t * sizeof(long int));
	m = (long int*)malloc(t * sizeof(long int));
	x = (long int*)malloc(t * sizeof(long int));
	
	for(long int i = 0; i < t; i++)
	{
		scanf("%d", &n[i]);
		scanf("%d", &m[i]);
		scanf("%d", &x[i]);
	}
		
	
	for(long int k = 0; k < t; k++)
	{
		matrix = (long int**)malloc(n[k] * sizeof(long int*));
		for(long int i = 0; i < n[k]; i++)
		{
			matrix[i] = (long int *)malloc(m[k] * sizeof(long int));
		}
		
		for(long int i = 0; i < n[k]; i++)
		{
			for(long int j = 0; j < m[k]; j++)
			{
				matrix[i][j] = h;
				h++;
			}
		}
	
		for(long int j = 0; j < m[k]; j++)
		{
			for(long int i = 0; i < n[k]; i++)
			{
				if(x[k] == count)
				{
					
					jj = j;
					ii = i;
				}
				count++;
			}
		
		}
		
		printf("%ld\n",matrix[ii][jj]);
		h = 1;
		count = 1;
		free(matrix);
	}
	
	
	free(n);
	free(m);
	free(x);

	
}