#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void copy_arr(double t[], double s[], int n);
//void copy_arr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
//
//int main(void)
//{
//	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//	copy_ptrs(target3, source, source + 5);
//	return 0;
//}
//
//void copy_arr(double t[], double s[], int n) {
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//}
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	//使用指针作为函数的参数，需要表明指针的访问范围，不能越界
//}
//
//void copy_ptrs(double *t, double *s_first, double *s_last) {
//	for (int i = 0; (s_last - s_first) > i;i++)
//}

//int get_max(int number[], int n);
//
//int main(void) {
//	int source[100] = { 1, 2, 3, 4, 5 };
//	printf("The largest number in array is %d ", get_max(source, 100));
//	return 0;
//}
//
//int get_max(int number[], int n) {
//	int max = number[0];
//	for (int i = 0; i < n; i++)
//	if (max < number[i])max = number[i];
//
//	return max;
//}

//int get_max_index(double number[], int n);
////使用传统方式传递参数，n表示数值number的长度
//
//int main(void) {
//	double source[100] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	printf("The largest number's index in array is %d ", get_max_index(source, 100));
//	return 0;
//}
//int get_max_index(double number[], int n) {
//	double max = number[0];
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		if (max < number[i]) {
//			max = number[i];
//			index = i;
//		}
//	}
//	//函数在遍历，比较数组元素时，同时需要保存元素数值和下标，元素值用于下一次挑战
//	//下标值需要保存并且在函数末尾返回
//
//	return index;
//}

//double get_range(double number[], int n);
////以数组及其长度作为函数的参数
//
//int main(void)
//{
//	double source[12] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	printf("The max diff in array is %g ", get_range(source, 12));
//	return 0;
//}
//
//double get_range(double number[], int n) {
//	double max = number[0];
//	double min = number[0];
//	for (int i = 0; i < n; i++){
//		if (max < number[i])max = number[i];
//		if (min > number[i])min = number[i];
//	}
//	//初始化变量max和min为临时极大值与临时极小值，循环完成后即可得最大值和最小值
//
//	return max - min;
//}


//void r_sort(double number[], int n);
////传统方式传递数组参数
//
//int main(void) {
//	double source[12] = { 2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 };
//	for (int i = 0; i < 12; i++) printf("%g ", source[i]);
//	printf("\n");
//	r_sort(source, 12);
//	for (int i = 0; i < 12; i++)printf("%g ", source[i]);
//	return 0;
//}
//
//void r_sort(double number[], int n){
//	//排序算法使用常用的比较排序算法，即，判断相邻元素的大小关系
//	//并对需要排序的两个元素交换位置，内层循环1次能保证1个元素
//	//调整到合适的位置，在n-1次外层循环中保证所有元素都换到正确的位置
//
//	double temp;
//	for (int i = 0; i < n - 1; i++){
//		for (int j = 0; j < n - 1 - i; j++){
//			//循环判断条件为j < n - 1也可以，只是会多执行一些无效的循环判断
//			//具体原因是每次循环可以保证1个元素到达正确位置，该位置后续排序
//			//过程可以忽略，以提高效率
//			if (number[j] < number[j + 1]) {
//				temp = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = temp;
//			}
//			//由于这里主要的目的并非是排序算法，但在此处打印
//			//每次循环的排序结果，有助于理解交换排序的基本思想
//		}
//	}
//}

//#define ROWS 12
//#define COLS 5
//void copy_arr(double t[], double s[], int n);
//void copy_ptr(double *t, double *s, int n);
//void copy_ptrs(double *t, double *s_first, double *s_last);
//
//void copy_2d_array(double t[][ROWS], double s[][ROWS], int n);
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n);
////二维数组的复制函数的声明，只使用了指针和数组作为形参，首尾指针作为参数
////的形式类似
//
//int main(void) {
//	double target[COLS][ROWS], source[COLS][ROWS] = {
//		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.1, 7.3 },
//		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
//	};
//	copy_2d_ptr(target, source, COLS);
//	for (int i = 0; i < COLS; i++) {
//		for (int j = 0; j < ROWS; j++)
//			printf("%5.2f", target[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//
//void copy_arr(double t[], double s[], int n) {
//	for (int i = 0; i < n; i++)
//		t[i] = s[i];
//}
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//}
//
//void copy_ptrs(double *t, double *s_first, double *s_last) {
//	for (int i = 0; (s_last - s_first) > i; i++)
//		//for(int i = 0; (s_last - s_first) > 0; i++, s_first++)
//		*(t + i) = *(s_first + i);
//}
//void copy_2d_array(double t[][ROWS],double s[][ROWS], int n ){
//	//参数n表示列数
//	for (int i = 0; i < n; i++)
//	copy_arr(t[i], s[i], ROWS);
//
//}
//
//void copy_2d_ptr(double(*t)[ROWS], double(*s)[ROWS], int n) {
//	for (int i = 0; i < n; i++)
//		copy_ptr(*(t + i), *(s + i), ROWS);
//}

