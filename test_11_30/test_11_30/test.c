#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main(void) {
//	int counter = 0;
//	char ch;
//	while ((ch = getchar()) != EOF) {
//		if (counter++ == 10){
//			printf("\n");
//			counter = 1;
//		}
//		if (ch >= '\040'){
//			printf(" '\%c\'--%3d ", ch, ch);
//		}
//		else if (ch == '\n'){
//			printf("\\n--\\n\n");
//			counter = 0;
//		}
//		else if (ch == '\t'){
//			printf(" \\t--\\t ");
//		}
//		else{
//			printf(" \'%c\'--^%c ", ch, (ch + 64));
//		}
//	}
//	return 0;
//}

//#include <ctype.h>
//int main(void) {
//	int lowercase = 0;
//	int uppercase = 0;
//	char ch;
//	while ((ch = getchar()) != EOF){
//		if (ch >= 'A' && ch <= 'Z')
//			uppercase++;
//		if (ch >= 'a' && ch <= 'z')
//			lowercase++;
//
//		//使用ASCII码表中连续字符的特性进行判断
//	}
//	printf("There are %d uppercase, and %d lowercase in that file!\n", uppercase,
//		lowercase);
//	return 0;
//}

//#include <ctype.h>
//
//int main(void)
//{
//	int words = 0;
//	int letter = 0;
//	char ch;
//	while ((ch = getchar()) != EOF) {
//		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a' &&ch <= 'z'))
//			letter++;
//		if (ch == ' ' || ch == ',' || ch == '.' || ch == '\n')
//			words++;
//	}
//	printf("There are %d words, and %d character, %.2f C/W!\n", words, letter, 1.0*
//		letter / words);
//	return 0;
//}

//int main(void) {
//	int head = 1;
//	int tail = 100;
//	int guess = (head + tail) / 2;
//	//定义3个变量分别标识查找区域的起始位置，终止位置以及中数
//
//	char ch;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	do{
//		printf("Un...is your number %d?: ", guess);
//		if (getchar() == 'y') break;
//		printf("Well, then, %d is larger or smaller than yours? (1 or s):", guess);
//		while ((ch = getchar()) == '\n') continue;
//		if (ch == '1' || ch == 'L'){
//			tail = guess - 1;
//			guess = (head + tail) / 2;
//			continue;
//			//如果输入L，则标识目标数在区间的前半区，因此舍弃中数到终止位置的后半段数据
//			//随后切换变量tail和中数guess
//
//		}
//		else if (ch == 's' || ch == 'S'){
//			head = guess + 1;
//			guess = (head + tail) / 2;
//			continue;
//			//如果输入s，则表示目标数在区间后半区，因此可以舍弃起始数的前半段数据，
//			//随后切换变量head和中数guess
//		}
//		else{ continue; }
//	} while (getchar() != 'y');
//
//	printf("I knew i could do it!\n");
//	return 0;
//}

//char get_first(void);
//
//int main(void){
//	char ch;
//	ch = get_first();
//	printf("%c\n", ch);
//}
//
//char get_first(void){
//	char ch;
//	do{
//		ch = getchar();
//	} while (ch == ' ' || ch == '\n' || ch == '\t');
//	return ch;
//}

