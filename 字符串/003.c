//定义一个数组，存储五个学生的名字
#include <stdio.h>

int main()
{
	char strArr[5][20] =
	{ "zhangsan",
		"lisi",
		"wangwu",
		"A",
		"B"
	};
	for (int i = 0; i < 5; i++)
	{
		char* str = strArr[i];
		printf("%s\n",str);
	}
	return 0;
}