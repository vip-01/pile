#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
//	}
//	int avg = sum / n;
//	return avg;
//}
//
//int main()
//{
//	int n = 3, a = 0;
//	a = avg;
//	printf("这%d个数据的平均值为: %d\n", n, a);
//	return 0;
//}

//void menu()
//{
//	printf("************************\n");
//	printf("** 1. add       2. sub**\n");
//	printf("** 3. mul       4. div**\n");
//	printf("**       0. ext       **\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5](int ,int)
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <=4)
//		{



		/*switch (input)
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y);
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y);
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y);
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	return 0;
}*/

//void menu()
//{
//	printf("************************\n");
//	printf("** 1. add       2. sub**\n");
//	printf("** 3. mul       4. div**\n");
//	printf("** 5. Xor       0. ext**\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//#define MONTHS 12  //12个月份 MONTHS表示数组大小
//
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  //12个月每月有多少天
//	int index;
//
//	for (index = 0; index < MONTHS; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//
//	return 0;
//}
//	
//const int days[MONTHS]  //用const来定也可以

//#define MONTHS 12
//int main(void)
//{
//	const int days[MONTHS]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int ppt;
//
//	for (ppt = 0; ppt < MONTHS; ppt++)
//		printf("Month %2d has %2d days.\n", ppt + 1, days[ppt]);
//	return 0;
//}

//int main(void)
//{
//	int no_data[SIZE];
//	int i;
//
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	return 0;
//}
//九九乘法口诀表
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
//算几个数的平均值
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
//	}
//	int avg = sum / n;
//	return avg;
//}
//
//int main()
//{
//	int n = 3, a=0;
//	a = avg(n);
//	printf("这%d个数据的平均值为: %d\n", n, a);
//	return 0;
//}
//函数
int fun()
{
	int a = 10;
	return a;
}
int main()
{
	int a = 5;
	int b=fun();
	printf("a=%d,b=%d\n", a, b);
	return 0;
}













