#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <=i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n+1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n + 1 - i;  j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
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
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
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
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
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
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == 0 || i == n - 1)
//					printf("* ");
//				else if (j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
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
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == n - 1 || j == 0 || i == j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	float hi = 0.0;
//	float sum = 0.0;
//	for (i = 0; i<5; i++)
//	{
//		scanf("%f", &hi);
//		sum += hi;
//	}
//	printf("%.2f\n", sum / 5.0);
//
//	return 0;
//}


//int main(void)
//{
//	int uchida;
//	int satoh;
//	int sanaka;
//	int hiraki;
//	int masaki;
//	int sum = 0;
//
//	puts("请输入分数。");
//	printf("1号:");		scanf("%d", &uchida);
//	printf("2号:");		scanf("%d", &satoh);
//	printf("3号:");		scanf("%d", &sanaka);
//	printf("4号:");		scanf("%d", &hiraki);
//	printf("5号:");		scanf("%d", &masaki);
//
//	sum += uchida;
//	sum += satoh;
//	sum += sanaka;
//	sum += hiraki;
//	sum += masaki;
//
//	printf("总分:%5d\n", sum);
//	printf("平均分:%5.1f\n", (double)sum / 5);
//
//	return 0;
//}


//int main(void)
//{
//	int vc[5];
//
//	vc[0] = 1;
//	vc[1] = 2;
//	vc[2] = 3;
//	vc[3] = 4;
//	vc[4] = 5;
//
//	printf("vc[0] = %d\n", vc[0]);
//	printf("vc[1] = %d\n", vc[1]);
//	printf("vc[2] = %d\n", vc[2]);
//	printf("vc[3] = %d\n", vc[3]);
//	printf("vc[4] = %d\n", vc[4]);
//
//	return 0;
//
//}

//int main(void)
//{
//	int i;
//	int vc[5];
//
//	for (i = 0; i < 5; i++)
//		vc[i] = i + 1;
//
//	for (i = 0; i < 5; i++)
//		printf("vc[%d] = %d\n", i, vc[i]);
//	return 0;
//}


//int main(void)
//{
//	int i;
//	double vd[5];
//
//	for (i = 0; i < 5; i++)
//		vd[i] = i + 1;
//
//	for (i = 4; i >= 0; i--)
//		printf("vd[%d] = %.1f\n", i, vd[i]);
//
//	return 0;
//}

//int main(void)
//{
//	int i;
//	int vc[5] = { 1, 2, 3, 4, 5 };
//
//	for (i = 0; i < 5; i++)
//		printf("vc[%d] = %d\n", i, vc[i]);
//
//	return 0;
//}

//通过数组初始化的作用来打印数字

//int main(void)
//{
//	int i;
//	int va[5] = { 15, 20, 30 };
//	int vb[5];
//
//	for (i = 0; i < 5; i++)
//		vb[i] = va[i] + 1;
//
//	puts(" va vb");
//	puts("-------");
//	for (i = 4; i >= 5; i--)
//		printf("%3d%3d\n", va[i], vb[i]);
//
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	int vx[5];
//
//	for (i = 0; i < 5; i++){
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("vx[%d]=%d\n", i, vx[i]);
//
//	return 0;
//}

//int main(void)
//{
//	int i;
//	int vx[5];
//
//	for (i = 0; i < 5; i++){
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//
//	for (i = 0; i < 2; i++){
//		int temp = vx[i];
//		vx[i] = vx[4 - i];
//		vx[4 - i] = temp;
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("vx[%d]=%d\n", i, vx[i]);
//
//	return 0;
//}

//int main()
//{
//	int state = 0;
//	while (~scanf("%d", &state))
//	{
//		switch (state)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
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
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int score = 0;
	int i = 0;
	int sum = 0;
	int max = 0;
	int min = 100;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &score);
		sum += score;
		if (score > max)
			max = score;
		if (score < min)
			min = score;
	}
	printf("%.2f\n", (sum - max - min) / 5.0);

	return 0;
}