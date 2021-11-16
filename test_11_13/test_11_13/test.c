#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//double power(double n, int p) //返回一个double类型的值
//{
//	double pow = 1;
//	int i;
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}

//计算数的整数幂
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);  //1.2 2 8.9161
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}


//int main(void)
//{
//	int i = 0;
//	while (++i<4)
//		printf("Hi! ");  //3次
//	do
//	    printf("Bye! ");   //5次
//	while(i++ < 8);
//	return 0;
//}

//int main(void)
//{
//	int i;
//	char ch;
//	for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * 1)
//		printf("%c", ch);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//	}
//	return 0;
//}

//int main()
//{
//	int n, m;
//	n = 30;
//	while (++n <= 33)
//		printf("%d|", n);
//	n = 30;
//	do
//	printf("%d|", n);
//	while (++n <= 33);
//	printf("\n***\n");
//	for (n = 1; n*n < 200; n += 4)
//		printf("%d\n", n);
//	printf("\n***\n");
//
//	for (n = 2, m = 6; n < m; n *= 2, m += 2)
//		printf("%d %d\n", n, m);
//	printf("\n***\n");
//	for (n = 5; n > 0; n--)
//	{
//		for (m = 0; m <= n; m++)
//			printf("=");
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char alphabet[26];
//	int i;
//	char c = 'a';
//	//定义变量i为数组的下标，c从字符a开始递增
//	//获得26个字母
//	for (i = 0; i < 26; c++)
//		alphabet[i] = c;
//	//for循环的循环更新部分，更新了下标和字母表
//	for (i = 0; i < 26; i++)
//		printf("%c ", alphabet[i]);
//	return 0;
//}


//int main()
//{
//	printf("$\n");
//	printf("$$\n");
//	printf("$$$\n");
//	printf("$$$$\n");
//	printf("$$$$$\n");
//
//	return 0;
//}


//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 0; j < i; j++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	int i, j;
//	char c;
//	//循环控制变量的定义
//	for (i = 1; i <= 6; i++) {
//		for (j = 0, c = 'F'; j < i; j++, c--)
//			//内层循环控制行内打印的字符数，就j<i表示第N行打印N个字符
//			//char类型c从"F"开始，每次打印时，更新c--
//			//实现字符的递减效果，在第6行，可以输出'A'
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}
//
//int  main(void)
//{
//	int i, j;
//	char c = 'A';
//	for (i = 1; i <= 6; i++) {
//		for (j = 0; j < i; j++, c++)
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	//输入字符的ASCLL码减法，'A'加1得到的十进制结果num
//	//num即是需要打印的从A开始的字符数，也是打印的总行数
//	for (i = 1; i <= num; i++) {
//		//外层循环控制打印行数，num为输入字符和A的差加1
//		for (j = 0; i < num - i; j++)
//			printf(" ");
//		//打印空格，空格数为总字符数减去当前行应打印的字符数
//		//即，本行应打印空格数 + 应打印字符数 = 总字符数（总行数）
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		//在打印正序字符数时，需要通过ch做递增操作，起始值j在空格处已经通过循环
//		//做了初始化，因此只打印剩余字符数
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		//在打印逆序字符时，字符做递减操作
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int start, end;
//	printf("Please enter the start number:");
//	scanf("%d", &start);
//	printf("Please enter the end number:");
//	scanf("%d", &end);
//	//读取用户输入的起始数据和终止数据
//	printf("    Ori:      Square:    Cubic:\n");
//	for (int i = start; i <= end; i++) {
//		printf("%6d,%10d,%10d", i,i*i,i*i*i);
//		printf("\n");
//		//打印3个数据，循环的入口判断为i <= end,保证
//		//最后一个值是用户输入的结束值
//
//		//对于整数数据，计算大数的立方值可能会产生溢出，需要注意
//	}
//	return 0;
//}

//#include <string>
//
//int main(void)
//{
//	char word[30];
//	printf("Please enter the words: ");
//	scanf("%s", word);
//	//scanf（）函数读取用户的输入，保存至word字符数组中
//	printf("The word you enter is : %s\n", word);
//	printf("The reverse word you enter is : ");
//	printf("%d", strlen(word));
//	for (int i = strlen(word) - 1; i >= 0; i--) {
//		printf("%c", word[i]);
//	}
//	//逆序打印，下标值通过strlen（）函数获得，strlen（）返回的长度值
//	//不包含'\0',但是数组下标介于0~（数组长度-1）
//	printf("\n");
//	return 0;
//}

