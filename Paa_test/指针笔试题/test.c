#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//指针笔试题1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//	//2,5
//}

////指针笔试题2
////结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	//1048576+1 = 10485767；unsigned long，p就是1048576，加上1变成10485767
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004，在1048576加1跳一个无符号整型变成00100004 由0x100000替换
//	return 0;
//}

////指针笔试题3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//	//结果：4,2000000
//	//在内存中ptr[-1]往前减1取整为4；ptr2强制类型转换为整型，加1就是首元素加1变成2此时在内存
//	//中的显示为00000002 打印为倒的2000000
//}

//指针笔试题4
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//数组里的逗号表达式，其实就是1，3，5
//	int *p;
//	p = a[0];//就是取首元素地址 1
//	printf("%d", p[0]);
//	return 0;
//}

//指针笔试题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//	//FFFFFFFC,-4
//}

//指针笔试题6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));  //加1为第二行首元素地址6；-1变成5；结果为5
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//	//10,5
//}

//指针笔试题7
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//	//at
//}

//指针笔试题8
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
	//POINT ER ST EW
}