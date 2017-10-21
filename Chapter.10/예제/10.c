#include <stdio.h>

#define SIZE 11

int main()
{
	int freq[SIZE] = { 0 };
	int candidate;

	while (1)
	{
		printf("몇번 후보자를 선택하시겠습니까?(종료 : -1) : ");
		scanf("%d", &candidate);
		if (candidate < 0)
		{
			break;
		}
		freq[candidate]++;
	}

	printf("값	득표결과\n");

	for (int i = 1; i < SIZE; i++)
	{
		printf("%3d		%3d \n", i, freq[i]);
	}
	return 0;
}
