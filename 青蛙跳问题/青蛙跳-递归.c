//һֻ���ܣ�һ������һ��̨�׻�����̨��
//�ʣ�n��̨���ж���������

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int jump(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", jump(n));
}

int jump(int n)
{
	if (n > 2)
	{
		return jump(n - 1) + jump(n - 2);
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
}