#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d total: %.lf%% were below freezing.\n",
//		all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//
//	return 0;
//}

//#define SPACE ' '
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}

//#include <ctype.h>
//交换打印原字符的下一个字符
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch)) //如果是一个字符
//		{
//			ch = tolower(ch);//先换成一小的再显示
//			putchar(ch + 1);//显示该字符的下一个字符
//		}
//		else               //否则
//			putchar(ch);//原样显示
//	}
//	putchar(ch); //如果为真直接执行打印并且换行；否则按原输入打印出来
//
//	return 0;
//}

//#define RATE1   0.13230       //首次使用360kwh的费率
//#define RATE2   0.15040       //接着再使用 108 kwh的费率
//#define RATE3   0.30025       //接着再使用 252 kwh的费率
//#define RATE4   0.34025       //使用超过 720kwh 的费率
//#define BREAK1  360.0         //费率的第1个分界点
//#define BREAK2  468.0         //费率的第2个分界点
//#define BREAK3  720.0         //费率的第3个分界点
//#define BASE1   (RATE1 * BREAK1)  //使用360kwh的费用
//#define BASE2   (BASE1 + (RATE2 * (BREAK2 - BREAK1)))   //使用468kwh的费用
//#define BASE3   (BASE2 + (RATE3 *(BREAK3 - BREAK2)))    //使用720kwh的费用
//
//int main(void)
//{
//	double kwh;         //使用的千瓦时
//	double bill;        //电费
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);           //%lf 对应double类型
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)     //360~468 kwh
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)                      //468~720 kwh
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else                                         //超过720 kwh
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}

//#include <stdbool.h>
//int main(void)
//{
//	unsigned long num;  //待测试的数
//	unsigned long div;   //可能的约数
//	bool isPrime;       //素数标记
//
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num %div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu.\n",
//					num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n",
//						num, div);
//				isPrime = false;  //该数不是素数
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis; ");
//		printf("Enter q to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}

//#define PERIOD '.' //用句点标识句子的结尾
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch = '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non_quote characters.\n", charcount);
//
//	return 0;
//
//}

//#include <ctype.h>    //为isspace()函数提供原型
//#include <stdbool.h>   //为bool true， false提供定义
//#define STOP '|'
//int main(void)
//{
//	char c;         //读入字符
//	char prev;        //读入的前一个字符
//	long n_chars = 0L;  //字符数
//	int n_lines = 0;    //行数
//	int n_words = 0;    //单词数
//	int p_lines = 0;    //不完整的行数
//	bool inword = false;  //如果c在单词中，inword等于true
//
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';                    //用于识别完整的行
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;      //统计字符
//		if (c == '\n')
//			n_lines++;   //统计行
//		if (!isspace(c) && !inword)
//		{
//			inword = true;   //开始一个新的单词
//			n_words++;    //统计单词
//		}
//		if (isspace(c) && inword)
//			inword = false;  //达到单词的末尾
//		prev = c;    //保存字符的值
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}

//#define COVERAGE 350
//int main(void)
//{
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score < MIN || score > MAX)
//		{
//			printf("%0.lf is an invalid value. Try again: ", score);
//			continue; //跳转至while循环的测试条件
//		}
//		printf("Accepting %0.lf:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.lf.\n", n, total / n);
//		printf("Low = 0.lf, high = %0.lf\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//	return 0;
//}

int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");

	return 0;
}