#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	//第二哥矩阵的数据
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("No\n");
//				return 0;
//			}
//		}
//	}
//	printf("Yes\n");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (i>j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int k = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);
//	char t = 0;
//	int a = 0;
//	int b = 0;
//
//	for (i = 0; i<k; i++)
//	{
//		scanf(" %c %d %d", &t, &a, &b);
//		if (t == 'r')
//		{
//			for (j = 0; j<m; j++)
//			{
//				int tmp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = tmp;
//			}
//		}
//		else if (t == 'c')
//		{
//			for (j = 0; j<n; j++)
//			{
//				int tmp = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[30][30] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//
//if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//
//if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')

//#include <stdio.h>
//
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<3; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	char flag = 'O';
//	for (i = 0; i<3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//		{
//			flag = arr[i][1];
//			break;
//		}
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//		{
//			flag = arr[1][i];
//			break;
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//	{
//		flag = arr[1][1];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
//	{
//		flag = arr[1][1];
//	}
//
//	if (flag == 'K')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (flag == 'B')
//	{
//		printf("BoBo wins!\n");
//	}
//	else
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//向动态内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno)); //strerror函数加上errno来显示报错内容
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当前动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);  //不用了就把p彻底断开，p还完之后所在的值没变，还能再找到
//	p = NULL; //以免发生错误，直接赋为空指针NULL；
//	return 0;
//}
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//free函数是用来释放动态内存开辟的空间
//	free(p);
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	// 3. 得用一个新的变量来接受realloc函数的返回值
//
//	int* ptr = realloc(p, INT_MAX);
//	
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	return 0;
//}

//void int_set(int vc[], int no)
//{
//	int i;
//
//	for (i = 0; i < no; i++)
//		vc[i] = 0;
//}
//
//int main(void)
//{
//	int i;
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 3, 2, 1 };
//
//	int_set(arr1, 5);
//	int_set(arr2, 3);
//
//	for (i = 0; i < 5; i++)		printf("arr1[%d] = %d\n", i, arr1[i]);
//	for (i = 0; i < 3; i++)		printf("arr2[%d] = %d\n", i, arr2[i]);
//
//	return 0;
//}

//int max_of(const int vc[], int no)
//{
//	int i;
//	int max = vc[0];
//	for (i = 0; i < no; i++)
//		if (vc[i] > max)
//			max = vc[i];
//		return (max);
//}


//#define NUMBER 5
//#define FAILED -1
//
//int search(const int vc[], int key, int no)
//{
//	int i = 0;
//
//	while (1){
//		if (i == no)
//			return (FAILED);
//		if (vc[i] == key)
//			return (i);
//		i++;
//	}
//}
//
//int main(void)
//{
//	int i, ky, idx;
//	int vx[NUMBER];
//
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//	printf("要查找的值:");
//	scanf("%d", &ky);
//
//	idx = search(vx, ky, NUMBER);
//
//	if (idx == FAILED)
//		puts("\a查找失败。");
//	else
//		printf("%d是数组的第%d号元素。\n", ky, idx + 1);
//
//	return (0);
//}

//int search(int vc[], int key, int no)
//{
//	int i;
//
//	vc[no] = key;
//
//	for (i = 0; vc[i] != key; i++)
//		;
//	return (i == no ? FAILED : i);
//}

//void mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3])
//{
//	int i, j;
//
//	for (i = 0; i < 2;i++)
//		for (j = 0; j < 3; j++)
//			mc[i][j] = ma[i][j] + mb[i][j];
//}
//
//int main(void)
//{
//	int i, j;
//	int ma[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int mb[2][3] = { { 6, 3, 4 }, { 5, 1, 2 } };
//	int mc[2][3] = { 0 };
//
//	mat_add(ma, mb, mc);
//
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 3; j++)
//			printf("%3d", mc[i][j]);
//		putchar('\n');
//	}
//	return 0;
//}

//int x = 700;
//
//void print_x(void)
//{
//	printf("x = %d\n", x);
//}
//
//int main(void)
//{
//	int i;
//	int x = 800;
//
//	print_x();
//
//	printf("x = %d\n", x);
//
//	for (i = 0; i < 5; i++){
//		int x = i * 100;
//		printf("x = %d\n", x);
//	}
//
//	printf("x = %d\n", x);
//
//		return 0;
//}

//#define SUM(x,y) x+y
//
//int main()
//{
//	int a = 3;
//	int b = 3;
//	a += a*SUM(a, b)*b;
//	return 0;
//}

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world"); //程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄露的问题
//str以值传递的形式给p，p是GetMemory函数的形参，只能
//函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放
//并且无法找到，所以会造成内存泄露