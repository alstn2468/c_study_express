#include <stdio.h>
#include <string.h>

struct employee
{
	int number;
	char name[20];
	int age;
	char tel[20];
};

int main()
{
	struct employee e[10] =
	{
		{1, "홍길동1", 20, "111-1111"},
		{2, "홍길동2", 25, "222-2222"},
		{3, "홍길동3", 60, "333-3333"},
		{4, "홍길동4", 40, "444-4444"},
		{5, "홍길동5", 50, "555-5555"},
		{6, "홍길동6", 45, "666-6666"},
		{7, "홍길동7", 32, "777-7777"},
		{8, "홍길동8", 23, "888-8888"},
		{9, "홍길동9", 29, "999-9999"},
		{10, "홍길동10", 62, "111-1112"},
	};

	for (int i = 0; i < 10; i++)
	{
		if (e[i].age >= 20 && e[i].age <= 30)
		{
			printf("%s의 나이 = %d\n", e[i].name, e[i].age);
		}
	}

	return 0;
}