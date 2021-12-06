#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//#define SIZE 81
//#define LIM 20
//#define HALT ""
//void stsrt(char *strings[], int num);
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	char input[LIM][SIZE];
//	char *ptstr[LIM];
//	int ct = 0;
//	int k;
//
//	printf("Input up to %d lines, and I will sort them.\n", LIM);
//	printf("To stop, press the Enter key at a line's start.\n");
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL
//		&& input[ct][0] != '\0')
//	{
//		ptstr[ct] = input[ct];
//		ct++;
//	}
//	stsrt(ptstr, ct);
//	puts("\nHere's the sorted list:\n");
//	for (k = 0; k < ct; k++)
//		puts(ptstr[k]);
//
//	return 0;
//}
//
//void stsrt(char *strings[], int num)
//{
//	char *temp;
//	int top, seek;
//
//	for (top = 0; top < num - 1; top++)
//		for (seek = top + 1; seek < num; seek++)
//		if (strcmp(strings[top], strings[seek]) > 0)
//		{
//			temp = strings[top];
//			strings[top] = strings[seek];
//			strings[seek] = temp;
//		}
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
//#define LIMIT 81
//void ToUpper(char *);
//int PunctCount(const char *);
//
//int main(void)
//{
//	char line[LIMIT];
//	char * find;
//
//	puts("Please enter a line:");
//	fgets(line, LIMIT, stdin);
//	find = strchr(line, '\n');
//	if (find)
//		*find = '\0';
//	ToUpper(line);
//	puts(line);
//	printf("That line has %d punctuation characters.\n", PunctCount(line));
//
//	return 0;
//}
//
//void ToUpper(char * str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//int PunctCount(const char * str)
//{
//	int ct = 0;
//	while (*str)
//	{
//		if (ispunct(*str))
//			ct++;
//		str++;
//	}
//	return ct;
//}

//int main()
//{
//	int month;
//
//	printf("请输入月份:");
//	scanf("%d", &month);
//
//	if (month >= 3 && month <= 5)
//		puts("是春天。");
//	else if (month >= 6 && month <= 8)
//		puts("是夏天。");
//	else if (month >= 9 && month <= 11)
//		puts("是秋天。");
//	else if (month == 1 || month == 2 || month == 12)
//		puts("是冬天。");
//	else
//		puts("输入月份不存在!!\a");
//
//	return (0);
//}

//switch语句的用法
//int main(void)
//{
//	int num;
//
//	printf("请输入一个整数。");
//	scanf("%d", &num);
//
//	if (num % 3 == 0)
//		puts("该数能被3整除。");
//	else if (num % 3 == 1)
//		puts("该数除以3的余数是1。");
//	else
//		puts("该数除以3的余数是2。");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//
//	printf("请输入一个整数。");
//	scanf("%d", &num);
//
//	switch (num % 3){
//	case 0: puts("该数能被3整除。");			break;
//	case 1: puts("该数除以3的余数是1。");		break;
//	case 2: puts("该数除以3的余数是2。");		break;
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int sw;
//	printf("请输入一个整数:");
//	scanf("%d", &sw);
//
//	switch (sw){
//	 case 1: puts("A");		puts("B");		break;
//	 case 2: puts("C");
//	 case 5: puts("D");		break;
//	 case 6: 
//	 case 7: puts("E");		break;
//	 default:puts("F");		break;
//	}
//}

//int main(void)
//{
//	int cont;
//
//	do{
//		int no;
//
//		printf("请输入一个整数:");
//		scanf("%d", &no);
//
//		if (no % 2)
//			puts("这个整数是奇数。");
//		else
//			puts("这个整数是偶数。");
//
//		printf("要重复一次吗? 【Yes...0 / No...9】:");
//		scanf("%d", &cont);
//	} while (cont == 0);
//
//	return 0;
//
//	//判断数字的奇偶性
//}

//int main(void)
//{
//	int num;
//
//	do{
//		printf("请输入一个非负整数:");
//		scanf("%d", &num);
//		if (num < 0);
//			puts("请不要输入负整数。");
//	} while (num < 0);
//
//	printf("该整数逆向显示的结果是");
//	do{
//		printf("%d", num % 10);
//		num = num / 10;
//	} while (num > 0);
//	puts("。");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//	int dig;
//
//	do{
//		printf("请输入一个非负整数:");
//		scanf("%d", &num);
//		if (num < 0);
//		puts("\a请不要输入负整数。");
//	} while (num < 0);
//
//	dig = 0;
//	do{
//		num = num / 10;
//		dig = dig + 1;
//	} while (num > 0);
//	printf("该整数的位数是%d. \n", dig);
//
//	return 0;
//
//	//；判断所输入整数有多少位数
//}

//计算1~5的合计值

//int main(void)
//{
//	int no = 1;
//	int sum = 0;
//
//	do{
//		sum = sum + no;
//		no = no + 1;
//	} while (no <= 5);
//
//	printf("1到5的合计值是%d. \n", sum);
//
//	return 0;
//}

//int main(void)
//{
//	int no = 1;
//	int sum = 0;
//
//	do{
//		sum += no;
//		no += 1;
//	} while (no <= 5);
//
//	printf("1到5的合计值是%d。\n", sum);
//
//	return 0;
//}

