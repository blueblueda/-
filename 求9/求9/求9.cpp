#include <stdio.h>

int main()
{
	int count = 0;
	for (int i = 1; i < 100; i++)
	{
		if ((i % 10 == 9))
			count += 1;
		if (i / 10 == 9)
			count += 1;
	}
	


	printf("%d\n", count);
	return 0;
}
