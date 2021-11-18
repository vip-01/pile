#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
//	int(*pz)[2];
//	pz = zippo;
//
//	printf("  pz = %p,   pz + 1 = %p\n", pz, pz + 1);
//
//	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
//
//	printf("  *pz = %p,  *pz + 1 = %p\n", *pz, *pz + 1);
//
//	printf("pz[0][0] = %d\n", pz[0][0]);
//
//	printf("  *pz[0] = %d\n", *pz[0]);
//
//	printf("    **pz = %d\n", **pz); //解到上面这层
//
//	printf("     pz[2][1] = %d\n", pz[2][1]);
//
//	printf("*(*pz+2) + 1) = %d\n", *(*(pz + 2) + 1));
//
//	return 0;
//}

//指针的兼容性
//函数和多维数组
//int main(void)
//{
//	int junk[3][4] = { { 2,4,5,8 }, { 3,5,6,9, }, { 12,10,8,6 } };
//	int i, j;
//	int total = 0;
//	for (i = 0; i < 3; i++)
//		total += sum(junk[i], 4);
//
//
//}


//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);
//void sum_cols(int[][COLS], int);
//int sum2d(int(*ar)[COLS], int rows);
//int main(void)
//{
//	int junk[ROWS][COLS] = {
//		{ 2, 4, 6, 8 },
//		{3, 5, 7, 9 },
//		{ 12, 10, 8, 6 }
//	};
//
//	sum_rows(junk, ROWS);
//	sum_cols(junk, ROWS);
//	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
//
//	return 0;
//}
//
//void sum_rows(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot;
//
//	for (r = 0; r < rows; r++)
//	{
//		tot = 0;
//		for (c = 0; c < COLS; c++)
//			tot += ar[r][c];
//		printf("row %d: sum = %d\n", r, tot);
//	}
//}
//
//void sum_cols(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot;
//
//	for (c = 0; c < COLS; c++)
//	{
//		tot = 0;
//		for (r = 0; r < rows; r++)
//			tot += ar[r][c];
//		printf("col %d: sum = %d\n", c, tot);
//	}
//}
//
//int sum2d(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	for (c = 0; c < COLS; c++)
//		tot += ar[r][c];
//
//	return tot;
//}

//#define COLS 4
//int sum2d(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	for (c = 0; c < COLS; c++)
//		tot += ar[r][c];
//	return tot;
//}

//int sum2d(int rows, int cols, int ar[rows][cols])
//{
//	int r;
//	int c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	for (c = 0; c < cols; c++)
//		tot += ar[r][c];
//
//	return tot;
//}

//使用变长数组的函数
//#define ROWS 3
//#define COLS 4
//int sum2d(int rows, int cols, int ar[rows][cols]);
//int main(void)
//{
//	int i, j;
//	int rs = 3;
//	int cs = 10;
//	int junk[ROWS][COLS] = {
//		{2, 4, 6, 8 },
//		{3, 5, 7, 9 },
//		{12, 10, 8, 6 }
//	};
//
//	int morejunk[ROWS - 1][COLS + 2] = {
//		{20, 30, 40, 50, 60, 70 },
//		{5, 6, 7, 8, 9, 10 }
//	};
//
//	int varr[rs][cs]; //变长数组
//
//	for (i = 0; i < rs; i++)
//	for (j = 0; j < cs; j++)
//		varr[i][j] = i*j + j;
//
//	printf("3x4 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
//
//	printf("2x6 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));
//
//	printf("2x10 VLA\n");
//	printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));
//
//	return 0;
//
//}
//
//int sum2d(int rows, int cols, int ar[rows][cols])
//{
//	int r;
//	int c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	for (c = 0; c < cols; c++)
//		tot += ar[r][c];
//
//	return tot;
//}

//有趣的常量
//#define COLS 4
//int sum2d(const int ar[][COLS], int rows);
//int sum(const int ar[], int n);
//int main(void)
//{
//	int total1, total2, total3;
//	int * pt1;
//	int(*pt2)[COLS];
//
//	pt1 = (int[2]) { 10, 20 };
//	pt2 = (int[2][COLS]){ { 1, 2, 3, -9 }, { 4, 5, 6, -8 } };
//
//	total1 = sum(pt1, 2);
//	total2 = sum2d(pt2, 2);
//	total3 = sum((int[]){ 4, 4, 4, 5, 5, 5 }, 6);
//	printf("total1 = %d\n", total1);
//	printf("total2 = %d\n", total2);
//	printf("total3 = %d\n", total3);
//
//	return 0;
//}
//
//int sum(const int ar[], int n)
//{
//	int i;
//	int total = 0;
//	
//	for (i = 0; i < n; i++)
//		total += ar[i];
//
//	return total;
//}
//
//int sum2d(const int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	for (c = 0; c < COLS; c++)
//		tot += ar[r][c];
//
//	return tot;
//
//	//total1 = 30
//	//total2 = 4
//	//total3 = 27
//}

#define MONTHS 12 //一年的月份数
#define YEARS 2 //年数
int main(void)
{
	const float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.1, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
	};
	int year, month;
	float subtot, total;
	const float(*ptr)[MONTHS] = rain;
	//定义指向二维数组的指针ptr，ptr指向含有MONTHS个元素的浮点型数值的数组。
	//赋值语句将初始化ptr指针，使其指向rain数组，rain含有YEARS个[MONTHS]
	//类型数组。const表示和rain的类型匹配

	printf(" YEAR      RAINFALL    (inchs)\n");
	for (year = 0, subtot = 0; month < MONTHS; year++) {
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += *(*ptr + year) + month;
		//prt+year表示二维数组的行移动，*(ptr + year)+ month表示
		//二维数组在行内的移动。*(*ptr + year)+month)表示取确定元素的浮点数值

		printf("%5d %15.lf\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.lf inches. \n\n", total / YEARS);
	printf("MONTHS AVERAGES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf("Nov  Dec\n");

	for (month = 0; month < MONTHS; month++) {
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(ptr + year) + month);
		printf("%4.lf ", subtot / YEARS);
	}
	printf("\n");
	return 0;
}




















































