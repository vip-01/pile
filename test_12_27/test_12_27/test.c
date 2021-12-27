#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	int i, j, t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10;i++)
//		for (j = 1; j < 11 - i;j++)
//			if (a[j]>a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//			printf("排序后的顺序是: \n");
//			for (i = 1; i <= 10; i++)
//				printf("%5d", a[i]);
//			printf("\n");
//			return 0;
//}

//int main()
//{
//	int i, j, t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10;i++)
//		for (j = 1; j < 11 - i;j++)
//			if (a[j] >a[j + 1]);
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

//int main()
//{
//	int i, j, t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10;i++)
//	for (j = 1; j < 11 - i;j++)
//	if (a[j] > a[j + 1])
//	{
//		t = a[j];
//		a[j] = a[j + 1];
//		a[j + 1] = t;
//	}
//	printf("排序后的顺序是: \n");
//	for (i = 1; i <= 10; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i, j, t, a[11];
//	printf("请输入10个数: \n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < 10;i++)
//	for (j = 1; j < 11 - i;j++)
//	if (a[j]>a[j + 1])
//	{
//		t = a[j];
//		a[j] = a[j + 1];
//		a[j + 1] = t;
//	}
//	printf("排序后的顺序是: \n");
//	for (i = 1; i <= 10; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else {
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i / = 2;
//			}	
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//9

//int main()
//{
//	long long i, n, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = 0;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0; 
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
//	printf("最小公约数是:\n%d\n", b);
//	printf("最小公倍数是:\n%d\n", m / b);
//}