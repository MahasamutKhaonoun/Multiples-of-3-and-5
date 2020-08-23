#include<stdio.h>
int main()
{
	int n[1000];
	int ans = 0;
	char name[50];
	printf("Input your name : ");
	gets_s(name);
	printf("Welcome %s\n", name);
	printf("The question is \n");
	printf("If we list all the natural numbers below 10 that are multiples of 3 or 5\n");
	printf("we get 3, 5, 6 and 9. The sum of these multiples is 23.\n");
	printf("Find the sum of all the multiples of 3 or 5 below 1000.");
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
	printf("\n\nResult = %d", ans);
	return 0;
}