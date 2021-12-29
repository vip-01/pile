#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	int n;
//	int count = 1;
//	printf("Please input a number: ");
//	scanf("%d", &n);
//	do{
//		if (n % 2)
//		{
//			n = n * 3 + 1;
//			printf("(%d):%d\n", count++, n);
//		}
//		else
//		{
//			n /= 2;
//			printf("(%d):%d\n", count++, n);
//		}
//	} while (n != 1);
//	return 0;
//}

//int main()
//{
//	int n;
//	int count = 1;
//	printf("Please input a number: ");
//	scanf("%d", &n);
//	do{
//		if (n % 2)
//		{
//			n = n * 3 + 1;
//			printf("(%d):%d\n", count++, n);
//		}
//		else
//		{
//			n /= 2;
//			printf("(%d):%d\n", count++, n);
//		}
//	} while (n != 1);
//	return 0;
//}

//int main()
//{
//	int num;
//	int a, b, c;
//	printf("水仙花数: \n");
//	for (num = 100; num <= 999; num++)
//	{
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		if (num == (a*a*a + b*b*b + c*c*c))
//			printf("%d ", num);
//	}
//	printf("\n");
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
//
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

//3
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

//4
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

//5
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

//7
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

//8
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

//int maini()
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
//	printf("***\n");
//	printf(" *\n");
//	printf(" * \n");
//	printf(" ****\n");
//
//	return 0;
//}

//int main()
//{
//	system("color 1F");
//	system("mode con cols=80 lines=30");
//	printf("")
//}

//int main()  {
//	system("mode con cols=80 lines=30");  //固定显示框尺寸
//	
//	printf("         * * \n");
//	printf("       *     * \n");
//	printf("      *       * \n");
//	printf("     *\n");
//	printf("    *\n");
//	printf("    *\n");
//	printf("    *\n");
//	printf("    *\n");
//	printf("    *\n");
//	printf("     *\n");
//	printf("      *       *\n");
//	printf("       *    *\n");
//	printf("        * *\n");
//
//	return 0;
//}

//int main()
//{
//	int i, odd = 0, even = 0;
//	for (i = 0; i <= 100; i++)
//	if (i % 2 == 0)
//	{
//		even+=i;
//	}
//	else
//	{
//		odd += i;
//	}
//	printf("奇数之和是：%d\n", odd);
//	return 0;
//}


//void main()
//{
//	int i, s = 0;
//	for (i = 0; i <= 100; i += 2)
//	s += i;
//	printf("奇数和为：%d", s);
//}


//#include<stdio.h>
////100以内的奇数之和
//int main()
//{
//	int i, s = 0;
//	for (i = 1; i<100; i += 2)
//		s += i;
//	printf("奇数和=%d\n", s);
//	getch();
//
//	return 0;
//
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
//	int i, j = 0;
//	for (i = 1; i <= 100; i+=2)
//		j += i;
//	printf("奇数和=%d\n", j);
//	getch();
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数和=%d\n", j);
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数和是%d\n", j);
//	return 0;
//}

//4
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数和是:%d\n", j);
//	return 0;
//}

//5
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数和是:%d\n", j);
//	return 0;
//}

//6
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i+=2)
//		j += i;
//	printf("奇数和是:%d\n", j);
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数和是:%d\n", j);
//	return 0;
//}

//8
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i++)
//		j += i;
//		printf("奇数和是:%d\n", j);
//	return 0;
//}

//9
//int main()
//{
//	int a, b = 0;
//	for (a = 1; a <= 100; a += 2)
//		b += a;
//	printf("奇数和是:%d\n", b);
//	return 0;
//}

//10
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//		printf("奇数和是:%d\n", j);
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
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("奇数的和是:%d\n", j);
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 100; i += 2)
//		j += i;
//	printf("%d\n", j);
//	return 0;
//}

//#include <stdio.h>
//void area()
//{
//	double r, s, p = 3.14;
//
//	printf("请输入半径:");
//	scanf("%lf", &r);
//	s = r*r*p;
//	printf("面积为%0.2lf", s);
//
//}
//
//int main()
//{
//	area();
//
//	return 0;
//}


//void area()
//{
//	double r, s, p = 3.14;
//	printf("请输入半径:");
//	scanf("%lf", &r);
//	s = r*r*p;
//	printf("面积为%0.2lf", s);
//
//}
//
//int main()
//{
//	area();
//	return 0;
//}

//void area()
//{
//	double r, s, p = 3.14;
//	printf("请输入半径:");
//	scanf("%lf", &r);
//	s = r*r*p;
//	printf("面积为:%0.2lf", s);
//
//}
//
//int main()
//{
//	area();
//	return 0;
//}

//void area()
//{
//	double r, s, p = 3.14;
//	printf("请输入半径:");
//	scanf("%lf", &r);
//	s = r*r*p;
//	printf("面积是:%0.2lf", s);
//}
//int main()
//{
//	area();
//	return 0;
//}

//void area()
//{
//	double s, r, p = 3.14;
//	printf("请输入一个半径:");
//	scanf("%lf", &r);
//	s = r*r*p;
//	printf("面积是:%0.2lf", s);
//}
//
//int main()
//{
//	area();
//	return 0;
//}

//#define size 5
//void main()
//{
//	int a[size] = { 4, 6, 3, 9, 23 };
//	int max, p, i;
//	for (i = 0)
//}

//int main()
//{
//	int a[5], i, j = 0;
//	printf("请输入5个数\n");
//	for (i = 0; i<5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i<5; i++)
//	{
//		if (a[i]>a[j])
//			j = i;
//	}
//
//	printf("最大数:%d\n", a[j]);
//	printf("位置是:%d", j + 1);
//
//	return 0;
//
//}

//int main()
//{
//	int a[5], i, j = 0;
//	printf("请输入5个数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//	{
//		if (a[i]>a[j])
//			j = i
//	}
//	printf("最大数:%d\n", a[j]);
//	printf("位置是:%d\n", j + 1);
//	return 0;
//}

//int main()
//{
//	int a[5], i, j=0;
//	printf("请输入5个数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//	{
//		if (a[i]>a[j])
//			j = i;
//	}
//	printf("最大数是:%d\n", a[j]);
//	printf("位置是:%d\n", j + 1);
//	return 0;
//}

//int main()
//{
//	int a[5], i, j = 0;
//	printf("请输入5个数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//	{
//		if (a[i]>a[j])
//			j = i;
//	}
//	printf("最大数:%d\n", a[j]);
//	printf("位置是:%d\n", j + 1);
//	return 0;
//}

//int main()
//{
//	int a[5], i, j = 0;
//	printf("请输入5个数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//	{
//		if (a[i]>a[j]);
//		j = i;
//	}
//	printf("最大数:%d\n", a[j]);
//	printf("位置是:%d\n", j + 1);
//	return 0;
//
//}

//int main()
//{
//	int a, b = 0;
//	for (a = 1; a < 100; a+=2)
//		b += a;
//	printf("奇数和是:%d\n", b);
//	getch();
//	return 0;
//}

//void area()
//{
//	float a, b,c = 3.14;
//	printf("请输入半径:");
//	scanf("%f", &a);
//	b = a*a*c;
//	printf("面积是%0.2f", b);
//}
//int main()
//{
//	area();
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