//int main(void)
//{
//	float x, y;
//	printf("Please enter the two float data(separated by blank): ");
//	while (scanf("%f %f", &x, &y) == 2) {
//		//scanf()函数的返回值是成功读取浮点型数据的个数；
//		//因此只有成功读取两个浮点型数据，其返回值才为2
//		printf("The answer is %f\n", (x - y) / (x*y));
//		//程序不处理x或者y为0的情况，如果有必要，可以自行添加条件判断语句
//		printf("Plaese enter the two float data(separated by blank): ");
//	}
//	printf("Program end!");
//	return 0;
//}

//int main(void)
//{
//	int lower, upper;
//	printf("Enter lower and upper integer ;limits: ");  //用户输入一个 2 和 4
//	scanf("%d %d", &lower, &upper);   //去地址
//	//使用scanf()函数读取上下限数值
//	while (upper > lower) {
//		//判断用户输入的上下限数值
//		int sum = 0;
//		for (int i = lower; i <= upper; i++) {   //lower为2 upper为4
//			sum = sum + i*i;
//			//通过for循环计算平方和
//		}
//		printf("The sum of the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: "); //继续输入
//		scanf("%d %d", &lower, &upper);
//		//用户再次输入上下限数值
//	}
//	printf("Done!");
//	return 0;
//
//	//结果为4+9+16=29
//}

//int main(void)
//{
//	int data[8];
//	printf("Enter teh 8 integer data (seperate by blank): ");
//	for (int i = 0; i < 8; i++) {
//		scanf("%d", &data[i]);  //1~8
//	}
//	//通过用户的输入，读取八个整型数据
//
//	printf("Ok, the reverse data is :");
//	for (int i = 7; i >= 0; i--) {
//		printf(" %d", data[i]);   //8倒序1
//	}
//	//倒序打印，需要注意下标越界问题
//	printf("\nDone!\n");
//	return 0;
//}

//int main(void) {
//	int length;
//	double sum = 0.0;
//	printf("Enter the limit length: ");
//	scanf("%d", &length);
//	while (length > 0) {
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			sum = sum + 1.0 / i;
//		}
//		//计算1 + 1、2 + 1、3...
//		printf("The sum for 1.0 +...+1.0/%d.0 is %lf\n", length, sum);
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			if (i % 2 == 0) sum = sum - 1.0 / i;
//			else sum = sum + 1.0 / i;
//		}
//		//计算1 - 1/2 + 1/3 - 1/4+...
//		printf("The sum for 1.0-...+1.0/%d.0 is %lf\n", length, sum);
//
//		sum = 0.0;
//		for (int i = 1; i <= length; i++) {
//			if (i % 2 != 0) sum = sum + 2 * 1.0 / i;
//		}//两个数列的和只计算奇数项，偶数项相抵消
//		printf("The sum for 1.0 + 1.0+2.0/3.0+...+2.0/%d.0 is %lf\n", length, sum)
//			;
//		printf("Enter the limit length: ");
//		scanf("%d", &length);
//	}
//	printf("\nnDone!\n");
//	return 0;
//}

//int main(void)
//{
//	int lower, upper;
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d %d", &lower, &upper);
//	//使用scanf()函数读取上下限数值
//	while (upper > lower) {
//		//判断用户输入的上下限数值
//		int sum = 0;
//		for (int i = lower; i <= upper; i++) {
//			sum = sum + i*i;
//			//通过for循环计算平方和
//		}
//		printf("The sum fo the squares form %d to %d is %d\n", lower, upper, sum);
//		printf("Enter lower and upper integer limits: ");
//		scanf("%d %d", &lower, &upper);
//		//用户再次输入上下限数值
//	}
//	printf("Done!");
//	return 0;
//}

//int main(void) {
//	int data[8];
//	data[0] = 2;
//	//初始化第一个元素为2的1次幂
//	for (int i = 1; i < 8; i++) {
//		data[
//			i] = data[i - 1] * 2;
//	}
//	//2的n次幂等于2乘以2的n-1次幂
//	int i = 0;
//	do{
//		printf("%d  ", data[i++]);
//	} while (i < 8);
//	
//	printf("\nDone!\n");
//	return 0;
//
//	//结果为2  4  8  16  32  64  128  256
//}

