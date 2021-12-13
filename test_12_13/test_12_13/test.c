#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//#define NLEN 30
//struct namect{
//	char fname[NLEN];
//	char lname[NLEN];
//	int letters;
//};
//
//void getinfo(struct namect *);
//void makeinfo(struct namect *);
//void showinfo(const struct namect *);
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	struct namect person;
//
//	getinfo(&person);
//	makeinfo(&person);
//	showinfo(&person);
//	return 0;
//}
//
//void getinfo(struct namect * pst)
//{
//	printf("Please enter your first name.\n");
//	s_gets(pst->fname, NLEN);
//	printf("Please enter your last name.\n");
//	s_gets(pst->lname, NLEN);
//}
//
//void makeinfo(struct namect * pst)
//{
//	pst->letters = strlen(pst->fname) + strlen(pst->lname);
//}
//
//void showinfo(const struct namect  * pst)
//{
//	printf("%s %s, your name contains %d letters.\n",
//		pst->fname, pst->lname, pst->letters);
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
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define NLEN 30
//struct namect {
//	char fname[NLEN];
//	char lname[NLEN];
//	int letters;
//};
//
//struct namect getinfo(void);
//struct namect makeinfo(struct namect);
//void showinfo(struct namect);
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	struct namect person;
//
//	person = getinfo();
//	person = makeinfo(person);
//	showinfo(person);
//
//	return 0;
//}
//
//struct namect getinfo(void)
//{
//	struct namect temp;
//	printf("Please enter your first name.\n");
//	s_gets(temp.fname, NLEN);
//	printf("Please enter your last name.\n");
//	s_gets(temp.lname, NLEN);
//
//	return temp;
//}
//
//struct namect makeinfo(struct namect info)
//{
//	info.letters = strlen(info.fname) + strlen(info.lname);
//
//	return info;
//}
//
//void showinfo(struct namect info)
//{
//	printf("%s %s, your name contains %d letters.\n",
//		info.fname, info.lname, info.letters);
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
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define SLEN 81
//
//struct namect {
//	char * fname;
//	char * lname;
//	int letters;
//};
//
//void getinfo(struct namect *);       //分配内存
//void makeinfo(struct namect *);
//void showinfo(const struct namect *);
//void cleanup(struct namect *);    //调用该函数的时候释放内存
//char * s_gets(char * st, int n);
//
//int main(void)
//{
//	struct namect person;
//
//	getinfo(&person);
//	makeinfo(&person);
//	showinfo(&person);
//	cleanup(&person);
//	
//	return 0;
//}
//
//void getinfo(struct namect * pst)
//{
//	char temp[SLEN];
//	printf("Please enter your first name.\n");
//	s_gets(temp, SLEN);
//	//分配内存以存储名
//	pst->fname = (char *)malloc(strlen(temp) + 1);
//	//把名拷贝道动态分配的内存中
//	strcpy(pst->fname, temp);
//	printf("Please enter your last name.\n");
//	s_gets(temp, SLEN);
//	pst->lname = (char *)malloc(strlen(temp) + 1);
//	strcpy(pst->lname, temp);
//}
//
//void makeinfo(struct namect * pst)
//{
//	pst->letters = strlen(pst->fname) +
//		strlen(pst->lname);
//}
//
//void showinfo(const struct namect * pst)
//{
//	printf("%s %s, your name contains %d letters.\n",
//		pst->fname, pst->lname, pst->letters);
//}
//
//void cleanup(struct namect * pst)
//{
//	free(pst->fname);
//	free(pst->lname);
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
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//#define MAXTITL 41
//#define MAXAUTL 31
//
//struct book {
//	char title[MAXTITL];
//	char author[MAXTITL];
//	float value;
//};
//
//int main(void)
//{
//	struct book readfirst;
//	int score;
//
//	printf("Enter test score: ");
//	scanf("%d", &score);
//	
//	if (score >= 84)
//		readfirst = (struct book) {
//			"Crime and Punishment",
//				"Fyodor Dostoyevsky",
//				11.25
//		};
//	else
//		readfirst = (struct book) {
//			"Mr. Bouncy's Nice Hat",
//				"Fred Winsome",
//				5.99
//		};
//	printf("Your assigned reading:\n");
//	printf("%s by %s: $%.2f\n", readfirst.title,
//		readfirst.author, readfirst.value);
//
//	return 0;
//}