//结果
//4.30 4.30 4.30 3.00 2.00 1.20 0.20 0.20 0.40 2.40 3.50 6.60
//8.50 8.20 1.20 1.60 2.40 0.00 5.20 0.90 0.30 0.90 1.10 7.30
//9.10 8.50 6.70 4.30 2.10 0.80 0.20 0.20 1.10 2.30 6.10 8.40
//7.20 9.90 8.40 3.30 1.20 0.80 0.40 0.00 0.60 1.70 4.30 6.20
//7.60 5.60 3.80 2.80 3.80 0.20 0.00 0.00 0.00 1.30 2.60 5.20
//双精度

//#include <stdlib.h>
//
//void copy_ptr(double *t, double *s, int n);
////只保留以指针作为形参的函数
//
//int main(void)
//{
//	double src[] = { 1, 2, 3, 4, 5, 6, 7};
//	double targ[3];
//	copy_ptr(targ, src + 2, 3);
//	//函数的实参为目标组地址，源数组中第3个元素的地址以及复制的元素个数
//	printf("Now Show the src array:\n");
//	for (int i = 0; i < 5; i++)
//		printf("%.0lf ", src[i]);
//
//	printf("\nNow Show the dest array:\n");
//	for (int i = 0; i < 3; ++i)
//		printf("%.0lf ", targ[i]);
//	return 0;
//}
//
//void copy_ptr(double *t, double *s, int n) {
//	for (int i = 0; i < n; i++)
//		*(t + i) = *(s + i);
//	//使用函数指针作为函数的参数，需要表明指针的访问范围，不能越界，并使用
//}

//void copy_array(int n, int m, double target[n][m], const double source[n][m]);
//void show_array(int n, int m, const double array[n][m]);
////
//////以变长数组作为函数的参数，需要以二维函数的数组下标作为形参，在形参数组中
//////也需要使用相同的形参名作为下标来标识处数组的长度
//
//int main(void) {
//	int n = 3;
//	int m = 5;
//	double target[n][m], source[][5] = {
//		{ 0.2, 0.4, 2.4, 3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4 },
//		{ 9.1, 8.5, 2.3, 6.1, 8.4 },
//	};
//	copy_array(n, m, target, source);
//	show_array(n, m, target);
//	return 0;
//}
//
//void copy_array(int n, int m, double target[n][m], const double source[n][m]){
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			target[i][j] = source[i][j];
//}
//
//void show_array(int n, int m, const double array[n][m]) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//			printf("%g ", array[i][j]);
//		printf("\n");
//	}
//}

//#define INDEX 4
//
//void add_array(int n, int t[n], const int s1[n], const int s2[n]);
////数组加法函数的3个形参分别表示数组长度，求和结果和两个加数数组
////程序使用变长数组形式分别表示3个数组的形参，s1和s2数组设置为const，可以
////保证在函数内不会修改两个源数组的值
//
//int main(void) {
//	int sum[INDEX], s1[INDEX] = { 2, 4, 5, 8 }, s2[INDEX] = { 1, 0, 4, 6 };
//	add_array(INDEX, sum, s1, s2);
//	for (int i = 0; i < INDEX; i++)
//		printf("%d ", sum[i]);
//	return 0;
//}
//
//void add_array(int n, int t[n], const int s1[n], const int s2[n]) {
//	for (int i = 0; i < n; i++)
//		t[i] = s1[i] + s2[i];
//}

//11/

//#define COLS 5
//#define ROWS 3
//
//void show_element(int rows, int cols, const int t[rows][cols]);
//void double_element(int rows, int cols, int t[rows][cols]);
//
//int main(void) {
//	int arr[ROWS][COLS] = { { 1, 0, 4, 6, 9 }, { 2, 5, 6, 8, 3 }, { 5, 3, 21, 1, 6 } };
//	show_element(ROWS, COLS, arr);
//	double_element(ROWS, COLS, arr);
//	printf("\n");
//	show_element(ROWS, COLS, arr);
//	return 0;
//}
//
//void show_element(int rows, int cols, const int t[rows][cols]) {
//	for (int i = 0; i < rows;i++)
//	for (int j = 0; j < cols; j++)
//		printf("%4d ", t[i][j]);
//}
//
//
//void double_element(int rows, int cols, int t[rows][cols]) {
//	for (int i = 0; i < rows; i++)
//	for (int j = 0; j < cols; j++)
//		t[i][j] *= 2;
//}

#define MONTHS 12 //一年的月份数
#define YEARS 5 //年数

void year_average(int years, int months, const float t[years][months]);
void month_average(int years, int months, const float t[years][months]);
int main(void)
{
	const float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.1, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
	};
	year_average(YEARS, MONTHS, rain);
	months_average(YEARS, MONTHS, rain);

	printf("\n");
	return 0;
}
void year_average(int years, int months, const float t[years][months]){
	float subtot, total;
	int month, year;
	printf(" YEAR      RAINFALL    (inchs)\n");
	for (year = 0, total = 0;year  < years; year++) {
		for (month = 0, subtot = 0; month < months; month++)
			subtot += t[year][months];
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

