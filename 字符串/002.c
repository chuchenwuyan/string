//键盘录入字符串，在控制台遍历
#include <stdio.h>

int main()
{
	char str[100];
	//char* str;	这样写就会报错
	//char* str = NULL；	不报错
	//但char* str是只读常量区，不能键盘录入

	printf("请录入\n");
	scanf("%[^\n]",str);	//可以不写&
	char* p = str;
	//遍历
	while (1)
	{
		char c = *p;
		if (c == '\0')
		{
			break;
		}
		printf("%c\n",c);
		p++;
	}
	return 0;
}