#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	int i, j,t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10; i++);
//		for (j = 1; j < 11 - i;j++)
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//			printf("排序后的顺序是: \n");
//			for (i = 1; i <= 10; i++)
//				printf("%5d", a[i]);
//			printf("\n");
//		return 0;
//}

//int main()
//{
//	int a, b, c, m, t;
//	printf("请输入两个数:\n");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	m = a*b;
//	c = a%b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a%b;
//	}
//	printf("最大公约数是:\n%d\n", b);
//	printf("最小公倍数是:\n%d\n", m / b);
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%D", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//4
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//5
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//6
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//7
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//9
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//10
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//11
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}

//12
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("请输入一个整数:\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100 * a + 10 * b + c);
//	return 0;
//}


//三个数升序排列
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//3
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//4
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//5
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = c;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = c;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//7
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = c;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

////8
//int main()
//{
//	int a, b, c, t;
//	printf("Please input a,b,c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i, j, t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10;i++)
//		for (j = 1; j < 11 - i;j++)
//			if (a[j]>a[j + 1]);
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//			printf("排序后的顺序是: \n");
//			for (i = 1; i <= 10; i++)
//				printf("%5d", a[i]);
//		printf("\n");
//	return 0;
//}



