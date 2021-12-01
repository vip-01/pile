#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void mikado(int);
//int main(void)
//{
//	int pooh = 2, bah = 5;
//
//	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//
//	return 0;
//}
//
//void mikado(int bah)
//{
//	int pooh = 10;
//
//	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
//}

//void interchange(int u, int v);
//
//int main(void)
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int u, int v)
//{
//	int temp;
//
//	printf("Originallly u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d.\n", u, v);
//}

//int largest(int x, int y, int z){
//	int max = x;
//	if (y > max)
//		max = y;
//	if (z > max)
//		max = z;
//	return max;
//}

//int main(void){
//	int res;
//	show_menu();
//	while ((res = getchoice(1, 4)) != 4){
//		printf("I like choice %d.\n", res);
//		show_menu();
//	}
//	printf("Bye!\n");
//	return 0;
//}
//void show_menu(void){
//	printf("Please choose one of the following: \n");
//	printf("1) copy files       2) move files \n");
//	printf("3) remove files       4) quit\n");
//	printf("Enter the number of your choice:\n");
//}
//int getchoice(int low, int high){
//	int ans, good;
//	good = scanf("%d", &ans);
//	while (good == 1 && (ans < low || ans > high)){
//		printf("%d is not a valid choice; try again\n", ans);
//		show_menu();
//		scanf("%d", &ans);
//	}
//	if (good != 1){
//		printf("Noon-numeric input. ");
//		ans = 4;
//	}
//	return ans;
//}

//double min(double x, double y);
//int main(void){
//	double d1, d2;
//	printf("Enter tow float number:");
//	scanf("%ld %ld", &d1, &d2);
//	printf("you input %g and %g. The MIN %g.", d1, d2, min(d1, d2));
//	return 0;
//}
//
//double min(double x, double y){
//	if (x < y) return x;
//	else return y;
//}

//void chline(char ch, int cols, int rows);
//int main(void){
//	char c;
//	int i, j;
//	printf("Enter the char you want to print: ");
//	scanf("%c", &c);
//	printf("Enter the rows and cols you want to print: ");
//	scanf("%d %d", &j, &i);
//	chline(c, i, j);
//	return 0;
//}
//
//void chline(char ch, int cols, int rows){
//	for (int m = 0; m < rows; m++){
//		for (int n = 0; n < cols; n++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}

//void print_char(char ch, int cols, int rows);
//int main(void){
//	char c;
//	int i, j;
//	printf("Enter the char you want to print: ");//输入要打印的字符
//	scanf("%c", &c);
//	printf("Enter the rows and cols you want to print: ");//打印行和列
//	scanf("%d %d", &i, &j);
//	print_char(c, j, i);
//	return 0;
//}
//
//void print_char(char ch, int cols, int rows){
//	for (int m = 0; m < rows; m++){
//		for (int n = 0; n < cols; n++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}

//double harmean(double x, double y);
////函数声明
//int main(void){
//	double d1, d2;
//	printf("Enter tow float number:");
//	scanf("%lf %lf", &d1, &d2);
//	printf("The HarMEAN of %g and %g is %g.", d1, d2, harmean(d1, d2));
//	return 0;
//}
//
//double harmean(double x, double y){
//	return 2 / (1 / x + 1 / y);
//	//求两个数的调和平均数
//}

//void larger_of(double *x, double *y);
//
//int main(void){
//	double d1, d2;
//	printf("Enter tow float number:");
//	scanf("%lf %lf", &d1, &d2);
//	printf("Data you input is %g and %g.\n", d1, d2);
//	larger_of(&d1, &d2);
//	printf("After function.data is %g and %g.\n", d1, d2);
//}
//
//void larger_of(double *x, double *y){
//	if (*x > *y) *y = *x;
//	else *x = *y;
//
//	//找两个数中的最大值并且打印出来
//}

