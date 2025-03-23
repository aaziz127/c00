#include <stdio.h>
#include <stdlib.h>

#define ARSZ 20

int	main(void)
{
	int ar[ARSZ], i;

	i = 0;
	while (i++ < ARSZ)
	{
		ar[i] = i;
		printf("ar[%d] before ++ : %d\n", i, ar[i]);
		i[ar]++;
		printf("ar[%d] now = %d\n", i, ar[i]);
	}
	i = 0;
	while(i++ < ARSZ)
	{
		printf ("%d[ar] = %d\n", i, i[ar]);
	}
	exit(EXIT_SUCCESS);
}


