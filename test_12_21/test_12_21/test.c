#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

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
//			m = a[i] + 1
//			;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int main()
//{
//	int a[100000] = { 0 };
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
//		if (a[i] < a[i + 1])
//			n = a[i];
//		else if (a[i + 1] - a[i] == 2)
//			m = a[i + 1];
//	}
//	printf("%d %d", m, n);
//	return 0;
//}


//int main()
//{
//	int a[100000] = { 0 };
//	int N;
//	int len = 0;
//	scanf("%d", N);
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
//			m = a[i + 1];
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int main()
//{
//	int a[100000] = { 0 };
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
//			m = a[i + 1];
//	}
//	printf("%d %d", m, n);
//	return 0;
//}

//int loop(int n)
//{
//	int m;
//	scanf("%d", &m);
//	{
//		int i;
//		for (i = m; i < n; i++)
//			puts("i is local to a sub-block\n");
//	}
//	return m;
//}

//int main()
//{
//	int x = 30;
//	printf("x in outer block: %d at %p\n", x, &x);
//	{
//		int x = 77;
//		printf("x in inner block :%d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	while (x++ < 33)
//	{
//		int x = 100;
//		x++;
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	return 0;
//}


//int main()
//{
//	int n = 8;
//
//	printf("    Initially, n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//		printf("	loop 1: n = %d at %p\n", n, &n);
//	printf("After loop 1, n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//	{
//		printf(" loop 2 index n = %d at %p\n", n, &n);
//		int n = 6;
//		printf("	loop2: n =%d at %p\n", n, &n);
//		n++;
//	}
//	printf("After loop 2, n = %d at %p\n", n, &n);
//	return 0;
//}

//int main(void)
//{
//	int count;
//
//	for (count = 1; count <= 3; count++)
//	{
//		printf("Here comes iteration %d:\n", count);
//		trystat();
//	}
//	return 0;
//}
//
//void trystat(void)
//{
//	int fade = 1;
//	static int stay = 1;
//	printf("fade = %d and stay = %d\n", fade++, stay++);
//}

//int units = 0;
//void critic(void);
//int main(void)
//{
//	extern int units;
//
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//		critic();
//	printf("You must have looked it up!\n");
//
//	return 0;
//}

//void critic(void)
//{
//	//删除了可选的重复声明
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", &units);
//}

//int main(void)
//{
//	double * ptd;
//	int max;
//	int number;
//	int i = 0;
//
//	puts("What is the maximum number of type double entries?");
//	if (scanf("%d", &max) != 1)
//	{
//		puts("Number not correctly entered -- bye.");
//		exit(EXIT_FAILURE);
//	}
//	ptd = (double *)malloc(max * sizeof(double));
//	if (ptd == NULL)
//	{
//		puts("Memory allocation failed. Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter the values(q to quit) :");
//	while (i < max && scanf("%lf", &ptd[i]) == i);
//	for (i = 0; i < number; i++)
//	{
//		printf("%7.2 ", ptd[i]);
//		if (i % 7 == 6)
//			putchar('\n');
//	}
//	if (i % 7 != 0)
//		putchar('\n');
//	puts("Done.");
//	free(ptd);
//
//	return 0;
//}

//int static_store = 30;
//const char * pcg = "String Literal";
//int main()
//{
//	int auto_store = 40;
//	char auto_string[] = "Auto char Array";
//	int * pi;
//	char * pcl;
//
//	pi = (int *)malloc(sizeof(int));
//	*pi = 35;
//	pcl = (char *)malloc(strlen("Dynamic String") + 1);
//	strcpy(pcl, "Dynamic String");
//
//	printf("static_store: %d at %p\n", static_store, &static_store);
//	printf(" auto_store: %d at %p\n", auto_store, &auto_store);
//	printf("	*pi: %d at %p\n", *pi, pi);
//	printf(" %s at %p\n", pcg, pcg);
//	printf(" %s at %p\n", auto_string, auto_string);
//	printf("  %s at %p\n", pcl, pcl);
//	printf("    %s at %p\n", "Quoted String", "Quted String");
//	free(pcl);
//
//	return 0;
//}

//char color = 'B';
//void first(void);
//void second(void);
//
//int main(void)
//{
//	extern char color;
//
//	printf("color in main() is %c\n", color);
//	first();
//	printf("color in main() is %c\n", color);
//	second();
//	printf("color in main() is %c\n", color);
//	return 0;
//}
//
//void first(void)
//{
//	char color;
//
//	color = 'R';
//	printf("color in first() is %c\n", color);
//}
//
//void second(void)
//{
//	color = 'G';
//	printf("color in second() is %c\n", color);
//}
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.tex", "r"); //文件不成功的时候会打开失败；fopen打开文件
//	if (pf == NULL)                    //判断一下文件打开失败或者成功
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL) //判断如果等于空指针说明读取失败，返回错误码
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100, 3.14f, "bit" };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	fprintf(pf, "%d %d %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;
	return 0;
}