//int main(void) {
//	double first[8], second[8];
//	printf("Enter 8 data to the FIRST array: ");
//	for (int i = 0; i < 8; i++) {
//		double sum = 0;
//		for (int j = 0; j <= i; j++) {
//			sum = sum + first[j];
//		}
//		second[i] = sum;
//	}
//	//使用嵌套循环来计算第一个数组的前N项和
//	//也可以使用单循环，
//	printf("All the data of two array:\n");
//	printf("First Array: ");
//	for (int i = 0; i < 8; i++) {
//		printf("%12lf. ", first[i]);
//	}
//	printf("\nSecond Array: ");
//	for (int i = 0; i < 8; i++) {
//		printf("%12lf. ", second[i]);
//	}
//
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	char data[256];
//	printf("Enter the char in a line : ");
//	int i = 0;
//	do{
//		scanf("%c", &data[i]);
//	} while (data[i] != '\n' && ++i);
//	//循环读取用户输入的字符，并保存在字符数组中，直到用户输入回车键
//	//循环未检查输入字符的数量，特定情况下可能会产生溢出
//	printf("The reverse char of the data: ");
//	for (i--; i >= 0; i--) {
//		//原下标i为最后一个字符的下标，初始化时i-的目的时删除最后那个换行符
//		printf("%c", data[i]);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	float daphne, deirdre;
//	daphne = deirdre = 100.0;
//	int year = 0;   //设定初始值为0
//	do{
//		daphne = daphne + 100 * 0.1;  //110
//		deirdre = deirdre + deirdre*0.05;  //105
//		year++;      
//		//计算两人每年的利息及投资额
//	} while ((deirdre - daphne) < 0);
//	//当daphne高于deirdre时，退出循环
//	printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n", year, daphne, deirdre);
//	printf("\nDone!\n");
//	return 0;
//
//	//结果27 years later.
//	//Daphne = 370.000000.
//	//Deirdre = 373.345520
//}

//#include <string.h>
//int main(void) {
//	float chuckie = 100;
//	int year = 0;
//	do{
//		chuckie = chuckie + chuckie*0.08;
//		chuckie -= 10;
//		year++;
//		printf("%f\n", chuckie);
//	} while (chuckie > 9);
//	//若账户余额小于9万美元，则下一年将会被全部支取
//	printf("%f years later. Chuckie's account %f \n", year, chuckie);
//	printf("%f years later. Chuckie's account is null \n", ++year);
//	printf("\nDone!\n");
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	int rabnud = 5;
//	int weeks = 1;
//	while (rabnud < 150) {
//		printf("At %d weeks, Rabnub has %4d friends \n", weeks, rabnud);
//		rabnud = 2 * (rabnud - weeks++);
//		//计算每周Rabnud博士的朋友数
//	};
//	printf("\nDone!\n");
//	return 0;
	//结果
	//At 1 weeks, Rabnub has    5 friends
	//At 2 weeks, Rabnub has    8 friends
	//At 3 weeks, Rabnub has   12 friends
	//At 4 weeks, Rabnub has   18 friends
	//At 5 weeks, Rabnub has   28 friends
	//At 6 weeks, Rabnub has   46 friends
	//At 7 weeks, Rabnub has   80 friends
	//At 8 weeks, Rabnub has  146 friends
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, };
//	int arr2[] = { 2, 3, 4, 5, 6, };
//	int arr3[] = { 3, 4, 5, 6, 7, };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//		1 2 3 4 5
//		2 3 4 5 6
//		3 4 5 6 7
//	}
//}


//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int(*p)[10] = &arr;  //数组的地址要存起来
////上面的p就是数组指针

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	return 0;
//}\

//数组指针的用法
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;  
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);  //这里*pa表示整个数组的地址 然后取i分别给找出数组里各个数地址
//	}
//	return 0;  //*(*pa + i)   *pa == arr
//}

//void print1(int arr[3][5], int x, int y)  //3行5列
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);     //四个表示写法
//		printf("%d ", *(p + i)); //四个表示写法
//		printf("%d ", *(arr + i)); //四个表示写法
//		printf("%d ", arr[i]);  //四个表示写法
//	}
//}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));  //->
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print2(arr, 3, 5);

	return 0;
}



















































































































































