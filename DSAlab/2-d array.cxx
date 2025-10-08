#include <stdio.h>
int main()
{
	int i,j;
	int matrix[ 4 ] [ 3 ]= {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
	int rows=4;
	int cols=3;
		printf("Matrix output is : \n");
	for (i=0; i<rows; i++)
	{
		for(j  =0; j<cols; j++)
		{
			printf ("  %d", matrix[i] [j]);
		}
		printf(" \n");
	}
	return 0;
}