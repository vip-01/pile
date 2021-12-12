#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//char * s_gets(char * st, int n);
//#define MAXTITL 41
//#define MAXAUTL 31
//
//struct book{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//int main(void)
//{
//	struct book library;
//
//	printf("Please enter the book title.\n");
//	s_gets(library.title, MAXTITL);
//	printf("Now enter the author.\n");
//	s_gets(library.author, MAXAUTL);
//	printf("Now enter the value.\n");
//	scanf("%f", &library.value);
//	printf("%s by %s: $%.2f\n", library.title,
//		library.author, library.value);
//	printf("%s: \"%s\" ($%.2f)\n", library.author,
//		library.title, library.value);
//	printf("Done.\n");
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}

//char * s_gets(char * st, int n)
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100
//
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//int main(void)
//{
//	struct book library[MAXBKS];
//	int count = 0;
//	int index;
//
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
//		&& library[count].title[0] != '\0')
//	{
//		printf("Now enter the author.\n");
//		s_gets(library[count].author, MAXAUTL);
//		printf("Now enter the value.\n");
//		scanf("%f", &library[count++].value);
//		while (getchar() != '\n')
//			continue;
//		if (count < MAXBKS)
//			printf("Enter the next title.\n");
//	}
//		if (count > 0)
//		{
//			printf("Here is the list of your books:\n");
//			for (index = 0; index < count; index++)
//				printf("%s by %s: $.2f\n", library[index].title,
//				library[index].author, library[index].value);
//		}
//		else
//			printf("No books? Too bad.\n");
//		return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//		while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}

//嵌套结构
//#define LEN 20
//const char * msgs[5] =
//{
//	"	Thank you for the wonderful evening, ",
//	"You certainly prove that a ",
//	"is a special kind of guy. We must get together",
//	"over a delicious ",
//	"and have a few laughs"
//};
//
//struct names{
//	char first[LEN];
//	char llast[LEN];
//};
//
//struct guy{
//	struct names handle;
//	char favfood[LEN];
//	char job[LEN];
//	float income;
//};
//
//int main(void)
//{
//	struct guy fellow = {
//		{ "Ewen", "Villard" },
//		"grilled salmon",
//		"personality coach",
//		68112.00
//	};
//
//	printf("Dear %s, \n\n", fellow.handle.first);
//	printf("%s%s.\n", msgs[0], fellow.handle.first);
//	printf("%s%s\n", msgs[1], fellow.job);
//	printf("%s\n", msgs[2]);
//	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
//	if (fellow.income > 150000.0)
//		puts("!!");
//	else if (fellow.income > 75000.0)
//		puts("!");
//	else
//		puts(".");
//	printf("\n%40s%s\n", " ", "See you soon,");
//	printf("%40s%s\n", " ", "Shalala");
//
//	return 0;
//
//	//结果：
//	Dear Ewen,
//
//		Thank you for the wonderful evening, Ewen.
//		You certainly prove that a personality coach
//		is a special kind of guy.We must get together
//		over a delicious grilled salmonand have a few laughs.
//
//		See you soon,
//		Shalala
//}


//#define LEN 20
//
//struct names{
//	char first[LEN];
//	char last[LEN];
//};
//
//struct guy{
//	struct names handle;
//	char favfood[LEN];
//	char job[LEN];
//	float income;
//};
//
//int main(void)
//{
//	struct guy fellow[2] = {
//		{ { "Ewen", "Villard" },
//			"grilled salmon",
//			"personality coach",
//			68112.00
//		},
//		{ { "Rodney", "Swillbelly" },
//			"tripe",
//			"tabloid editor",
//			432400.00
//		}
//	};
//	struct guy * him;
//
//	printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
//	him = &fellow[0];
//	printf("pointer #1: %p #2: %p\n", him, him + 1);
//	printf("him->income is $%.2f: (*him).income is $%.2f\n",
//		him->income, (*him).income);
//	him++;
//	printf("him->favfood is %s: him->handle.last is %s\n",
//		him->favfood, him->handle.last);
//
//	return 0;
//}

//#define FUNDLEN 50
//
//struct funds{
//	char	bank[FUNDLEN];
//	double	bankfund;
//	char	save[FUNDLEN];
//	double savefund;
//};
//
//double sum(double, double);
//
//int main(void)
//{
//	struct funds stan = {
//		"Garlic-Melon Bank",
//		4032.27,
//		"Lucky's Savings and Loan",
//		8543.94
//	};
//
//	printf("Stan has a total of $%.2f.\n",
//		sum(stan.bankfund, stan.savefund));
//	return 0;
//}
//
//double sum(double x, double y)
//{
//	return (x + y);
//}