//#define EXTRA_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//
//void show_menu(void);
//float get_hours(void);
//void calc_salary(float base_salary, float hours);
//int main(void)
//{
//	float hours = 0;
//	char selected;
//	do{
//		show_menu();
//		selected = getchar();
//		while (getchar() != '\n') continue;
//
//		switch (selected){
//			case 'a':
//			case 'A':
//				printf("Hello, you select $8.75/hr. Enter the work hours: ");
//				scanf("%f", &hours);
//				calc_salary(8.75, hours);
//				break;
//			case 'b':
//			case 'B':
//				printf("Hello, you select $8.75/hr. Enter the work hours: ");
//				calc_salary(9.33, hours);
//				break;
//			case 'c':
//			case 'C':
//				printf("Hello, you select $8.75/hr. Enter the work hours: ");
//				calc_salary(10.00, hours);
//				break;
//			case 'd':
//			case 'D':
//				printf("Hello, you select $8.75/hr. Enter the work hours: ");
//				calc_salary(11.20, hours);
//				break;
//			case 'q':
//			case 'Q':
//				break;
//			default:
//				printf("Error selected! please retry!\n");
//				break;
//		}
//	} while (selected != 'q' && selected != 'Q');
//	printf("Done\n");
//	return 0;
//}
//void show_menu(void){
//	char s1[] = "a) $8.75/hr";
//	char s2[] = "b) $9.33/hr";
//	char s3[] = "c) $10.00/hr";
//	char s4[] = "d) $11.20/hr";
//	char s5[] = "q) quit";
//
//	printf("****************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action\n");
//	printf("$-40s", s1);
//	printf("$-40s\n", s2);
//	printf("$-40s", s3);
//	printf("$-40s\n", s4);
//	printf("$-40s\n", s5);
//	printf("****************************************************************\n");
//}
//
//void calc_salary(float base_salary, float hours){
//	float salary, tax, taxed_salary;
//
//	if (hours <= 30){
//		salary = hours*base_salary;
//		tax = salary*BASE_TAX;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40){
//		salary = hours*base_salary;
//		tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		taxed_salary = salary - tax;
//	}
//	else{
//		salary = (40 + (hours - 40)*EXTRA_HOUR)*base_salary;
//		if (salary <= 450) tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX;
//		else tax = 300 * BASE_TAX + (salary - 300)*EXTRA_TAX + (salary - 450)*EXCEED_TAX;
//		taxed_salary = salary - tax;
//	}
//	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n",
//		salary, tax, taxed_salary);
//	printf("\ncontinue....\n");
//}

//void show_menu(void);
////显示菜单输出
//float get_number(void);
////读取用户输入的运算数
//
//int main(void){
//	char operate;
//	float first, second;
//	do{
//		show_menu();
//		operate = getchar();
//		while (getchar() != '\n') continue;
//
//		switch (operate){
//			case 'a':
//				printf("Enter first number: ");
//				first = get_number();
//				printf("Enter second number: ");
//				first = get_number();
//				printf("%g + %g= %g \n", first, second, first + second);
//				break;
//			case 's':
//				printf("Enter first number: ");
//				first = get_number();
//				printf("Enter first number: ");
//				second = get_number();
//				printf("%g - %g = %g \n", first, second, first - second);
//				break;
//			case 'm':
//				printf("Enter first number: ");
//				first = get_number();
//				printf("Enter second number: ");
//				second = get_number();
//				printf("%g * %g= %g \n", first, second, first*second);
//				break;
//			case 'd':
//				printf("Enter first number: ");
//				first = get_number();
//				printf("Enter second number: ");
//				while ((second = get_number()) == 0){
//					printf("Enter a number other than 0: ");
//				}
//				printf("%g / %g = %g \n", first, second, first / second);
//				break;
//			case 'q':
//				break;
//			default:
//				printf("Please enter a char, such as a,s,m, d and q: \n");
//				while (getchar() != '\n');
//				break;
//		}
//		while (getchar() != '\n');
//	} while (operate != 'q');
//	printf("Bye!\n");
//	return 0;
//}
//
//void show_menu(void){
//	printf("Enter the operation of your choice:\n");
//	printf("a. add                s. subtract \n");
//	printf("m. multiply           d. divide \n");
//	printf("q. quit \n");
//}
//float get_number(void){
//	float f;
//	char c;
//	while (scanf("%g", &f) != 1){
//		while ((c = getchar()) != '\n')
//			putchar(c);
//		printf(" is not an number.\n");
//		printf("Please enter a number, such as 2.5,-1,78E8,or 3: ");
//	}
//	return f;
//}

//函数
//#define SIZE 50
//int main()
//{
//	float list[SIZE];
//
//	readlist(list, SIZE);
//	sort(list, SIZE);
//	average(list, SIZE);
//	bargraph(list, SIZE);
//	return 0;
//}

//#define NAME "GIGATHINK, INC."
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//
//void starbar(void);
//
//int main(void)
//{
//	starbar();
//	printf("%s\n", NAME);
//	printf("%s\n", ADDRESS);
//	printf("%s\n", PLACE);
//	starbar();
//
//	return 0;
//}
//
//void starbar(void)
//{
//	int count;
//
//	for (count = 1; count <= WIDTH; count++)
//		putchar('*');
//	putchar('\n');
//}

