//一只青蛙，一次能跳一个台阶、两个台阶或m阶（m<n）
//问：n阶台阶有多少种跳法

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int jump(int n,int m);
int main()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	printf("%d", jump(n, m));
}

int jump(int n, int m)
{
	if (n > 2)
	{
		return ;
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