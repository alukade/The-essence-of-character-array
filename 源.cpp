//���������������һ��Ԫ�صĵ�ַ������
#include<stdio.h>

int main()
{
	char str[128];

	printf("������һ���ַ���");
	scanf_s("%s", str);

	printf("str�ĵ�ַ�ǣ�%p\n", str);
	printf("str�ĵ�ַ�ǣ�%p\n", &str[0]);

	return 0;


}