//int main(void)
//{
//	int no = 1;
//	int sum = 0;
//
//	do{
//		sum /= no;
//		no++;
//	} while (no <= 5);
//
//	printf("1到5的合计值是%d.\n", sum);
//
//	return 0;
//}

//int main(void)
//{
//	int no;
//
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//
//	while (no >= 0){
//		printf("%d ", no);
//		no--;
//	}
//	putchar('\n');
//
//	return 0;
//
//	//程序从大到小输出所输整数的所有以下的数
//}

//int main(void)
//{
//	int no;
//	
//	printf("请输入一个正整数:");
//	scanf("%d", &no);
//
//	while (no >= 0)
//		printf("%d", no--);
//
//	putchar('\n');
//
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//	int count;
//
//	printf("The command line has %d arguments:\n", argc - 1);
//	for (count = 1; count < argc; count++)
//		printf("%d: %s\n", count, argv[count]);
//	printf("\n");
//
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//	int i, times;
//
//	if (argc < 2 || (times = atoi(argv[1])) < 1)
//		printf("Usage: %s positive-number\n", argv[0]);
//	else
//		for (i = 0; i < times; i++)
//			puts("Hello, good looking");
//	return 0;
//}

//#define LIM 30
//char * s_get是(char * st, int n);
//
//int main()
//{
//	char number[LIM];
//	char * end;
//	long value;
//
//	puts("Enter a number (empty line to quit):");
//	while (s_gets(number, LIM) && number[0] != '\0')
//	{
//		value = strtol(number, &end, 10);
//		printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
//			value, end, *end);
//		value = strtol(number, &end, 16);
//		printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
//			value, end, *end);
//		puts("Next number:");
//	}
//	puts("Bye!\n");
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

//int main(void){
//	char note[] = "See you at the snack bar.";
//	char *ptr;
//	ptr = note;
//	puts(ptr);
//	puts(++ptr);
//	note[7] = '\0';
//	ptr = note;
//	puts(note);
//	puts(++ptr);
//	return 0;
//}

//int main(void){
//	char food[] = "Yummy";
//	char *ptr;
//	ptr = food + strlen(food);
//	while (--ptr >= food)
//		puts(ptr);
//	return 0;
//}

//int main(void){
//	char goldwyn[40] = "art of it all";
//	char samuel[40] = "I read p";
//	const char *quote = "the way through.";
//
//	strcat(goldwyn,quote);
//	strcat(samuel, goldwyn);
//	puts(samuel);
//	return 0;
//}

//char *pr(char *str){
//	char *pc;
//
//	pc = str;
//	while (*pc)
//		putchar(*pc++);
//	do{
//		putchar(*--pc);
//	} while (pc - str);
//	return (pc);
//}

#define M1 "How are ya, sweetie?"
char M2[40] = "Beat the clock.";
char *M3 = "chat";

//int main(void){
//	char words[80];
//	printf("M1");
//	puts(M1);
//	puts(M2);
//	puts(M2 + 1);
//	strcpy(words, M2);
//	strcat(words, "Win a toy.");
//	puts(words);
//	words[4] = '\0';
//	puts(words);
//	while (*M3)
//		puts(M3++);
//	puts(--M3);
//	puts(--M3);
//	M3 = M1;
//	puts(M3);
//	return 0;
//}

//int main(void){
//	char str1[] = "gawsie";
//	char str2[] = "bletonism";
//	char *ps;
//	int i = 0;
//	for (ps = str1; *ps != '\0'; ps++){
//		if (*ps == 'a' || *ps == 'e')
//			putchar(*ps);
//		else
//			(*ps)--;
//		putchar(*ps);
//		}
//	putchar('\n');
//	while (str2[i] != '\0'){
//		printf("%c", i % 3 ? str2[i] : '*');
//		++i;
//		}
//	return 0;
//}

//char * s_gets(char *st, int n){
//	char * ret_val;
//	ret_val = fgets(st, n, stdin);
//	//使用fget()函数读取标准输入中的n个字符
//	//将字符串的首地址保存至ret_val中
//	if (ret_val){
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}

//char * strlen(const char *st){
//	int count = 0;
//	while (*st++ != '\0')
//		count++;
//	return count;
//}

//char * s_gets(char *st, int n){
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val){
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}

//char * strblank(char *st){
//	while (*st != '\0' && *st != ' ')
//		*st++;
//	if (*st == '\0')
//		return NULL;
//	else
//		return st;
//}
//char * strblank1(const char *st){
//	while (*st != '\0' && *st != ' ')
//		st++;
//	if (*st == '\0')
//		return NULL;
//	else
//		return (char *)st;
//}

#define ANSWER "GRANT"
#define SIZE 40

char * s_gets(char *st, int n);
void ToUpper(char * st);

int main(int argc, char *argv[]){
	char try[SIZE];
	puts("Who is buried in grant's tomb?");
	s_gets(try, SIZE);
	ToUpper(try);
	while (strcmp(try, ANSWER) != 0){
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		ToUpper(try);
	}
	puts("That's right!");
	return 0;
}

void ToUpper(char * st){
	while (*st != '\0'){
		*st = toupper(*st);
		st++;
	}
}

char * s_gets(char *st, int n){
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val){
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}