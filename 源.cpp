//数组名就是数组第一个元素的地址！！！
#include<stdio.h>

int main()
{
	char str[128];

	printf("请输入一串字符：");
	scanf_s("%s", str);

	printf("str的地址是：%p\n", str);
	printf("str的地址是：%p\n", &str[0]);

	return 0;


}