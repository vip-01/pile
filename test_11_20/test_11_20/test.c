#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define ROWS 3
//#define COLS 5
//void input_array(int rows, double arr[][COLS]);
//double col_average(int cols, const double arr[]);
//double array_average(int rows, const double arr[][COLS]);
//double array_max_number(int rows, const double arr[][COLS]);
//void show_result(int rows, const double arr[][COLS]);
////函数的参数定义使用传统数组形式实现，数组的输入函数将会修改数组的元素值，因此不能
////使用const关键词，其他函数应当使用const来防止实参被误修改
//
//int main(void) {
//	double array[ROWS][COLS];
//	input_array(ROWS, array);
//	show_result(ROWS, array);
//	printf("\n");
//	return 0;
//}
//
//void input_array(int rows, double arr[][COLS]) {
//	printf("Enter teh array number.\n");
//	for (int i = 0; i < rows; i++) {
//		printf("Enter five double number seprate by enter:\n");
//		for (int j = 0; j < COLS; j++)
//			scanf("%lf", &arr[i][j]);
//	}
//}
//double col_average(int cols, const double arr[]) {
//	double sum = 0;
//	for (int i = 0; i < cols; i++)
//		sum += arr[i];
//	return sum / cols;
//}
//
//double array_average(int rows, const double arr[][COLS]) {
//	double sum = 0;
//	for (int i = 0; i < rows; i++)
//		sum += col_average(COLS, arr[i]);
//	return sum / rows;
//}
//
//double_array_max_number(int rows, const double arr[][COLS]){
//	double max = arr[0][0];
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < COLS; j++)
//			if (max < arr[i][j]) max = arr[i][j];
//	return max;
//}
//
//void show_result(int rows, const double arr[][COLS]){
//	printf("Now, Let\'s check teh array!\n");
//	printf("The array you input is:\n");
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < COLS; j++)
//			printf("%5g", arr[i][j]);
//		printf("\n");
//	}
//	printf("The Average fo every colum is:\n");
//	for (int i = 0; i < rows; i++)
//		printf("The %d column's average is %g .\n", i, col_average(COLS, arr[i]));
//	printf("The array's data average is %g \n", array_average(ROWS, arr));
//	printf("The max datum in the array is %g", array_max_number(ROWS, arr));
//}
 
//v/*oid input_array(int rows, int cols, double arr[rows][cols];
//double col_average(int cols, const double arr[cols]);
//double array_average(int rows, int cols, const double arr[rows][cols]);
//double array_max_number(int rows, int cols, const double arr[rows][cols]);
//void show_result(int rows, int cols, const double arr[rows][cols]);
//
//int main(void) {
//	int rows = 3;
//	int cols = 5;
//	double array[rows][cols];
//	input_array(rows, cols, array);
//	show_result(rows, cols, array);
//	return 0;
//}
//
//void input_array(int rows, int cols, double arr[rows][cols]) {
//	printf("Enter the arra number.\n");
//	for (int i = 0; i < rows; i++) {
//		printf("Enter five double number seperate by enter:\n");
//		for (int j = 0; j < cols; j++)
//			scanf("%lf", &arr[i][j]);
//	}
//}
//
//double col_average(int cols, const double arr[cols]){
//	double sum = 0;
//	for (int i = 0; i < cols; i++)
//		sum += arr[i];
//	return sum / cols;
//}
//
//
//double array_average(int rows, int cols, const double arr[rows][cols]){
//	double sum = 0;
//	for (int i = 0; i < rows; i++)
//		sum += col_average(cols, arr[i]);
//	return sum / rows;
//}
//
//double array_max_number(int rwos, int cols, const double arr[rows][cols]){
//	double max = arr[0][0];
//	for (int i = 0; i < rows; i++)
//	for (int j = 0; j < cols; j++)
//	if (max < arr[i][j] )max = arr[i][j];
//	return max;
//}
//
//void show_result(int rows, int cols, const double arr[rows][cols]) {
//	printf("Now, Let\'s check the array!\n");
//	printf("The array you input is:\n");
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < cols; j++)
//			printf("%5g", arr[i][j]);
//		printf("\n");
//	}
//	printf("The Average of every column is:\n");
//	for (int i = 0; i < rows; i++)
//		printf("The %d column's average is %g .\n", i, col_average(cols, arr[i]));
//	printf("The array's data average is %g \n", array_average(rows, cols, arr));
//	printf("The max datum in the array is %g", array_max_number(rows, cols, arr));
//}*/
#include <string.h>
//int main()
//{
//	//一维数组
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节-16
//	printf("%d\n", sizeof(a + 0));//4/8数组名这里表示首元素的值，a+0 还是首元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示首元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1]));//4 - 第2个元素的大小
//	printf("%d\n", sizeof(&a));///4/8 - &a取出的是数组的地址，但数组的地址也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));//16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a + 1));//4/8 - &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 &a[0]+1 是第二个元素的地址
//
//
//
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//sizeof计算的是数组大小 6*1 = 6字节
//	printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址大小是4/8字节
//	printf("%d\n", sizeof(*arr));//1 arr是首元素的地址， *arr就是首元素，首元素是字符大小是一个字节
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//&arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//&arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//sizeof(arr)计算的数组的大小，单位是字节：7
//	printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小 arr+ 0是首元素的地址
//	printf("%d\n", sizeof(*arr));//1 *arr是首元素，sizeof(*arr)计算首元素的大小
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));//4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 第二个元素的地址
//
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr - 数组的地址- 数组指针 char(*p)[7]= &arr;
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4/8 - p+1 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 *p 就是字符串的第一个字符 - 'a'
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));//4/8 地址
//	printf("%d\n", sizeof(&p + 1));//4/8 地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 地址
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	//二维数组
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行做为一维数组的数组名
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行
//	//第一个元素的地址，所以a[0]+1,就是第一行第二个元素的地址，地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 *(a[0] + 1)) 是第一行第二个元素，大小是4个字节
//
//	printf("%d\n", sizeof(a + 1));//4 a是二维数组的数组名，没有sizeof(a)，也没有&(a),所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行(首元素)的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1] 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4， 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16， 计算第二行的大小， 单位是字节
//	printf("%d\n", sizeof(*a));//16 - a是首元素地址 - 第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}

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
