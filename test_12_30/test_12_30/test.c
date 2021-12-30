#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//#define size 5
//int main()
//{
//	int a[size] = { 4, 6, 8, 9, 2 };
//	int i, j = 0;
//	printf("请输入5个数\n");
//	for (i = 0; i<5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i<5; i++)
//	{
//		if (a[i]>a[j])
//			j = i;
//	}
//
//	printf("最大元素%d\n", a[j]);
//	printf("下标是%d", j);
//
//	return 0;
//
//}

//#define size 5
//#include <stdio.h>
//int main()
//{
//	int a[size] = { 3, 5, 7, 2, 9 };
//	int i, j = 0;
//	for (i = 0; i<5; i++)
//	{
//		if (a[i]>a[j])
//			j = i;
//	}
//
//	printf("最大元素是%d\n", a[j]);
//	printf("下标为%d", j);
//
//	return 0;
//}

//#include <stdio.h>
//void area()
//{
//	float r, s, p = 3.14;
//
//	printf("请输入半径:");
//	scanf("%f", &r);
//	s = r*r*p;
//	printf("面积为%0.2f", s);
//
//}
//
//int main()
//{
//	area();
//
//	return 0;
//}


//int main()
//{
//	int year, month, day;
//	int s = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	printf("输入的年份是:%d ",year);
//	printf("输入的月份是:%d ",month);
//	printf("输入的日期是:%d ",day);
//	switch (month)
//	{
//	case 12: s += 30;
//	case 11: s += 31;
//	case 10: s += 30;
//	case 9:  s += 31;
//	case 8:  s += 31;
//	case 7:  s += 30;
//	case 6:  s += 31;
//	case 5:  s += 30;
//	case 4:  s += 31;
//	case 3:  s += 28;
//	case 2:  s += 31;
//	case 1:  s += day;
//	}
//	if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month >= 3)
//		s++;
//	printf("第%d天\n", s);
//	return 0;
//}