//void get_char_pos(void);
////函数读取标准输入，对于字符输入，打印其在字母表中的位置
//int position(char ch);
//int main(void){
//	get_char_pos();
//}
//
//void get_char_pos(void){
//	char ch;
//	printf("Enter teh chars(ended by EOF, not enter):");
//	while ((ch = getchar()) != EOF){
//		if ((ch = getchar()) == '\n') continue;
//		if (position(ch) != -1){
//			printf("The char %c's position in alphabet is %d.\n", ch, position(ch));
//		}
//		else printf("%c is not a alphabet.\n", ch);
//	}
//}
//
//int position(char ch){
//	if (ch >= 'A' && ch <= 'Z')
//		return ch - 'A' + 1;
//	if (ch >= 'a' && ch <= 'z')
//		return ch = 'a' + 1;
//	return -1;
//}

//void ordering(double *x, double *y, double *z);
//int main(void){
//	double d1, d2, d3;
//	printf("Enter three float number:");
//	scanf("%lf %lf %lf", &d1, &d2, &d3);
//	printf("Data you input is %g, %g and %g.\n", d1, d2, d3);
//	ordering(&d1, &d2, &d3);
//	printf("After function. data is %g, %g and %g.\n", d1, d2, d3);
//}
//
//void ordering(double *x, double *y, double *z){
//	double temp;
//	if (*x > *y){
//		temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//	if (*x > *z){
//		temp = *x;
//		*x = *z;
//		*z = temp;
//	}
//	if (*y > *z){
//		temp = *y;
//		*y = *z;
//		*z = temp;
//	}
//
//	//交换然后按所输入的数字进行排序，按顺序打印出来
//}


//算几的次方
//double power(double n, int p);
//int main(void){
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the integer power");
//	printf(" to which \n the number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter the next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoy this power trip -- bye!\b");
//	return 0;
//}
//
//double power(double n, int p){
//	double pow = 1;
//	int i;
//	if (n == 0 && p == 0){
//		printf("The %g to the power %c is not define, return 1!\n", n, p);
//		return 1;
//	}
//	if (n == 0) return 0;
//	if (p == 0) return 1;
//	if (p > 0){
//		for (i = 1; i <= p; i++)
//			pow *= n;
//		return pow;
//	}
//	else{
//		for (i = 1; i <= -p; i++)
//			pow *= n;
//		return 1 / pow;
//	}
//}

//void to_base_n(unsigned long n, unsigned short t);
//
//int main(void){
//	unsigned long number;
//	unsigned short target;
//	printf("Enter the integer and N for notation(q ot quit):");
//	while (scanf("%lu %hu", &number, &target) == 2){
//		if (target < 2 || target > 10){
//			printf("Please input N between 2 ~ 10!\n");
//			printf("Enter the integer and N for notation(q to quit):");
//			continue;
//		}
//		printf("Convert %lu to %hu notation is: ", number, target);
//		to_base_n(number, target);
//		putchar('\n');
//		printf("Enter the integer and N for notation(q to quit):");
//	}
//	return 0;
//}
//void to_base_n(unsigned long n, unsigned short t){
//	if (t < 2 || t > 10){
//		printf("The function noly convert 2 ~ 10\n");
//		return;
//	}
//	int r;
//	r = n % t;
//	if (n >= 2) to_base_n(n / t, t);
//	printf("%d", r);
//}

//void Fibonacci(int n);
//int main(void){
//	int n;
//	printf("Enter the number of Fibonacci (q to quit):");
//	while (scanf("%d", &n) == 1){
//		if (n >= 2){
//			Fibonacci(n);
//			printf("Enter the number of Fibonacci (q to quit):");
//		}
//	}
//	return 0;
//}
//
//void Fibonacci(int n){
//	unsigned long f1, f2, temp;
//	f1 = 1;
//	f2 = 1;
//	for (int i = 0; i < n; i++){
//		printf("%lu ", f1);
//		temp = f1 + f2;
//		f1 = f2;
//		f2 = temp;
//	}
//	printf("\n");
//}