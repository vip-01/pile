#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>


//int gcd(int n1, int n2)
//{
//	if (n2 == 0)
//		return n1;
//	return gcd(n2, n1%n2);
//}
//int lcm3(int a, int b, int c)
//{
//	int temp = a*b / gcd(a, b);
//	return temp*c / gcd(temp, c);
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", lcm3(a, b, c));
//	return 0;
//}

//int gcd(int n1, int n2)
//{
//	if (n2 == 0)
//		return n1;
//	return gc(n2, n1%n2);
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;;i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//const int N = 1e6 + 10, mod = 1e9 + 7;
//typedef long long ll;
//ll f[N], res;
//int n;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++) f[i] = i;
//	for (int i = n - 1, k = 1; i >= 1; i--, k++){
//		res = (res + (ll)pow(i, 2) * f[k]) % mod;
//	}
//	printf("%lld", res);
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 0; i <= n;i++)
//	for (j = 0; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '.';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c" a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m - m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '+', a[j][i] = '+';
//		for (i = 1 + m * 2 + 1; i <= n - (2*m+1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char[130][130];
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//}

//int main()
//{
//	int m, i, j, n, k;
//	scanf("%d", &n);
//	k = n;
//	n = n * 4 + 5;
//	char a[130][130];
//	for (i = 1; i <= n; i++)
//	for (j = 1; j <= n; j++)
//	{
//		a[i][j] = '.';
//	}
//	for (m = 1; m <= (k + 1); m++){
//		for (i = m * 2 + 1; i <= n - m * 2;i++)
//		for (j = 1 + m * 2 - 2; j <= n - (m * 2 - 2); j++)
//			a[i][j] = '$', a[j][i] = '$';
//		for (i = 1 + m * 2 + 1; i <= n - (2 * m + 1);i++)
//		for (j = m * 2; j <= n - (m * 2 - 1); j++)
//			a[i][j] = '.', a[j][i] = '.';
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[101], n, i, count = 0,flag = 0;
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
//				a[i] + 1; count++;
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

//#include<stdio.h>
//int main()
//{
//	int a[101], n, i, count = 0, flag = 0;//定义数组，用来储存小朋友的糖数，count定义为老师需要补发的糖数，初始为0，flag为判断是否所有小朋友糖数都相等的标志。 
//	scanf("%d", &n);//输入N，小朋友的个数。 
//	a[0] = 0;//把a[0]定义为一个类似于缓冲区的东西，用于暂时的存放数据。 
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);//为方便起见，把a[i]直接就看成第i个小朋友 。 
//	while (!flag)//flag初始为0，即现在每人糖数不相等，需要进行以下操作进行重新分配。（即使现在糖数相同时 以下的操作也不影响目前的每个人的糖数，因为在每人都相等的情况下，无论进行多少次分配都不会改变数据。） 
//	{
//		a[0] = a[1] / 2;//缓冲区存放第一个小朋友的 
//		for (i = 1; i<n; i++)
//			a[i] = a[i] / 2 + a[i + 1] / 2;//用循环语句，依次将前n-1个小朋友的糖果传一半给前一个人 
//		a[n] = a[n] / 2 + a[0];//由于大家坐成一个圈，所以第n个小朋友把自己的一半去掉之后同时又得到第一个小朋友糖数的一半（即缓冲区的数目） 
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] % 2 != 0){
//				a[i] = a[i] + 1; count++;
//			}
//		}                   //用一个循环一次检查是否是奇数，并同时统计老师补发糖的数量。 
//		for (i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//				flag = 1;
//			else{
//				flag = 0; break;
//			}
//		}                   //判断是否每个人糖数是否相等，如果糖数都相等，flag=1，此时while(!flag）跳出循环，游戏结束。如果糖数不相等，继续游戏。 
//	}
//	printf("%d", count);
//	return 0;
//}


int main()
{
	int a[101], n, i, count = 0, flag = 0;
	scanf("%d", &n);
	a[0] = 0;
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	while (!flag)
	{
		a[0] = a[1] / 2;
		for (i = 1; i < n; i++)
			a[i] = a[i] / 2 + a[i + 1] / 2;
		a[n] = a[n] / 2 + a[0];
		for (i = 1; i <= n; i++)
		{
			if (a[i] % 2 != 0){ a[i]=a[i] + 1; count++;
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] == a[1])
				flag = 1;
			else { flag = 0; break;
			}
		}
	}
	printf("%d", count);
	return 0;
}