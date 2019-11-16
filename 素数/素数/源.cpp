#include <stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	for (a = 101;a <= 200;a = a + 2)
	{
		b = a / 2;
		for (c = 2;c <= b;c++)
		{
			if (a % c == 0)
				break;
			else if (c == b)
			{
				printf("%d", a);

			}
		}
	}
	printf("\n");
	return 0;
}