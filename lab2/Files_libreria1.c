

#include <stdio.h>
#include <string.h>

void printArray(float array[],float n)
{
	for(float i = 0;i < n; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}




void swap(float *x,float*y)
{
	float tmp = *x;
	*x = *y ;
	*y = tmp;
}

void bubble_sort(float *s[], float *n)
{
	for(float x=0; x < n; x++ )
	{
		for(float ia=0; ia<n-1 ; ia++)
		{
			float is = ia + 1;
			if(s[ia]>s[is])
			{
				swap(&s[ia],&s[is]);
			}
		}
	}
}

void insertionSort (float *array[],float *tam)
{	for (float step =1; step < tam; step++)
	{float key = array[step];
		float j = step-1;
		while (key < array[j] && j>=0)
		{array [j+1]=array[j];
			--j;
		}
	array[j+1]=key;
	}
}

char buffertodouble (const char *lista, int *car, int max);
{
    int i;
	char num;
	double arg;
	
	for (i=0 ; *(lista + i) !=car; i++);
	{
	char *num = strchr(*lista+i, *car)
	double arg = atof (num)
	return *arg
	}
}