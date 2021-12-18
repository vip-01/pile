#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//#define SOLID 0
//#define DOTTED 1
//#define DASHED 2
////三原色
//#define BLUE 4
//#define GREEN 2
//#define RED 1
////混合色
//#define BLACK 0
//#define YELLOW (RED | GREEN)
//#define MAGENTA (RED | BLUE)
//#define CYAN	(GREEN | BLUE)
//#define WHITE   (RED | GREEN | BLUE)
//
//const char * colors[8] = { "black", "red", "green", "yellow",
//"blue", "magenta", "cyan", "white" };
//
//struct box_props{
//	bool opaque : 1;
//	unsigned int fill_color : 3;
//	unsigned int : 4;
//	bool show_border : 1;
//	unsigned int border_color : 3;
//	unsigned int border_style : 2;
//	unsigned int : 2;
//};
//
//void show_settings(const struct box_props * pb);
//
//int main(void)
//{
//	//创建并初始化BOX——props结构
//	struct box_props box = { true, YELLOW, true, GREEN, DASHED };
//
//	printf("Original box settings:\n");
//	show_settings(&box);
//
//	box.opaque = false;
//	box.fill_color = WHITE;
//	box.border_color = MAGENTA;
//	box.border_style = SOLID;
//	printf("\nModified box settings:\n");
//	show_settings(&box);
//
//	return 0;
//}
//
//void show_settings(const struct box_props * pb)
//{
//	printf("Box is %s.\n",
//		pb->opaque == true ? "opaque" : "transparent");
//	printf("The fill color is %s.\n", colors[pb->fill_color]);
//	printf("Border %s.\n",
//		pb->show_border == true ? "shown" : "not shown");
//	printf("The border color is %s.\n", colors[pb->border_color]);
//	printf("The border style is ");
//	switch (pb->border_style)
//	{
//	case SOLID:  printf("solid.\n"); break;
//	case DOTTED: printf("dotted.\n"); break;
//	case DASHED: printf("dashed.\n"); break;
//	default:	 printf("unknown type.\n");
//	}
//}

