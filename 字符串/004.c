//字符串常用函数

//strlen：获取字符串的长度
//strcat：拼接两个字符串
//strcpy：复制字符串
//strcmp：比较两个字符串
//strlwr：将字符串变成小写
//strupr：将字符串变成大写
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* str1 = "abc";
	char str2[100] = "abc";
	char str3[5] = {'q','w','e','r','\0'};

	printf("-------------------strlen (长度) --------------------------\n");	//统计长度时不计算结束标记
	//windows中，一个中文占两个字节
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);

	printf("%d\n",len1);
	printf("%d\n", len2);
	printf("%d\n", len3);

	printf("-------------------strcat (拼接) --------------------------\n");	
	//前提：第一个字符串需可以被修改
	//前提二：剩余空间要够
	strcat(str2,str3);
	printf("%s\n",str2);	//abcqwer
	printf("%s\n", str3);	//qwer

	printf("-------------------strcpy (复制) --------------------------\n");	//第二个的内容覆盖第一个
	strcpy(str2,str3);
	printf("%s\n", str2);	//qwer
	printf("%s\n", str3);	//qwer

	printf("-------------------strcmp(比较) --------------------------\n");
	//顺序内容完全一致
	int res = strcmp(str1, str2);	//完全一样：0
	printf("%d\n",res);				//只有一个不一样：非0


	return 0;
}