//int main(void)
//{
//	printf("%d", 15 + 37);
//
//	return 0;
//}

//int main(void)
//{
//	int vx, vy;
//
//	vx = 57;
//	vy = vx + 10;
//
//	printf("vx的值是%d. \n", vx);
//	printf("vy的值是%d. \n", vy);
//
//	return (0);
//}

//int main(void)
//{
//	int no;
//
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//
//	printf("它的10倍数是%d. \n", 10 * no);
//
//	return 0;
//}

//int main(void)
//{
//	int n1, n2;
//
//	puts("请输入两个整数。");
//	printf("整数1:");    scanf("%d", &n1);
//	printf("整数2:");    scanf("%d", &n2);
//
//	printf("它们的和是%d。\n", n1 + n2);
//
//	return 0;
//}

//int main(void)
//{
//	int n1, n2;
//	int wa;
//
//	puts("请输入两个整数。");
//	printf("整数1:");    scanf("%d", &n1);
//	printf("整数2:");    scanf("%d", &n2);
//
//	wa = n1 + n2;
//
//	printf("它们的和是%d。\n", wa);
//
//	return 0;
//}

//int main(void)
//{
//	puts("风 ");
//	puts("林 ");
//	puts("火 ");
//	puts("山 ");
//
//	return 0;
//
//	//输出：风，林，火，山
//}

//int main(void)
//{
//
//	int a1 = 0;
//	int b2 = 0;
//	puts("请输入两个整数: ");
//
//	printf("整数1:");    scanf("%d", &a1);
//	printf("整数2:");    scanf("%d", &b2);
//	int wa = 0;
//	wa = a1 * b2;
//
//	printf("乘积是%d \n", wa);
//
//	return 0;
//}

//int main(void)
//{
//
//	int a1 = 0;
//	int b2 = 0;
//	int c3 = 0;
//	puts("请输入三个整数: ");
//
//	printf("整数1:");    scanf("%d", &a1);
//	printf("整数2:");    scanf("%d", &b2);
//	printf("整数3:");    scanf("%d", &c3);
//	int wa = 0;
//	wa = a1 + b2 + c3;
//
//	printf("和是%d \n", wa);
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//
//	puts("请输入两个整数。");
//	printf("整数a:"); scanf("%d", &a);
//	printf("整数b:"); scanf("%d", &b);
//
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b);
//	printf("a %% b = %d\n", a % b);
//
//	return 0;
//	
//}

//int main(void)
//{
//	int no;
//
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//
//	printf("最后一位是%d。\n", no % 84);
//
//	return 0;
//}

//int main(void)
//{
//	int na, nb;
//
//	puts("请输入两个整数。");
//	printf("整数A:");  scanf("%d", &na);
//	printf("整数B:");  scanf("%d", &nb);
//
//	printf("A除以B得%d余%d。\n", na + nb, na * nb);
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//
//	printf("符号取反之后得值是%d。\n", -num);
//
//	//取这个整数得反数，如输入5 结果为-5
//
//	return 0;
//}

//int main(void)
//{
//
//	int a1 = 0;
//	int b2 = 0;
//	puts("请输入两个整数: ");
//
//	printf("整数1:");    scanf("%d", &a1);
//	printf("整数2:");    scanf("%d", &b2);
//	
//	printf("它们的平均值是%d \n", (a1 + b2) / 2);
//
//	return 0;
//}

//#include <string.h>
//#define NAME "GIGATHINK, INC."
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//#define SPACE ' '
//
//void show_n_char(char ch, int num);
//
//int main(void)
//{
//	int spaces;
//
//	show_n_char('*', WIDTH);
//	putchar('\n');
//	show_n_char(SPACE, 12);
//	printf("%s\n", NAME);
//	spaces = (WIDTH - strlen(ADDRESS)) / 2;
//
//	show_n_char(SPACE, spaces);
//	printf("%s\n", ADDRESS);
//	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
//
//	printf("%s\n", PLACE);
//	show_n_char('*', WIDTH);
//	putchar('\n');
//
//	return 0;
//}
//
//void show_n_char(char ch, int num)
//{
//	int count;
//
//	for (count = 1; count <= num; count++)
//		putchar(ch);
//}