//#define SOLID 0
//#define DOTTED 1
//#define DASHED 2
////三原色
//#define BLUE 4
//#define GREEN 2
//#define RED 1
////混合色
//#define BLACK 0
//#define YELLOW (RED | GREEN)
//#define MAGENTA (RED | BLUE)
//#define CYAN	(GREEN | BLUE)
//#define WHITE   (RED | GREEN | BLUE)
//
////按位方法中用到的符号常量
//#define OPAQUE			0x1
//#define FILL_BLUE		0x8
//#define FILL_GREEN		0x4
//#define FILL_RED		0x2
//#define FILL_MASK		0xE
//#define BORDER			0x100
//#define BORDER_BLUE		0x800
//#define BORDER_GREEN	0x400
//#define BORDER_RED		0x200
//#define BORDER_MASK		0xE00
//#define B_SOLID			0
//#define B_DOTTED		0x1000
//#define B_DASHED		0x2000
//#define STYLE_MASK		0x3000
//
//const char * colors[8] = { "black", "red", "green", "yellow", "blue", "magenta",
//"cyan", "while" };
//
//struct box_props{
//
//	bool opaque : 1;
//	unsigned int fill_color : 3;
//	unsigned int : 4;
//	bool show_border : 1;
//	unsigned int border_color : 3;
//	unsigned int border_style : 2;
//	unsigned int : 2;
//};
//
//union Views
//{
//	struct box_props st_view;
//	unsigned short us_view;
//};
//
//void show_settings(const struct box_props_props * pb);
//void show_settings1(unsigned short);
//char * itobs(int n, char * ps);
//
//int main(void)
//{
//	//创建Views联合，并初始化initialize struct box view
//	union Views box = { { true, YELLOW, true, GREEN, DASHED } };
//	char bin_str[8 * sizeof(unsigned int)+1];
//
//	printf("Original box settings:\n");
//	show_settings(&box.st_view);
//	printf("\nBox settings using unsigned int view:\n");
//	show_settings1(box.us_view);
//
//	printf("bits are %s\n",
//		itobs(box.us_view, bin_str));
//	box.us_view &= ~FILL_MASK;
//	box.us_view |= (FILL_BLUE | FILL_GREEN);
//	box.us_view ^= OPAQUE;
//	box.us_view |= BORDER_RED;
//	box.us_view &= ~STYLE_MASK;
//	box.us_view |= B_DOTTED;
//	printf("\nModified box settings:\n");
//	show_settings(&box.st_view);
//	printf("\nBox settings using unsigned int view:\n");
//	show_settings1(box.us_view);
//	printf("bits are %s\n",
//		itobs(box.us_view, bin_str));
//
//	return 0;
//}
//
//void show_settings(const struct box_props * pb)
//{
//	printf("Box is %s.\n",
//		pb->opaque == true ? "opaque" : "transparent");
//	printf("The fill color is %s.\n", colors[pb->border_color]);
//	printf("Border %s.\n",
//		pb->show_border == true ? "shown" : "not shown");
//	printf("The border color is %s.\n", colors[pb->border_color]);
//	printf("The border style is ");
//	switch (pb->border_style)
//	{
//	case SOLID:  printf("solid.\n"); break;
//	case DOTTED: printf("dotted.\n"); break;
//	case DASHED: printf("dashed.\n"); break;
//	defalut:	 printf("unknown type.\n");
//	}
//
//}
//
//void show_settings1(unsigned short us)
//{
//	printf("box is %s.\n",
//		(us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
//	printf("The fill color is %s.\n",
//		colors[(us >> 1) & 07]);
//	printf("The border style is ");
//	switch (us & STYLE_MASK)
//	{
//	case B_SOLID  : printf("solid.\n"); break;
//	case B_DOTTED : printf("dotted.\n"); break;
//	case B_DASHED : printf("dashed.\n"); break;
//	default		  :	printf("unknown type.\n");
//	}
//	printf("The border color is %s.\n",
//		colors[(us >> 9) & 07]);
//}
//
//char * itobs(int n, char * ps)
//{
//	int i;
//	const static int size = CHAR_BIT * sizeof(int);
//
//	for (i = size - 1; i >= 0; i--, n >>= 1)
//		ps[i] = (01 & n) + '0';
//	ps[size] = '\0';
//
//	return ps;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	float score = 0.0;
//	float sum = 0.0;
//	float max = 0.0;
//	float min = 100.00;
//
//	for (i = 0; i<n; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//		if (score >max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f %.2f %.2f\n", max, min, sum / n);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char password1[20] = { 0 };
//	char password2[20] = { 0 };
//	scanf("%s %s", &password1, &password2);
//
//	if (strcmp(password1, password2) == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d %d", &n, &m);
//	//获取n行m列的矩阵
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		int j = 0;
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &num);
//			if (num>0)
//				sum += num;
//		}
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d ", &n);
//		printf("%d ", n);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int positive = 0;
//	int negative = 0;
//
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &num);
//		if (num >= 0)
//			positive++;
//		else
//			negative++;
//	}
//	printf("positive:%d\n", positive);
//	printf("negative:%d\n", negative);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int num;
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int score = 0;
//	int max = 0;
//	int min = 100;
//
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int flag1 = 0;
//	int flag2 = 0;
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i>0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else
//			{
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1 + flag2 == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int del = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i<j; i++)
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
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j<n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				//去重-后边的元素往前覆盖
//				int k = 0;
//				for (k = j; k<n - 1; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
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
//	int m = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[1000] = { 0 };
//
//	scanf("%d %d", &n, &m);
//	//输入两个升序序列
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i<m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并有序序列
//	i = 0;
//	int j = 0;
//	int k = 0;
//	while (i<n && j<m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k++] = arr1[i++];
//		}
//		else
//		{
//			arr3[k++] = arr2[j++];
//		}
//	}
//	if (i == n)
//	{
//		for (; j<m; j++)
//		{
//			arr3[k++] = arr2[j];
//		}
//	}
//	else
//	{
//		for (; i<n; i++)
//		{
//			arr3[k++] = arr1[i];
//		}
//	}
//	for (i = 0; i<k; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	float score[5] = { 0 };
//	for (i = 0; i<5; i++)
//	{
//		//读取一个人的五科成绩
//		int j = 0;
//		float sum = 0;
//		for (j = 0; j<5; j++)
//		{
//			scanf("%f", &score[j]);
//			sum += score[j];
//		}
//		for (j = 0; j<5; j++)
//		{
//			printf("%.1f ", score[j]);
//		}
//		printf("%.1f\n", sum);
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
//	scanf("%d %d", &n, &m);
//	//接收矩阵数据
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//
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
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
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
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int num = 0;
//	int x, y = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &num);
//			if (num > max)
//			{
//				max = num;
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d\n", x + 1, y + 1);
//
//	return 0;
//}

