#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
////加上#，这样就能把a 和b这两个字母放在引号里面，并且打印出a=10；b=20；
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//
//	return 0;
//}

//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);  使用这个##它可以把字符串一起串起来
//	//printf("%d\n", Class84);    等价于这个
//	return 0;                    //结果为2019；
//}

//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	printf("MAX = %d\n", MAX);
//
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//#if 1==1
//	printf("haha\n");  //满足条件就打印，后面得就不执行了
//#elif 2==1
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
//#ifdef DEBUG   //定义了DEBUG就打印
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//int main()
//{
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
//#if !defined(DEBUG)  //定义了DEBUG程序就为假，没有打印
//	printf("hehe\n"); //没有定义则打印hehe
//#endif
//	return 0;
//}

//int main()
//{
//#if defined(os_UNIX)
//#ifdef IPTION
//}

//#ifndef __TEST_H__  //防止代码被重复包含；现在已经定义了#ifndef
//#define __TEST_H__
//
//int Add(int x, int y);
//
//#endif

//#include <stddef.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
////int那一段就被替换成了这个 (int)&(((structS*)0)->c1)  
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//
//	return 0;
//}

//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//int n, m, res;
//
//bool findres(int i, int n, int m)
//{
//	if (i == 0)return true;
//	if (i > n&&findres(i - n, n, m))return true;
//	if (i > m&&findres(i - m, n, m))return true;
//	return false;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= 500; i++)
//	{
//		if (!findres(i, n, m))res = i;
//	}
//	printf("%d", res);
//	return 0;
//}

//#include <iostream>
//
////给定一个m，是否能用p和q凑出来
//bool dfs(int m, int p, int q)
//{
//	if (m == 0) return true;
//
//	if (m >= p && dfs(m - p, p, q)) return true;
//	if (m >= q && dfs(m - q, p, q)) return true;
//
//	return false;
//}
//
//int main()
//{
//	int p, q;
//	cin >> p >> q;
//	int res = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (!dfs(i, p, q)) res = i;
//	}
//
//	cout << res << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int p, q;
//	cin >> p >> q;
//	cout << (p - 1) * (q - 1) - 1 << end1;
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int i, j, k;
//	int l;
//	int p = 0;
//	scanf("%d%d", &a, &b);
//	for (i = a*b; i > 0; i--)
//	{
//		l = 0;
//		for (j = 0; j <= i / a; j++)
//		{
//			for (k = 0; k <= i / b;k++)
//			if ((j != 0 || k != 0) && j*a + k*b == i)
//			{
//				l = 1;
//				break;
//			}
//			if (l == 1)
//				break;
//		}
//		if (l == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//}

//int main()
//{
//	int a, b;
//	while (~scanf("%d%d", &a, &b))
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}


//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (~scanf("%d%d", &a, &b))
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b))
//	{
//		printf("%d\n", a*b - a - b);
//	}
//	return 0;
//}

