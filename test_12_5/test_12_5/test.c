#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
//#define STLEN 10
//
//int main(void)
//{
//	char words[STLEN];
//
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//		fputs(words, stdout);
//	puts("Done.");
//
//	return 0;
//}

//#define STLEN 10
//int main(void)
//{
//	char words[STLEN];
//	int i;
//
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//	{
//		i = 0;
//		while (words[i] != '\n' && words[i] != '\0')
//			i++;
//		if (words[i] == '\n')
//			words[i] = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//		puts(words);
//	}
//	puts("done");
//	return 0;
//}

//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//int main(void)
//{
//	char name1[11], name2[11];
//	int count;
//
//	printf("Please enter 2 names.\n");
//	count = scanf("%5s %10s", name1, name2);
//	printf("I read the %d nemes %s and %s.\n", count, name1, name2);
//
//	return 0;
//}

//字符串输出

//#define DEF "I am a #defined string."
//int main(void)
//{
//	char str1[80] = "An array was initialized to me.";
//	const char * str2 = "A pointer was initialized to me";
//
//	puts("I', an argument to puts().");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]); //数组类型
//	puts(str2 + 4);//指针类型
//
//	return 0;
//}

//int put2(const char * string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');  //不统计换行符
//
//	return (count);
//}

//void put1(const char *);
//int put2(const char *);
//
//int main(void)
//{
//	put1("If I'd as much money");
//	put1(" as I could spend,\n");
//	printf("I count %d characters.\n",
//		put2("I never would cry old chairs to mend."));
//	return 0;
//}
//
//void put1(const char * string)
//{
//	while (*string)  //与 *string != '\0'相同
//		putchar(*string++);
//}
//
//int put2(const char * string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//
//	return(count);
//
//
//}
//结果
//If I'd as much money as I could spend,
//I never would cry old chairs to mend.
//I count 37 characters.  加上空格一起算

//fit.c -- 使用缩短字符串长度的函数

//void fit(char *, unsigned int);
//
//int main(void)
//{
//	char mesg[] = "Things should be as simple as possible,"
//							"but not simpler.";
//	puts(mesg);
//	fit(mesg, 38);
//	puts(mesg);
//	puts("Let's look at somem more of the string.");
//	puts(mesg + 39);
//
//	return 0;
//}
//
//void fit(char *string, unsigned int size)
//{
//	if (strlen(string) > size)
//		string[size] = '\0';
//}

//#define SIZE 80
//char * s_gets(char * st, int n);
//int main(void)
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE))
//	{
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//	}
//	else
//		puts("End of file encountered!");
//	puts("bye");
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define SIZE 30
//#define BUGSIZE 13
//char * s_gets(char * st, int n);
//int main(void)
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//	char bug[BUGSIZE];
//	int available;
//	puts("What is your favorite flower?");
//	s_gets(flower, SIZE);
//	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
//		strcat(flower, addon);
//	puts(flower);
//	puts("What is your favorite bug?");
//	s_gets(bug, BUGSIZE);
//	available = BUGSIZE - strlen(bug) - 1;
//	strncat(bug, addon, available);
//	puts(bug);
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}

//strcmp函数
//#define ANSWER "Grant"
//#define SIZE 40
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char try[SIZE];
//
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (try != ANSWER)
//	{
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define ANSWER "Grant"
//#define SIZE 40
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char try[SIZE];
//
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (strcmp(try, ANSWER) != 0)
//	{
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//int main(void)
//{
//	printf("strcmp(\"A\", \"A\") is ");
//	printf("%d\n", strcmp("A", "A"));
//
//	printf("strcmp(\"A\", \"B\") is ");
//	printf("%d\n", strcmp("A", "B"));
//
//	printf("strcmp(\"B\", \"A\") is ");
//	printf("%d\n", strcmp("B", "A"));
//
//	printf("strcmp(\"C\", \"A\") is ");
//	printf("%d\n", strcmp("C", "A"));
//
//	printf("strcmp(\"Z\", \"a\") is ");
//	printf("%d\n", strcmp("Z", "a"));
//
//	printf("strcmp(\"apples\", \"apple\") is ");
//	printf("%d\n", strcmp("apples", "apple"));
//
//	return 0;
//	//比较字符的大小
//	//相同则返回0
//}

//用strcmp()函数检查程序是否要停止读取输入
//#define SIZE 80
//#define LIM 10
//#define STOP "quit"
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char input[LIM][SIZE];
//	int ct = 0;
//
//	printf("Enter up to %d lines (type quit to quit):\n", LIM);
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL &&
//				 strcmp(input[ct], STOP) != 0)
//	{
//		ct++;
//	}
//	printf("%d strings entered\n", ct);
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define LISTSIZE 6
//int main()
//{
//	const char * list[LISTSIZE] =
//	{
//		"astronomy", "astounding",
//		"astrophysics", "ostracize",
//		"asterism", "astrophobia"
//	};
//	int count = 0;
//	int i;
//	for (i = 0; i < LISTSIZE; i++)
//		if (strncmp(list[i], "astro", 5) == 0)
//		{
//			printf("Found: %s\n", list[i]);
//			count++;
//		}
//	printf("The list contained %d words beginning"
//		" with astro.\n", count);
//	return 0;
//}

//int main(void)
//{
//	int vx;
//
//	printf("请输入一个:");
//	scanf("%d", &vx);
//	
//	if (vx % 5)
//		puts("输入的整数不能整除。");
//
//	return (0);
//}

