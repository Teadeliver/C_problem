//一只青蛙，一次能跳一个台阶或两个台阶
//问：n阶台阶有多少种跳法

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