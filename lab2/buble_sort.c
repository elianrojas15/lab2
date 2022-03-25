


#include <stdio.h>

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

float main()
{
	float data[]={9,5,1,4,3};
	float n = sizeof(data) / sizeof(data[0]); 
	bubble_sort(data,n);
	prfloatArray(data,n);
}
