

#include<stdio.h>

void printArray(float array[], float tam)
{	for (float i=0 ; i<tam; i++)
	{	printf ("%d", array[i]);
	}
	printf("\n");
}


void insertionSort (float array[],float tam)
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

float main ()
{	float data[]={9,5,1,4,3};
	float tam  = sizeof(data) / sizeof(data[0]);
	insertionSort (data, tam);
	printf ("Arreglo ordenado en orden ascendente: \n");
	printArray(data, tam);

}
