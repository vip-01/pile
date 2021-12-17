#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//	return 0;
//}

//#define NUMBER 5
//int tensu[NUMBER];
//
//int top(void);
//
//int main(void)
//{
//	extern int tensu[];
//	int i;
//
//	printf("请输入%d名学生的分数。\n", NUMBER);//先输入五名学生的分数
//
//	for (i = 0; i < NUMBER; i++){
//		printf("%d:", i + 1);
//		scanf("%d", &tensu[i]);
//	}
//	printf("最高分=%d\n", top());
//	return 0;
//}
//
//int top(void)
//{
//	extern int tensu[];
//	int i;
//	int max = tensu[0];
//	for (i = 1; i < NUMBER; i++)
//		if (tensu[i]>max)
//			max = tensu[i];
//	return (max);
//}

//#define NUMBER 5
//
//int max_of(int vc[], int no)
//{
//	int i;
//	int max = vc[0];
//	for (i = 1; i < no;i++)
//	if (vc[i]>max)
//		max = vc[i];
//	return (max);
//}
//
//int main(void)
//{
//	int i;
//	int eng[NUMBER];
//	int mat[NUMBER];
//	int max_e, max_m;
//
//	printf("请输入%d名学生的分数。\n", NUMBER);
//	for (i = 0; i < NUMBER; i++){
//		printf("[%d]英语:", i + 1);		scanf("%d", &eng[i]);
//		printf("	数学:");				scanf("%d", &mat[i]);
//	}
//	max_e = max_of(eng, NUMBER);
//	max_m = max_of(mat, NUMBER);
//
//	printf("英语的最高分=%d\n", max_e);
//	printf("数学的最高分=%d\n", max_m);
//
//	return 0;
//}