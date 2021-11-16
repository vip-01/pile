#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 // 运算符优先级测试
//int main(void)
//{
//	int top, score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));  //最后这个数算完里面还剩一个括号，接着算
//	printf("top = %d, score = %d\n", top, score);
//
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof (int);
//	printf("n = %d, n has %u bytes; all ints have %zd bytes.\n",
//		n, sizeof n, intsize);
//
//	return 0;
//}

//#define SEC_PER_MIN 60
//把秒数转换为分和秒
//int main(void)
//{
//	int sec, min, left;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the numbber of seconds (<=0 to quit):\n");
//	scanf("%d", &sec);
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;
//		left = sec % SEC_PER_MIN;
//		printf("%d seconds is %d minutes, %d seconds.\n", sec,
//			min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//	
//	return 0;
//}

//int main(void)
//{
//	int ultra = 0, super = 0;
//
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//	return 0;
//}

////前缀和后缀
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;  //后缀递增
//	pre_b = ++b;   //前缀递增
//	printf("a a_post   b   pre_b \n");  //先打印a 1 2 换顺序为2 1
//	printf("%ld % 5d % 5d % 5d\n", a, a_post, b, pre_b);
//
//	return 0;   //结果为2 1 2 2；
//}

//#define MAX 100
//
//int main(void)
//{
//	int count = MAX + 1;
//
//	while (--count > 0) {
//		printf("%d bottles of spring water on the wall, "
//			"%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//	return 0;
//}

//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)  //求1~20加起来的和
//		sum = sum + count;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//复合语句块
//int main(void)
//{
//	int index, sam;
//	index = 0;
//	while (index++ < 10)
//	{
//		sam = 10 * index + 2;
//		printf("sam = %d\n", sam);
//	}
//	return 0;
//}
//自动转换类型
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch = 1107;
//	printf("Now ch = %c\n", ch);
//	ch = 80.89;
//	printf("Now ch = %c\n", ch);
//
//	return 0;
//}

//void pound(int n); //ANSi函数原型声明
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6.0;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//}
//
//void pound(int n)
//{
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}

//running.c程序
//const int S_PER_M = 60;
//const int S_PER_H = 3600;
//const double M_PER_K = 0.62137;
//
//int main(void)
//{
//	double distk, distm;
//	double rate;
//	int min, sec;
//	int time;
//	double mtime;
//	int mmin, msec;
//
//	printf("This program coonverts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk);
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//
//	time = S_PER_M * min + sec;
//	distm = M_PER_K * distk;
//	rate = distm / time * S_PER_H;
//	mtime = (double)time / distm;
//	mmin = (int) mtime / S_PER_M;
//	msec = (int)mtime  % S_PER_M;
//
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
//		distk, distm, min, sec);
//	printf("That pace corresponds to running a mile in %d min, ",
//		mmin);
//	printf("%d sec.\nnYour average speed was %1.2f mph.\n", msec,
//		rate);
//
//	return 0;
//
//}

//#define FORMAT "%s! C is cool!\n"
//int main(void)
//{
//	int num = 10;
//
//	printf(FORMAT,FORMAT);  //C
//	printf("%d\n", ++num);  //11
//	printf("%d\n", num++);  //12
//	printf("%d\n", num--);   //11
//	printf("%d\n", num);     //11
//
//	return 0;
//}

//int main(void)
//{
//	char c1, c2;
//	int diff;
//	float num;
//
//	c1 = 'S';
//	c2 = 'O';
//	diff = c1 - c2;
//	num = diff;  //=4
//	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num); //4 4.00  保留两位
//
//	return 0;
//}

//#define TEN 10
//int main(void)
//{
//	int n = 0;
//
//	while (n++ < TEN)
//		printf("%5d", n);
//	printf("\n");
//	
//	return 0;
//}

//#define END 'g'   //修改为END；
//
//int main(int argc, char *argv[])
//{
//	char n = 'a' - 1;   //增加这一步
//	while (n++ < END)
//	{
//		printf("%5c",n);
//		printf("\n");
//	}
//	return 0;
//}

//#define  MESG "COMPUTER BYTES DOG"
//
//int main(void)
//{
//	int n = 0;
//
//	while (n < 5)
//		printf("%s\n", MESG);
//	    n++;
//	printf("That's all.\n");
//
//	return 0;
//}

#define MIN_PER_HOU 60

int main(int argc, char *argv[]) {
	int hours, minutes, input;

	printf("CONVERT MINUTES TO HOURS!\n");   //输入数值60
	printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");  //60分钟=1个小时
	scanf("%d", &input);
	while (input > 0) {
		hours = input / MIN_PER_HOU;
		minutes = input%MIN_PER_HOU;
		printf("CONVERT TO %d  HOUR AND %d MINUTES\n", hours, minutes); //输入一个62 ，计算出62分钟等于1小时 2分钟

		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):"); //这里又倒回去了上面 重新输入分钟
		scanf("%d", &input);
	}
	printf("PROGRAM EXIT!\n");  //打印程序退出
}














































































































