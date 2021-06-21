#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double f[15], y, sum;
	int i, n = 3,
	k[7][15] = {
		{1, 2, 1},
		{-3, 12, 17, 12, -3},
		{-2, 3, 6, 7, 6, 3, -2},
		{-21, 14, 39, 54, 59, 54, 38, 14, -21},
		{-36, 9, 44, 69, 84, 89, 84, 69, 44, 9, -36},
		{-11, 0, 9, 16, 21, 24, 25, 24, 21, 16, 0, -11},
		{-78, -13, 42, 87, 122, 147, 162, 167, 162, 147, 122, 187, 2, -13, -78}
	},
	dots_sums[7] = {4, 35, 21, 231, 429, 143, 1105};
	
	if(argv[1] != NULL)
		sscanf(argv[1], "%d", &n);

	if(2 < n && n < 16 && n % 2 == 1)
	{
		for( ;;)
		{
			y = sum = 0.0;

			for(i = 0; i < n; i++)
			{
				scanf("%lf", &f[i]);
				sum += f[i] * k[(n-1)/2-1][i];
			}

			y = sum/dots_sums[(n-1)/2-1];

			printf("%lf\n%lf\n", f[0], y);
		}
	}
	else 
	{
		printf("Invalid parameters.\n");
		exit(1);
	}

	return  0;
}