//struct flex
//{
//	size_t count;
//	double average;
//	double scores[];  //伸缩型数组成员
//};
//
//void showFlex(const struct flex * p);
//
//int main(void)
//{
//	struct flex * pf1, *pf2;
//	int n = 5;
//	int i;
//	int tot = 0;
//
//	//为结构和数组分配存储空间
//	pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
//	pf1->count = n;
//	for (i = 0; i < n; i++)
//	{
//		pf1->scores[i] = 20.0 - i;
//		tot += pf1->scores[i];
//	}
//	pf1->average = tot / n;
//	showFlex(pf1);
//
//	n = 9;
//	tot = 0;
//	pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
//	pf2->count = n;
//	for (i = 0; i < n; i++)
//	{
//		pf2->scores[i] = 20.0 - i / 2.0;
//		tot += pf2->scores[i];
//	}
//	pf2->average = tot / n;
//	showFlex(pf2);
//	free(pf1);
//	free(pf2);
//
//	return 0;
//}
//
//void showFlex(const struct flex * p)
//{
//	int i;
//	printf("Scores : ");
//	for (i = 0; i < p->count; i++)
//		printf("%g ", p->scores[i]);
//	printf("\nAverage: %g\n", p->average);
//}


//int main(void)
//{
//	int i, no;
//	unsigned long counter = 0;
//
//	for (no = 2; no <= 100; no++){
//		for (i = 2; i < no; i++){
//			counter++;
//			if (no % i == 0)  //判断两边相模余数为0就不是质数
//				break;
//		}
//		if(no == i)
//			printf("%d\n", no);
//	}
//	printf("乘除运算的次数: %lu\n", counter);
//
//	return 0;
//}

//int main(void)
//{
//	int i, no;
//	unsigned long counter = 0;
//
//	no = 2;
//	printf("%d\n", no++);
//	
//	for (; no <= 1000; no += 2){
//		for (i = 2; i < no; i++){
//			counter++;
//			if (no % i == 0)
//				break;
//		}
//		if (no == i)
//			printf("%d\n", no);
//	}
//	printf("乘除运算的次数:%lu\n", counter);
//
//	return 0;
//}

//int main(void)
//{
//	int i, no;
//	unsigned long counter = 0;
//
//	no = 2;
//	printf("%d\n", no++);
//
//	for (; no <= 1000; no += 2){
//		for (i = 3; i < no; i += 2){
//			counter++;
//			if (no % i == 0)
//				break;
//		}
//		if (no == i)
//			printf("%d\n", no);
//	}
//	printf("乘除运算的次数:%lu\n", counter);
//
//	return 0;
//}

//int main(void)
//{
//	int i, no;
//	int prime[500];
//	int ptr = 0;
//	int prt = 0;
//	unsigned long counter = 0;
//
//	prime[prt++] = 2;
//	prime[prt++] = 3;
//
//	for (no = 5; no <= 1000; no += 2){
//		for (i = 1; i < ptr; i++){
//			counter++;
//			if (no % prime[i] == 0)
//				break;
//		}
//		if (ptr == i)
//			prime[ptr++] = no;
//	}
//	for (i = 0; i < ptr; i++)
//		printf("%d\n", prime[i]);
//	printf("乘除运算的次数:%lu\n", counter);
//
//	return 0;
//}

//int maxof(int x, int y)
//{
//	if (x > y)
//		return (x);
//	else
//		return (y);
//}
//
//int main(void)
//{
//	int na, nb;
//
//	puts("请输入两个整数。");
//	printf("整数1:");	scanf("%d", &na);
//	printf("整数2:");	scanf("%d", &nb);
//
//	printf("较大整数的值是%d。\n", maxof(na, nb));
//
//	return (0);
//}
//
//#define FUNDLEN 50
//#define N 2
//
//struct funds {
//	char	bank[FUNDLEN];
//	double	bankfund;
//	char	save[FUNDLEN];
//	double	savefund;
//};
//
//double sum(const struct funds money[], int n);
//
//int main(void)
//{
//	struct funds jones[N] = {
//		{
//			"Garlic-Melon Bank",
//			4032.27,
//			"Lucky's Savings and Loan",
//			8543.94
//		},
//		{
//			"Honest Jack's Bank",
//			3620.88,
//			"Party Time Savings",
//			3802.91
//		}
//	};
//
//	printf("The Joneses have a total of $%.2f.\n", sum(jones, N));
//
//	return 0;
//}
//
//double sum(const struct funds money[], int n)
//{
//	double total;
//	int i;
//
//	for (i = 0, total = 0; i < n; i++)
//		total += money[i].bankfund + money[i].savefund;
//
//	return (total);
//}

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char * s_gets(char * st, int n);
struct book {
	char title[MAXTITL];
	char author[MAXTITL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}

	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size,
		1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title,
			library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL
		&& library[count].title[0] = '\0')
	{
		puts("Now enter the athor.");
		s_gets(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			puts("Enter the next title.");
	}

	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
			library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount,
			pbooks);
	}
	else
		puts("No books? Too bad.\n");

	puts("Bye.\n");
	fclose(pbooks);
	
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
		while (getchar() != '\n')
			continue;
	}
	return ret_val;
}