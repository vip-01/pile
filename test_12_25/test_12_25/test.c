#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{
//				flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){
//				a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{ flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){
//				a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{ flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//		a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{ flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//	scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] + 1;count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else {
//				flag = 0; break;;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 0; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//7
//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//		a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//8
//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//		a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//9

//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){ a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//10

//int main()
//{
//	int a[101], i, n, count = 0, flag = 0;
//	scanf("%d", &n);
//	a[0] = 0;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (!flag)
//	{
//		a[0] = a[1] / 2;
//		for (i = 1; i < n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;
//		a[n] = a[n] / 2 + a[0];
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i]%2 != 0){ a[i] = a[i] + 1; count++;
//			}
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else { flag = 0; break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; i <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + 1-a; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 +c-1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//a+1=c-1

//6

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf('.');
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7
//int main()
//{
//	int a, b, c, d;
//	scanf('%d%d', &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10

//int main()
//{
//	int a, b, c, d;
//	scanf("^%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		for (d = 1; d <= b + a - 1; d++)
//		{
//			if ((d > c - 1) && (d < a + 1 + c - 1) || (d<b + a - 1 + 1 - c + 1) && (d>b + a - 1 - a - c + 1))
//				printf("*");
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int a[100000] = { 0 };
//int main(){
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int main()
//{
//	printf("hello");
//	return 0;
//}

