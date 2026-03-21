//两种方式
//char str[4] = "abc";
//char* str = "abc";
#include <stdio.h>

int main()
{
	//1.
	char str1[4] = "abc";
	printf("%s\n",str1);

	str1[0] = 'q';
	printf("%s\n", str1);
	//detail1
// 在底层实际存储时，C语言还是会把"abc"转换成字符数组进行保存，结尾加上"、0"
//detail2
//数组长度要么不写，写就要把结束标记的空间预留出来
//detail3
//字符数组加双引号的方式定义字符串，内容是可以发生改变的

	//2.指针＋双引号的方式定义
	char* str2 = "abcd";
	//独有：把底层字符数组放到只读常量区
	//只读常量区特点：
	//	内容不可修改
	//	里面定义的字符串是可以复用的
	str2[0] = 'Q';
	printf("%s\n", str2);

	return 0;
}
