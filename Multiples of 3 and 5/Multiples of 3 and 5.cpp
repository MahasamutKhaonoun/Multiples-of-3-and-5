#include<stdio.h>
int main()
{
	int n[1000];
	int ans = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			n[i] = i;
		}
		else
		{
			n[i] = 0;
		}
		ans += n[i];
	}
	printf("Result = %d", ans);
	return 0;
}