//能被2整数就是偶数，不能整除则为奇数
//int main(void)
//{
//	int no;
//
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//
//	if (no % 2)
//		puts("输入的整数是奇数。");
//
//	return 0;
//}

//int main(void)
//{
//	int vc;
//
//	printf("请输入一个整数:");
//	scanf("%d", &vc);
//
//	if (vc % 5)
//		puts("该整数不能被5整除。");
//	else
//		puts("该整数能被5整除。");
//
//	return 0;
//
//	//能被5整除输出能被，不能输出第一个puts
//}

//int main(void)
//{
//	int num;
//
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//
//	if (num)
//		puts("该整数不是0。");
//	else
//		puts("该整数是0。");
//
//	return 0;
//}

//int main(void)
//{
//	int x1, x2;
//
//	puts("请输入两个整数。");
//	printf("整数1:");  scanf("%d", &x1);
//	printf("整数2:");  scanf("%d", &x2);
//
//	if (x1 == x2)
//		puts("它们相等。");
//	else
//		puts("它们不相等。");
//	return 0;
//}

//int main(void)
//{
//	int a;
//
//	printf("请输入一个整数:");
//	scanf("%d", &a);
//
//	if (a % 10 )== 5
//		puts("该整数的个位数是5。");
//
//	return 0;
//
//	//a模10 后的余数和5做比较， 然后打印个位数
//}

//int main(void)
//{
//	int no;
//	printf("请输入一个整数:");
//	scanf("%d", &no);     切记两个数是两个%d%d
//  
//
//	if (no == 0)
//		puts("该整数为0。");
//	else if (no > 0)
//		puts("该整数为正数。");
//	else
//		puts("该整数为负数。");
//
//	return (0);
//}

//int main(void)
//{
//	int we, er;
//	printf("请输入两个整数:");
//	scanf("%d%d", &we, &er);
//
//	if (we == er)
//		puts("这两个数相等。");
//	else if (we > er)
//		puts("we大于er。");
//	else
//		puts("we小于er。");
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	
//	puts("请输入两个整数。");
//	printf("整数1:");    scanf("%d", &a);
//	printf("整数2:");    scanf("%d", &b);
//
//	if (a > b)
//		printf("较大的数是%d。\n", a);
//	else
//		printf("较大的数是%d。\n", a);
//
//	return 0;
//
//	//两个数做比较，打印出最大的那个数
//}

//int main(void)
//{
//	int a, b, max;
//
//	puts("请输入两个整数。");
//	printf("整数1:");    scanf("%d", &a);
//	printf("整数2:");    scanf("%d", &b);
//
//	if (a > b) max = a; else max = b;
//		printf("较大的数是%d。\n", max);
//
//	return 0;
//
//}

//int main(void)
//{
//	int a, b, c, max;
//
//	puts("请输入三个整数。");
//	printf("整数1:");    scanf("%d", &a);
//	printf("整数2:");    scanf("%d", &b);
//	printf("整数3:");    scanf("%d", &c);
//
//	max = a;
//	if (b < max) max = b;
//	if (c < max) max = c;
//
//	printf("最小值是%d。\n", max);
//
//	return 0;
//}


//int main(void)
//{
//	int n1, n2, max;
//
//	puts("请输入两个整数。");
//	printf("整数1:");	scanf("%d", &n1);
//	printf("整数2:");	scanf("%d", &n2);
//
//	max = (n1 > n2) ? n1 : n2;
//}

//差值计算
//int main(void)
//{
//	int n1, n2;
//
//	puts("请输入两个整数。");
//	printf("整数1:");	scanf("%d", &n1);
//	printf("整数2:");	scanf("%d", &n2);
//
//	printf("它们的差是%d。\n", (n1 > n2) ? n1 - n2 : n2 - n1);
//
//	return 0;
//}

//int main(void)
//{
//	int n1, n2,max,min;
//
//	puts("请输入两个整数。");
//	printf("整数1:");	scanf("%d", &n1);
//	printf("整数2:");	scanf("%d", &n2);
//
//	if (n1 > n2){
//		max = n1;
//		min = n2;
//	}
//	else{
//		max = n2;
//		min = n1;
//	}
//
//	printf("较大的数是%d。\n", max);
//	printf("较小的数是%d。\n", min);
//
//	return 0;
//}

//#define SIZE 40
//#define LIM 5
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i = 0;
//
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s doesn't begin with q!\n", temp);
//		else
//		{
//			strcpy(qwords[i], temp);
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define WORDS "beast"
//#define SIZE 40
//
//int main(void)
//{
//	const char * orig = WORDS;
//	char copy[SIZE] = "Be the best that you can be.";
//	char * ps;
//
//	puts(orig);  
//	puts(copy); 
//	ps = strcpy(copy + 7, orig);
//	puts(copy); 
//	puts(ps);   
//
//	return 0;
//}

//#define SIZE 40
//#define TARGSIZE 7
//#define LIM 5
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char qwords[LIM][TARGSIZE];
//	char temp[SIZE];
//	int i = 0;
//
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s doesn't begin with q!\n", temp);
//		else
//		{
//			strncpy(qwords[i], temp, TARGSIZE - 1);
//			qwords[i][TARGSIZE - 1] = '\0';
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

#define MAX 20
char * s_gets(char * st, int n);

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts("Enter your first name:");
	s_gets(first, MAX);
	puts("Enter your last name:");
	s_gets(last, MAX);
	puts("Enter your prize money:");
	scanf("%lf", &prize);
	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts(formal);

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}