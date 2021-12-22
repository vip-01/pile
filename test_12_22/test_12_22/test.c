#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//#define SWAP(a,b) {int temp; temp = a; a = b;b = temp;}
//int main()
//{
//	int i, j;
//	int a[5] = { 3, 4, 5, 6, 7 };
//	int b[5] = { 5, 6, 7, 8, 9 };
//	for (i = 0; i < 5; i++)
//		SWAP(a[i], b[i]);
//	printf("After swaping:\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", b[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float a;
//	int b;
//	scanf("%f %d\n", &a, &b);
//	b = (int)a;
//	printf("%d\n", b);
//
//	return 0;
//}

//#define MAX 100
//
////Ô¤¶¨Òå·ûºÅ
//
//int main()
//{
	/*printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);*/

	/*int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");

	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
			__FILE__, __LINE__, __DATE__, __TIME__);
	}
	fclose(pf);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/


#define SQUARE(x) x*x

int main()
{
	int ret = SQUARE(5);
	//int ret = 5*5
	printf("ret = %d\n", ret);
	return 0;
}