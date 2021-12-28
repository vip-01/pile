#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <iostream>
using namespace std;

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	int i = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j  << " * " << i << " = " << j*i << "  ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	cout << "请选择副本难度" << endl;
//	cout << "1、普通" << endl;
//	cout << "2、中等" << endl;
//	cout << "3、困难" << endl;
//
//	int select = 0;
//
//	cin >> select; //等待用户输入
//
//	switch (select)
//	{
//	case 1:
//		cout << "您选择的是普通难度" << endl;
//		break;
//	case 2:
//		cout << "您选择的是中等难度" << endl;
//		break;
//	case 3:
//		cout << "您选择的是普通难度" << endl;
//		break;
//	default:
//		break;
//	}
//}

//如果是奇数就输出，偶数不输出
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue; //可以筛选条件，执行到这就不再向下执行，执行下一次的循环
//		}
//		cout << i << endl;
//	}
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	cout << "整个数组占用内存空间为: " << sizeof(arr) << endl;
//	cout << "每个元素占用内存空间为: " << sizeof(arr[0]) << endl;
//	cout << "数组的元素个数有: " << sizeof(arr) / sizeof(arr[0]) << endl;
//}