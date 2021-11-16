#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
//	int i;
//	
//	for (i = 0; i < MONTHS; i++)
//		printf("%2d %d\n", i + 1, days[i]);
//
//	return 0;
//}

//#define SIZE 4
//int mian(void)
//{
//	int value1 = 44;
//	int arr[SIZE];
//	int value2 = 88;
//	int i;
//
//	printf("valuel = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= SIZE; i++)
//		arr[i] = 2 * i + 1;
//
//	for (i = -1; i < 7; i++)
//		printf("%2d %d\n", i, arr[i]);
//		printf("valuel = %d, value2 = %d\n", value1, value2);
//		printf("address of arr[-1]: %p\n", &arr[-1]);
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//#define SIZE 4
//int main(void)
//{
//	int value1 = 44;
//	int arr[SIZE];
//	int value2 = 88;
//	int i;
//
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= SIZE; i++)
//		arr[i] = 2 * i + 1;
//
//	for (i = -1; i < 7; i++)
//		printf("%2d %d\n", i, arr[i]);
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	printf("address of arr[-1]: %p\n", &arr[-1]);
//	printf("address of arr[4]: %p\n", &arr[4]);
//	printf("address of value1: %p\n", &value1);
//	printf("address of value2: %p\n", &value2);
//
//	return 0;
//}

//计算每年的总降水量数据
//#define MONTHS 12
//#define YEARS 5
//int main(void)
//{
//	//用2010~2014年的降水量数据初始化数组
//	const float rain[YEARS][MONTHS] =
//	{
//		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
//		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
//	};
//	int year, month;
//	float subtot, total;
//
//	printf(" YEAR    RAINFALL  (inches)\n");
//	for (year = 0, total = 0; year < YEARS; year++) //处理每一年的数据
//	{
//		for (month = 0, subtot = 0; month < MONTHS; month++)  //处理每月的数据
//			subtot += rain[year][month];
//		printf("%5d %15.lf\n", 2010 + year, subtot);
//		total += subtot;  //5年的总降水量
//	}
//	printf("\nThe yearly average is %.lf inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//	printf(" Nov Dec\n");
//
//	for (month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0; year < YEARS; year++)
//			subtot += rain[year][month];
//		printf("%4.lf ", subtot / YEARS);
//	}
//	printf("\n");
//
//	return 0;
//}

//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE];
//	short * pti;
//	short index;
//	double bills[SIZE];
//	double * ptf;
//	pti = dates;
//	ptf = bills;
//	printf("%23s %15s\n", "short", "double");
//	for (index = 0; index < SIZE; index++)
//		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
//	return 0;
//	//结果：
//	//                  short          double
//	//pointers + 0:   003AFD00   003AFCC0
//  //pointers + 1 : 003AFD02   003AFCC8
//	//pointers + 2 : 003AFD04   003AFCD0
//	//pointers + 3 : 003AFD06   003AFCD8
//}

//#define MONTHS 12
//
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //一年每月的天数
//	int index;
//
//	for (index = 0; index < MONTHS; index++)
//		printf("Month %2d has %d days.\n", index + 1,
//		*(days + index));  //与days[index]相同
//
//	return 0;
//}


//函数，数组和指针
//int sum(int * ar) //相应的函数定义
//{
//	int i;
//	int total = 0;
//
//	for (i = 0; i < 10; i++)  //使用n个元素
//		total += ar[i];       //ar[i]和a(ar + i)相同
// 	return total;
//}

//int sum(int * ar, int n)  //更通用的方法
//{
//	int i;
//	int total = 0;
//
//	for (i = 0; i < n; i++)  //使用n个元素
//		total += ar[i];		//ar[i] 和 *(ar + i) 相同 
//	return total;
//}

//数组元素之和
//#define SIZE 10
//int sum(int ar[], int n);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
//	long answer;
//
//	answer = sum(marbles, SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n",
//		sizeof marbles);
//
//	return 0;
//}
//
//int sum(int ar[], int n)  //这个数组的大小时？
//{
//	int i;
//	int total = 0;
//
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	printf("The size of ar is %zd bytes.\n", sizeof ar);
//
//	return total;
//}

#define SIZE 10
int sump(int * start, int * end);
int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sump(marbles, marbles + SIZE);
	printf("The total number of marbles is %ld.\n", answer);

	return 0;
}
