//明解c语言

//int main(void)
//{
//	int i = 0;
//	int tensu[5];
//	int sum = 0;
//
//	puts("请输入学生的分数。");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%2d号:", i + 1);
//		scanf("%d", &tensu[i]);
//		sum += tensu[i];
//	}
//
//	printf("总分:%5d\n", sum);
//	printf("平均分:%5.1f\n", (double)sum / 5);
//
//	return 0;

	//计算总分和平均分
//}
//#define NUMBER 5
//int main(void)
//{
//	int i = 0;
//	int tensu[NUMBER];
//	int sum = 0;
//
//	puts("请输入学生的分数。");
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d号:", i + 1);
//		scanf("%d", &tensu[i]);
//		sum += tensu[i];
//	}
//
//	printf("总分:%5d\n", sum);
//	printf("平均分:%5.1f\n", (double)sum / NUMBER);
//
//	return 0;
//}

//#define NUMBER 5
//
//int main(void)
//{
//	int i;
//	int tensu[NUMBER];
//	int max, min;
//
//	puts("请输入学生的分数。");
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d号:", i + 1);
//		scanf("%d", &tensu[i]);
//	}
//
//	min = max = tensu[0];
//	for (i = 1; i < NUMBER; i++){
//		if (tensu[i] > max)  max = tensu[i];
//		if (tensu[i] < min)  min = tensu[i];
//	}
//
//	printf("最高分:%d\n", max);
//	printf("最低分:%d\n", min);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	double b = 0;
//
//	a = b = 1.5;
//
//	printf("%f\n", b);
//	printf("%d\n",a);
//
//	return 0;
//}

//#define NUMBER 5       //学生人数
//
//int main(void)
//{
//	int i;
//	int snum = 0;         //及格学生人数
//	int tensu[NUMBER];    //NUMBER名学生的分数
//	int succs[NUMBER];    //及格学生一览表(保存及格学生的下标)
//
//	puts("请输入学生的分数。");
//	for (i = 0; i < NUMBER; i++){
//		printf("%2d号:", i + 1);
//		scanf("%d", &tensu[i]);
//		if (tensu[i] >= 60)
//			succs[snum++] = i;   //添加到及格学生一览表
//	}
//
//	puts("及格学生一览表");
//	puts("------------");
//	for (i = 0; i < snum; i++)
//		printf("%2d号(%3d分)\n", succs[i] + 1, tensu[succs[i]]);
//
//	return 0;
//}

//#define NUMBER 80
//
//int main(void)
//{
//	int i, j;
//	int num;
//	int tensu[NUMBER];
//	int bunpu[11] = { 0 };
//
//	printf("请输入学生认识:");
//	do{
//		scanf("%d", &num);
//		if (num < 1 || num > NUMBER)
//			printf("\a人数范围[1到%d]:", NUMBER);
//	} while (num < 1 || num > NUMBER);
//
//	puts("请输入学生的分数。");
//	for (i = 0; i < num; i++){
//		printf("%2d号:", i + 1);
//		do{
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i] > 100)
//				printf("\a分数范围[0到100]:");
//		} while (tensu[i] < 0 || tensu[i] > 100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n*******");
//	printf("	100:");
//	for (j = 0; j < bunpu[10]; j++)
//		putchar('*');
//	putchar('\n');
//
//	for (i = 9; i >= 0; i--){
//		printf("%3d - %3d:", i * 10, i * 10 + 9);
//		for (j = 0; j < bunpu[i]; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}

//#define FUNDLEN 50
//
//struct funds{
//	char	bank[FUNDLEN];
//	double	bankfund;
//	char	save[FUNDLEN];
//	double	savefund;
//};
//
//double sum(const struct funds*);
//
//int main(void)
//{
//	struct funds stan = {
//		"Garlic-Melon Bank",
//		4032.27,
//		"Lucky's Savings and Loan",
//		8543.94
//	};
//
//	printf("Stan has a total of $%.2f\n", sum(&stan));
//
//	return 0;
//}
//double sum(const struct funds * money)
//{
//	return(money->bankfund + money->savefund);
//}


#define FUNDLEN 50

struct funds{
	char  bank[FUNDLEN];
	double bankfund;
	char  save[FUNDLEN];
	double savefund;
};

double sum(struct funds moolah);

int main(vid)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};

	printf("Stan has a total of $%.2f.\n", sum(stan));

	return 0;
}

double sum(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}
