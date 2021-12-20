#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	int a;
//	a = sizeof("Hello, World!");
//	printf("%d", a);
//	return 0;
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf("str");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S*ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>  //加头文件
//int main()
//{
//	int a;
//	bool b;          //整形与布尔型的转化 - bool
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int a;
//	bool b;
//	scanf("%d", &a);
//	b = a;
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//		printf("%c\n", a); //ascll输出对应的值要用%c
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//		printf("%c\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	printf("%c\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//		printf("%c\n", a);
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//		printf("%c\n", a);
//	return 0;
//}

//int main()
//{
//	char a;
//	while (~scanf("%c", &a))
//		printf("%d\n", a);
//	return 0;
//}

//int a[100000] = { 0 };
//int main(){
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (~scanf("%d", &a[len++]));
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] >a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1]) //重号
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2) //断号
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//#include<stdio.h>
//
//int a[100000] = { 0 };
//int main(){
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++]) != EOF);      //输入各个数据并存放到数组中 ctrl+z结束输入 
//	for (int i = 0; i < len - 1; i++){       //将输入的数据正序排序 
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])  //重号 
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)   //断号 
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int main()
//{
//	int a[100000] = { 0 };
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++] != EOF));
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] >a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int a[100000] = { 0 };
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] >a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int a[100000] = { 0 };
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i] + 1;
//	}
//	printf("%d %d", m,n);
//	return 0;
//}

//int a[100000] = { 0 };
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int len = 0;
//	while (scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i<len-1; i++){
//		for (int j = 0; j < len - i - 1; j++); {
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int a[100000] = { 0 };
//int main()
//{
//	int N;
//	int len = 0;
//	while(scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//	  if (a[i] == a[i + 1])
//			n = a[i];
//	else if (a[i + 1] - a[i] == 2)
//		m = a[i] + 1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int a[100000] = { 0 };
//int main()
//{
//	int N;
//	int len = 0;
//	scanf("%d", &N);
//	while (scanf("%d", &a[len++]) != EOF);
//	for (int i = 0; i < len - 1; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (a[j] > a[j + 1]){
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	int m, n;
//	for (int i = 0; i < len; i++){
//		if (a[i] == a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i]+1;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}