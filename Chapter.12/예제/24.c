#include <stdio.h>
#include <string.h>

int check(char s[], char a[], char ch);

int main()
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;

	while (1)
	{
		printf("문자열을 입력하시오 : %s \n", answer);
		printf("글자를 추측하세요 : ");
		ch = getchar();
		getchar();
		if (check(solution, answer, ch) == 1)
		{
			break;
		}
	}
	return 0;
}

int check(char s[], char a[], char ch)
{
	int i;

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == ch)
		{
			a[i] = ch;
		}
	}
	if (strcmp(s, a) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
