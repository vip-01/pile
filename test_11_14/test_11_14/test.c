#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//二维数组传参
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])  //二维数组可以省略行，不可以省略列
//{}
//void test2(int arr[3][5])  
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	return 0;
//}

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//
//	int (*pa)(int, int) = Add;
//	return 0;
//}

//void Print(char*str)
//{
//	printf("%s\n", str);  //str是打印所要对应的量
//}
//
//int main()
//{
//	void(*p)(char*) = Print;  //对应上面的类型 *p是指针变量，char*是函数指针
//	(*p)("hello bit");   //调用*p这个指针 调到上面打印
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	//指针数组
	//int* arr[5];
	//需要一个数组，这个数组可以存放4个函数的地址  - 函数指针的数组
	int (*pa)(int, int) = Add;  //也可以存Sub/Mul/Div

	int(*parr[4])(int, int) = { Add, Sub, Mul, Div }; //函数指针的数组

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3)); //结果为：5 -1 6 0
	}

	return 0;
}