//int imin(int, int);
//
//int main(void)
//{
//	int evil1, evil2;
//
//	printf("Enter a pair of integers (q to quit):\n");
//	while (scanf("%d %d", &evil1, &evil2) == 2)
//	{
//		printf("The lesser of %d and %d is %d.\n",
//			evil1, evil2, imin(evil1, evil2));
//		printf("Enter a pair of integers (q to quit):\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//int imin(int n, int m)
//{
//	int min;
//
//	if (n < m)
//		min = n;
//	else
//		min = m;
//	return min;
//
//	//两个数做比较
//}

//int imax(int, int);
//int main(void)
//{
//	printf("The maximum of %d and %d is %d.\n",
//		3, 5, imax(3));
//	printf("The maximum of %d and %d is %d.\n",
//		3, 5, imax(3.0, 5.0));
//	return 0;
//}
//
//int imax(int n, int m)
//{
//	return (n > m ? n : m);
//}

//void up_and_down(int);
//
//int main(void)
//{
//	up_and_down(1);
//	return 0;
//}
//
//void up_and_down(int n)
//{
//	printf("Level %d: n lovation %p\n", n, &n);
//	if (n < 4)
//		up_and_down(n + 1);
//	printf("LEVEL %d: n lovation %p\n", n, &n);
//}

//long fact(int n);
//long rfact(int n);
//int main(void)
//{
//	int num;
//
//	printf("This program calculates factorials.\n");
//	printf("Enter a value in the range 0-12 (q to quit):\n");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num < 0)
//			printf("No negative numbers, please.\n");
//		else if (num > 12)
//			printf("Keep input under 13.\n");
//		else
//		{
//			printf("loop: %d factorial = %ld\n",
//				num, fact(num));
//			printf("recursion: %d factorial = %ld\n",
//				num, rfact(num));
//		}
//		printf("Enter a value in the range 0-12 (q to quit):\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//long fact(int n)
//{
//	long ans;
//
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//
//	return ans;
//}
//
//long rfact(int n)
//{
//	long ans;
//
//	if (n > 0)
//		ans = n * rfact(n - 1);
//	else
//		ans = 1;
//
//	return ans;
//}

//以二进制形式打印整数
//void to_binary(unsigned long n);
//
//int main(void)
//{
//	unsigned long number;
//	printf("Enter an integer (q to quit):\n");
//	while (scanf("lu", &number) == 1)
//	{
//		printf("Binary equivalent: ");
//		to_binary(number);
//		putchar('\n');
//		printf("Enter an integer (q to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//void to_binary(unsigned long n)
//{
//	int r;
//
//	r = n % 2;
//	if (n >= 2)
//		to_binary(n / 2);
//	putchar(r == 0 ? '0' : '1');
//
//	return 0;
//}

//房间费率程序

//#include  "hotel.h"
//
//int main(void)
//{
//	int nights;
//	double hotel_rate;
//	int code;
//
//	while ((code = menu()) != QUIT)
//	{
//		switch (code)
//		{
//		case 1: hotel_rate = HOTEL1;
//			break;
//		case 2: hotel_rate = HOTEL2;
//			break;
//		case 3: hotel_rate = HOTEL3;
//			break;
//		case 4: hotel_rate = HOTEL4;
//			break;
//		default:hotel_rate = 0.0;
//			printf("Oops!\n");
//			break;
//		}
//		nights = getnights();
//		showprice(hotel_rate, nights);
//	}
//	printf("Thank you and goodbye.\n");
//
//	return 0;
//
//}

#include "hotel.h"
int menu(void)
{
	int code, status;

	printf("\n%s%s\n", STARS, STARS);
	printf("Enter teh number of the desired hotel:\n");
	printf("1) Fairfield Arms         2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza      2) The Stockton\n");
	printf("5) quit\n");
	printf("%s%s\n", STARS, STARS);
	while ((status = scanf("%d"), &code)) != 1 ||
		(code < 1 || code > 5))
	{
		if (status != 1)
			scanf("%*s");
		printf("Enter an integer from 1 to 5, please.\n");
	}
	return code;
}

int getnights(void)
{
	int nights;

	printf("How many nights are needed? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

void showprice(double rare, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= (DISCOUNT)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n", total);
}