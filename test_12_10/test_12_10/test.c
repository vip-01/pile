#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//int main()
//{
//	int n = 0;
//	int arr[51] = { 0 };
//	int m = 0;
//	//输入个数
//	scanf("%d", &n);
//	int i = 0;
//	//输入有序的数字
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//输入数据的实现
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	if (i<0)
//	{
//		arr[0] = m;
//	}
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int arr[101];
//		int i = 0;
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		int j = 0;
//		for (j = 2; j <= n; j++)
//		{
//			int k = 0;
//			for (k = j + 1; k <= n; k++)
//			{
//				if (arr[k] % j == 0)
//				{
//					arr[k] = 0;
//				}
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]);
//			else
//				count++;
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2f\n", 100.0*count / (m*n));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char name[100] = { 0 };
//	char password[100] = { 0 };
//
//	while (scanf("%s %s", name, password) != EOF)
//	{
//		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		if (n % 5 == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x<0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d", y);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int m = i;
//		while (m)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			m /= 10;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int odd = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//			odd++;
//	}
//	printf("%d %d\n", odd, n - odd);
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//};
//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', { 55.6, 30 }, 100, 3.14, "hello bit" };
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}

//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s3));
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//
//	return 0;
//}

struct S 
{
	char c1;
	double d;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));

	return 0;
}