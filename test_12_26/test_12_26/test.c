#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <math.h>
//int max = 0;
//int R(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else if (n % 2 == 0)
//	{
//		n = n / 2;
//		if (n > max)
//		{
//			max = n;
//		}
//		R(n);
//	}
//	else if (n % 2 == 1)
//	{
//		n = (n * 3 + 1);
//		if (max < n)
//		{
//			max = n;
//		}
//		R(n);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	max = n;
//	R(n);
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, a, k, m;
//	for (i = 1; i < 10000; i++)
//	{
//		a = i;
//		a *= a;
//		k = log10(i) + 1;
//		for (m = 1; k; k--)
//			m *= 10;
//		a %= m;
//		if (a == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int avg(int n)
//{
//	int sum = 0;
//	int data;
//	int i = n;
//	printf("请输入%d个数据: \n", n);
//	while (i > 0)
//	{
//		scanf("%d", &data);
//		sum += data;
//		i--;
//		int avg = sum / n;
//		return avg;
//	}
//}
//
//int main()
//{
//	int n = 3, a = 0;
//	a = avg(n);
//	printf("这%d个数据的平均值为: %d\n", n, a);
//	return 0;
//}

//int water = 1;
//void Ffire(int fire)
//{
//	int water = 1;
//	fire -= water;
//}
//void msg(int fire)
//{
//	if (fire == 0)
//		printf("火被扑灭啦! \n");
//	else
//		printf("警报尚未解除! \n");
//}
//int main()
//{
//	int fire = 1;
//	Ffire(fire);
//	printf(""远"救"近火"? ");
//}

//int main()
//{
//	int father = 1;
//	int baby = 2;
//	int *sturoom, *bedroom;
//	int *dd = &father;
//	sturoom = dd;
//	bedroom = &baby;
//	//输出地址
//	printf("爸爸所在的地址为: %x\n", sturoom);
//	printf("宝宝所在的地址为: %x\n", bedroom);
//	//输出变量存储的数值
//	printf("爸爸: %d\n", *sturoom);
//	printf("宝宝: %d\n", *bedroom);
//	return 0;
//}