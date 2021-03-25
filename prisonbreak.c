#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t = 0;
	int a = 0;
	int b = 0;
	int *d = 0;
	
	scanf("%d", &t);
	
	d = (int*) malloc(t * sizeof(int));
	
	for(int i = 0; i < t; i++){
		scanf("%d",&a);
		scanf("%d",&b);
		d[i] = a*b;
		
	}
	
	
	for(int i = 0; i <  t; i++){
		printf("%d\n",d[i]);
	}
		
	free(d);
}

