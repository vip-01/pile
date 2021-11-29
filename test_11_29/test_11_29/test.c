#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float weight = 0.0;
//	float hight = 0.0;
//	while (scanf("%f %f", &weight, &hight) != EOF)
//	{
//		float bmi = weight / (hight*hight / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//计算一元二次方程
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			double disc = b*b - 4 * a*c;
//			if (disc == 0.0)
//			{
//				//有两个相等的实根
//				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//			}
//			else if (disc > 0.0)
//			{
//				//有2个不相等的实根
//				printf("x1=%.2lf;x2=%.2lf\n",
//					(-b - sqrt(disc)) / (2 * a), ((-b + sqrt(disc)) / (2 * a)));
//			}
//			else
//			{
//				//有2个虚根
//				double real = (-b) / (2 * a);
//				double image = sqrt(-disc) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
//					real, image, real, image);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	while (~scanf("%d %d", &y, &m))
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (~scanf("%lf%c%lf", &n1, &op, &n2))
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf * %.4lf = %.4lf", n1, n2, n1 * n2);
//			break;
//		case'/':
//			if (n2 == 0.0)
//				printf("Wrong!Division by zero!\n");
//			else
//				printf("%.4lf / %.4lf = %.4lf", n1, n2, n1 / n2);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//		putchar(ch);
//
//	return 0;
//}

//int main(void)
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int ch;
//	FILE * fp;
//	char fname[50];
//
//	printf("Enter the name of the file: ");
//	scanf("%s", fname);
//	fp = fopen(fname, "r");
//	if (fp == NULL)
//	{
//		printf("Failed to open file. Bye\n");
//		exit(1);
//	}
//	while ((ch = getc(fp)) != EOF)
//		putchar(ch);
//	fclose(fp);
//
//	return 0;
//}

//int main(void)
//{
//	int guess = 1;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while (getchar() != 'y')
//		printf("Well, then, is it %d?\n", ++guess);
//	printf("I knew I could do it!\n");
//
//	return 0;
//}



//int main(void)
//{
//	int guess = 1;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while (getchar() != 'y')
//	{
//		printf("Well, then, is it %d?\n", ++guess);
//		while (getchar() != '\n')
//			continue;
//	}
//}

//void display(char cr, int lines, int width);
//int main(void)
//{
//	int ch;
//	int rows, cols;
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != 'n')
//	{
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//}

//void display(char cr, int lines, int width);
//int main(void)
//{
//	int ch;
//	int rows, cols;
//
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		if (scanf("%d %d", &rows, &cols) != 2)
//			break;
//		display(ch, rows, cols);
//		while (getcahr() != '\n')
//			continue;
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//}


//long get_long(void)
//{
//	long input;
//	char ch;
//	while (scanf("%ld", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n');
//			putchar(ch);
//		printf(" is not an integer.\nnPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}

//#include  <stdbbool.h>
//
////验证输入的一个整数
//long get_long(void);
////验证范围的上下限是否有效
//bool bad_limits(long begin, long end,
//				long low, long high);
////计算a~b的整数平方和
//double sum_squares(long a, long b);
//int main(void)
//{
//	const long MIN = -10000000L;
//	const long MAX = +10000000L;
//	long start;
//	long stop;
//	double answer;
//
//	printf("This program computes the sum of the squares of "
//		"integers in a range.\nnThe lower bound should not "
//		"be less than -10000000 and\nthe upper bound "
//		"should not be more than +10000000.\nEnter the "
//		"limits (enter 0 for both limits to quit):\n"
//		"lower limit: ");
//	start = get_long();
//	printf("upper limit: ");
//	stop = get_long();
//	while (start != 0 || stop != 0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("Please try again.\n");
//		else
//		{
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers ");
//			printf("from %ld to %ld is %g\n",
//				start, stop, answer);
//		}
//		printf("Enter the limits (enter 0 for both "
//			"limits to quit):\n");
//		printf("lower limit: ");
//		start = get_long();
//		printf("upper limit: ");
//		stop = get_long();
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//long get_long(void)
//{
//	long input;
//	char ch;
//
//	while (scanf("%ld", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}
//
//double sum_squares(long a, long b)
//{
//	double tatal = 0;
//	long i;
//
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//
//	return total;
//}
//
//bool bad_limits(long begin, long end,
//	long low, long high)
//{
//	bool not_good = false;
//
//	if (begin > end)
//	{
//		printf("%ld isn't smaller than %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || en < low)
//	{
//		printf("Values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high)
//	{
//		printf("Values must be %ld or less.\n", high)
//			not_good = true;
//	}
//	return not_good;
//}


//char get_choice(void);
//void count(void);
//int main(void)
//{
//	int choice;
//
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//			case 'a': printf("Buy low, sell high.\n");
//				  break;
//			case 'b': putchar('\a');
//				  break;
//			case 'c': count();
//				  break;
//			default: printf("Program error!\n");
//		}
//	}
//	return 0;
//}

//char get_choice(void)
//{
//	int ch;
//	printf("Enter the letter of your choice:\n");
//	printf("a. advice          b. bell\n");
//	printf("c. count           q. quit\n");
//	ch = getchar();
//	while ((ch < 'a' || ch > 'c') && ch != 'q')
//	{
//		printf("Please respond with a, b, c,or q.\n");
//		ch = getchar();
//	}
//	return ch;
//}
//char get_first(void)
//{
//	int ch; 
//	ch = getchar();
//	while (getchar() != '\n')
//		continue;
//	return ch;
//}

//void count(void)
//{
//	int n, i;
//	printf("Count how far? Enter an integer:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	while (getchar() != '\n')
//		continue;
//}


//菜单程序
//char get_choice(void);
//char get_first(void);
//int get_int(void);
//void count(void);
//int main(void)
//{
//	int choice;
//
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//		case 'a': printf("Buy low, sell high.\n");
//				  break;
//		case 'b': putchar('\n');
//				  break;
//		case 'c': count();
//				  break;
//		default:  printf("Program error!\n");
//				  break;
//		}
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void count(void)
//{
//	int n, i;
//
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	while (getchar() != '\n')
//		continue;
//}
//
//char get_choice(void)
//{
//	int ch;
//
//	printf("Enter the letter of your choice:\n");
//	printf("a. advice        b. bell\n");
//	printf("c. count         q. quit\n");
//	ch = get_first();
//	while ((ch < 'a' || ch > 'c') && ch != 'q')
//	{
//		printf("Please respond with a, b, c, or q.\n");
//		ch = get_first();
//	}
//	return ch;
//}
//
//char get_first(void)
//{
//	int ch;
//
//	ch = getchar();
//	while (getchar() != '\n')
//		continue;
//
//	return ch;
//}
//
//int get_int(void)
//{
//	int input;
//	char ch;
//
//	while (scanf("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//
//	return input;
//}

int main(void) {
	int counter = 0;
	char ch;
	while ((ch = getchar()) != EOF) {
		counter++;
	}
	printf("The File has %d characters.\n", counter);
}