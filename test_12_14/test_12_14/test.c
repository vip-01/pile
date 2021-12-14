#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>   //C99特性

//char * s_gets(char * st, int n);
//
//enum spectrum{red,orange, yellow,green,blue,violet};
//const char * colors[] = { "red", "orange", "yellow",
//"green", "blue", "violet"};
//
//#define LEN 30
//
//int main(void)
//{
//	char choice[LEN];
//	enum spectrum color;
//	bool color_is_found = false;
//
//	puts("Enter a color (empty line to quit):");
//	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
//	{
//		for (color = red; color <= violet; color++)
//		{
//			if (strcmp(choice, colors[color]) == 0)
//			{
//				color_is_found = true;
//				break;
//			}
//		}
//		if (color_is_found)
//			switch (color)
//		{
//			case red: puts("Roses are red.");
//				break;
//			case orange: puts("Poppies are orange.");
//				break;
//			case yellow: puts("Sunflowers are yellow.");
//				break;
//			case green: puts("Grass is green.");
//				break;
//			case blue: puts("Bluebells are blue.");
//				break;
//			case violet: puts("Violets are violet.");
//				break;
//		}
//		else
//			printf("I don't know about the color %s.\n", choice);
//		color_is_found = false;
//		puts("Next color,please (empty line to quit):");
//	}
//	puts("Goodbye!");
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


//#define LEN 81
//
//char * s_gets(char * st, int n);
//
//char showmenu(void);
//void eatline(void);
//void show(void(*fp)(char *), char * str);
//void ToUpper(char *);
//void ToLower(char *);
//void Transpose(char *);
//void Dummy(char *);
//
//int main(void)
//{
//	char line[LEN];
//	char copy[LEN];
//	char choice;
//	void(*pfun)(char *);
//
//	puts("Enter a string (empty line to quit):");
//	while (s_gets(line, LEN) != NULL && line[0] != '\0')
//	{
//		while ((choice = showmenu()) != 'n')
//		{
//			switch (choice)
//			{
//			case 'u': pfun = ToUpper;	break;
//			case 'l': pfun = ToLower;	break;
//			case 't': pfun = Transpose;	break;
//			case 'o': pfun = Dummy;		break;
//			}
//			strcpy(copy, line);
//			show(pfun, copy);
//		}
//		puts("Enter a string (empty line to quit):");
//	}
//	puts("Bye!");
//
//	return 0;
//}
//
//char showmenu(void)
//{
//	char ans;
//	puts("Enter menu choice:");
//	puts("u) uppercase		l) lowercase");
//	puts("t) transposed case o) original case");
//	puts("n) next string");
//	ans = getchar();
//	ans = tolower(ans);
//	eatline();
//	while (strchr("ulton", ans) == NULL)
//	{
//		puts("Please enter a u, l, t, o, or n:");
//		ans = tolower(getchar());
//		eatline();
//	}
//
//	return ans;
//}
//
//void eatline(void)
//{
//	while (getchar() != '\n')
//		continue;
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
//void ToLower(char * str)
//{
//	while (*str)
//	{
//		*str = tolower(*str);
//		str++;
//	}
//}
//
//void Transpose(char * str)
//{
//	while (*str)
//	{
//		if (islower(*str))
//			*str = toupper(*str);
//		else if (isupper(*str))
//			*str = tolower(*str);
//		str++;
//	}
//}
//
//void Dummy(char * str)
//{
//	//不改变字符串
//}
//
//void show(void(*fp)(char *), char * str)
//{
//	(*fp)(str);
//	puts(str);
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

//struct house {
//	float sqft;
//	int rooms;
//	int stories;
//	char address[40];
//};
//
//int main(void)
//{
//	struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
//	struct house *sign;
//	sign = &fruzt;
//	printf("%d %d\n", fruzt.rooms, sign->stories);
//	printf("%s \n", fruzt.address);
//	printf("%c %c\n", sign->address[3], fruzt.address[4]);
//	return 0;
//}

/*e*//*xtern struct month moths[];
int cala_days(int month)
{
	int index, total = 0;
	if (month <1 || moth > 12) {
		return -1;
	}
	else{
		for (int index = 0; index < month; index++){
			total += months[index].days;
		}
	}
	return total;
}*/

//struct name {
//	char first[20];
//	char last[20];
//};
//
//struct bem {
//	int limbs;
//	struct name title;
//	char type[30];
//};
//
//struct bem * pb;
//struct bem deb = { 6, { "Berbnazel", "Gwolkapwolk" }, "Arcturan" };
//pb = &deb;

//struct month {
//	char month_name[10];
//	char month_abbrev[4];
//	int days;
//	int number;
//} months[12] = {
//	{ "January", "Jan", 31, 1 },
//	{ "February", "Feb", 28, 2 },
//	{ "March", "Mar", 31, 3 },
//	{ "April", "Apr", 30, 4 },
//	{ "May", "May", 31, 5 },
//	{ "June", "Jun", 30, 6 },
//	{ "July", "Jul", 31, 7 },
//	{ "August", "Aug", 31, 8 },
//	{ "September", "Sep", 30, 9 },
//	{ "October", "Oct", 31, 10 },
//	{ "November", "Nov", 30, 11 },
//	{ "December", "Dev", 31, 12 }
//};
////结构数组的初始化
//
//int cala_days(char* month);
//int main(int argc, char * argv[]) {
//	char name[10];
//	printf("Enter a capitalize month name: ");
//	scanf("%s", name);
//	while (strlen(name) > 3){
//		printf("The total to %s is %d \n", name, cala_days(name));
//		printf("Enter a capitalize month name: ");
//		scanf("%s", name);
//	};
//	printf("Done.");
//	return 0;
//}
//
//int cala_days(char* month)
//{
//	int total = 0;
//	for (int i = 0; i < 12; i++){
//		if (strcmp(month, months[i].month_name) == 0){
//			return total;
//		}
//		else{
//			total += months[i].days;
//		}
//	}
//
//	return -1;
//}
//


//struct month {
//	char month_name[10];
//	char month_abbrev[4];
//	int days;
//	int number;
//} months[12] = {
//	{ "January", "Jan", 31, 1 },
//	{ "February", "Feb", 28, 2 },
//	{ "March", "Mar", 31, 3 },
//	{ "April", "Apr", 30, 4 },
//	{ "May", "May", 31, 5 },
//	{ "June", "Jun", 30, 6 },
//	{ "July", "Jul", 31, 7 },
//	{ "August", "Aug", 31, 8 },
//	{ "September", "Sep", 30, 9 },
//	{ "October", "Oct", 31, 10 },
//	{ "November", "Nov", 30, 11 },
//	{ "December", "Dev", 31, 12 }
//};
////结构数组的初始化
//
//int cala_days(char* month, int day);
//int main(int argc, char * argv[]){
//	int year, day;
//	char month[10];
//	int result;
//	printf("Enter the YEAR MONTH DAY(seprate by blank) :");
//	scanf("%d %s %d", &year, month, &day);
//	while (year > 1000){
//		result = cala_days(month, day);
//		if (result < 0)
//			printf("Error input,retry.\n");
//		else
//			printf("The %d/%s/%d is %d days.\n", year, month, day, result);
//		printf("Enter the YEAR MONTH DAY(seprate by blank) :");
//		scanf("%d %s %d", &year, month, &day);
//	};
//	printf("Done.");
//	return 0;
//}
//
//int cala_days(char* month, int day)
//{
//	if (day < 1 || day > 31) return - 1;
//	//日期的简易判断
//	int total = 0;
//	int temp = atoi(month);
//	for (int i = 0; i < 12; i++){
//		if ((temp == months[i].number) || (strcmp(month, months[i].month_abbrev) ==
//			0) || (strcmp(month, months[i].month_name) == 0)){
//
//			return total + day;
//		}
//		else{
//			total += months[i].days;
//		}
//	}
//	return -1;
//}
//这一段

//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100
//
//struct book{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//char * s_gets(char * st, int n);
//
//void list_book(struct book library[], int count);
//void list_book_title(struct book library[], int count);
//void list_book_value(struct book library[], int count);
////声明排序函数
//int main(int argc, char * argv[])
//{
//	struct book library[MAXBKS];
//	int count = 0;
//	int index;
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL &&
//		library[count].title[0] != '\0')
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
//	if (count > 0)
//	{
//		list_book(library, count);
//		list_book_title(library, count);
//		list_book_value(library, count);
//		//分别显示排序结果
//	}
//	else
//		printf("No books? Too bad.\n");
//	return 0;
//}
//
//void list_book(struct book library[], int count){
//	//按输入顺序打印图书
//	printf("Here is the list of your books:\n");
//	for (int index = 0; index < count; index++)
//		printf("%s by %s: $%.2f\n", library[index].title, library[index].author,
//		library[index].value);
//}
//
//void list_book_title(struct book library[], int count){
//	//按图书字母排序打印，为了不改变原输入顺序，新建了指针数组进行排序和打印
//	char * ptitle[count];
//	char *temp;
//	int top, seel;
//
//	for (int index = 0; index < count; index++)
//		ptitle[index] = library[index].title;
//	for (top = 0; top < count - 1;top++)
//	for (seek = top + 1; seek < count;seek++)
//	if (strcmp(ptitle[top], ptitle[seek]) > 0)
//	{
//		temp = ptitle[top];
//		ptitle[top] = ptitle[seek];
//		ptitle[seek] = temp;
//	}
//	//通过ptitle数组指向的title进行比较排序
//	printf("Here is the list of your books by title :\n");
//	for (int index = 0; index < count;index++)
//		for (int i = 0; i < count;i++)
//		if (ptitle[index] == library[i].title)
//			//依据排序结果打印图书
//			printf("%s by %s: $%.2f\n", library[i].title, library[i].author,
//			library[i].value);
//}
//
//void list_book_value(struct book library[], int count){
//	//按照图书价格排序打印，为了不改变原输入顺序，新建了指针数组进行排序和打印
//	float * pvalue[count];
//	float *temp;
//	int top, seek;
//
//	for (int index = 0; index < count; index++)
//		pvalue[index] = &library[index].value;
//	for (top = 0; top < count - 1;top++)
//		for (seek = top + 1; seek < count;seek++)
//			if ((*pvalue[top] > *pvalue[seek]))
//			{
//				temp = pvalue[top];
//				pvalue[top] = pvalue[seek];
//				pvalue[seek] = temp;
//			}
//			printf("Here is the list of your books by value :\n");
//			for (int index = 0; index < count; index++)
//				for (int i = 0; i < count;i++)
//				if (*pvalue[index] == library[i].value)
//					printf("%s by %s: $%.2f\n", library[i].title, library[i].author,
//					library[i].value);
//
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else while (getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}


//int max3(int x, int y, int z)
//{
//	int max = x;
//
//	if (y < max) max = y;
//	if (z < max) max = z;
//	return (max);
//}
//
//int main(void)
//{
//	int na, nb, nc;
//
//	puts("请输入三个整数。");
//	printf("整数1:");	scanf("%d", &na);
//	printf("整数2:");	scanf("%d", &nb);
//	printf("整数3:");	scanf("%d", &nc);
//
//	printf("最大值是%d.\n", max3(na, nb, nc));
//
//	return 0;
//}

//int sqr(int x)
//{
//	return (x * x);
//}
//
//int diff(int x, int y)
//{
//	return (x > y ? x - y; y - x);
//}
//
//int main(void)
//{
//	int kx, ky, kx2, ky2;
//
//	puts("请输入两个整数。");
//	printf("整数kx:");	scanf("%d", &kx);
//	printf("整数ky:");	scanf("%d", &ky);
//
//	kx2 = sqr(kx);
//	ky2 = sqr(ky);
//	printf("kx和ky的平方差是%d。\n", diff(kx2, ky2));
//
//	return 0;
//}


//int power(int dx, int no)
//{
//	int i;;
//	int tmp = 1;
//
//	for (i = 1; i <= no; i++)
//		tmp *= dx;
//	return (tmp);
//}
//
//int main(void)
//{
//	int n;
//	int  x;
//
//	printf("请输入一个实数:");	scanf("%d", &x);
//	printf("请输入一个整数:");	scanf("%d", &n);
//
//	printf("%d的%d次幂是%d.\n", x, n, power(x, n));
//	
//	return 0;
//}

//void put_stars(int no)
//{
//	while (no-- > 0)
//		putchar('*');
//}
//
//int main(void)
//{
//	int i, ln;
//
//	printf("三角形有几层:");
//	scanf("%d", &ln);
//
//	for (i = 0; i <= ln; i++){
//		put_stars(i);
//		putchar('\n');
//	}
//
//	return 0;
//}

//int scan_uint(void){
//	int tmp;
//
//	do{
//		printf("请输入一个非负整数:");
//		scanf("%d", &tmp);
//		if (tmp < 0)
//			puts("\a请不要输入负整数。");
//	} while (tmp < 0);
//	return (tmp);
//}
//
//int rev_int(int num)
//{
//	int tmp = 0;
//
//	if (num > 0) {
//		do{
//			tmp = tmp * 10 + num % 10;
//			num /= 10;
//		} while (num > 0);
//	}
//	return (tmp);
//}
//
//int main(void)
//{
//	int nx = scan_uint();
//
//	printf("该整数倒转后的值是%d.\n", rev_int(nx));
//
//	return (0);
//}


//void Prtf1()
//
//{
//	printf("Hello\n");
//}
//
//int main()
//
//{
//	Prtf1();
//
//	return 0;
//}

//struct user {
//	char fname[15];
//	char mname[15];
//	char lname[15];
//};
//
//struct user_id{
//	char sid[30];
//	struct user name;
//}user_list[5] = {
//	{ "302039823", { "Flossie", "Mike", "Dribble" } } };
//
//
//void print_user_id(struct user_id list[], int num);
//
//int main(int argc, char * argv[])
//{
//	printf("Test to printf struct contents:\n");
//	print_user_id(user_list, 5);
//	return 0;
//}
//void print_user_id(struct user_id list[], int num){
//	for (int i = 0; i < num; i++){
//		if (strlen(list[i].sid) < 9) break;
//		printf("No %d: %s, ", i + 1, list[i].name.lname);
//		printf(" %s ", list[i].name.fname);
//		if (strlen(list[i].name.mname) > 0) printf("%c. ", list[i].name.mname[0]);
//		printf("--%s", list[i].sid);
//		printf("\n");
//	}
//}

#define CSIZE 4

typedef struct{
	char fname[30];
	char lname[30];
}FULL_NAME;

typedef struct{
	FULL_NAME name;
	float grade[3];
	float average;
}student;

void set_grade(student list[]);

void set_average(student list[]);

void get_info_all(student list[]);

void get_agerage_all(student list[]);
//计算全体平均分

int main(int argc, char * argv[]){
	student student_list[CSIZE] = {};
	set_grade(student_list);
	set_average(student_list);
	get_info_all(student_list);
	get_agerage_all(student_list);
	return 0;
}

void set_grade(student list[]){
	char fname[15], lname[15];
	int i = 0;
	while (i < CSIZE){
		printf("Enter the student name(FIRST_NAME LAST_NAME):");
		scanf("%s %s", fname, lname);
		if (strlen(fname) < 1 && strlen(lname) < 1){
			printf("Error in strdent name! retry!");
			printf("Enter the student name(FIRST_NAME LAST_NAME):");
			scanf("%s %s", fname, lname);
			break;
		}
		strcpy(list[i].name.fname, fname);
		strcpy(list[i].name.lname, lname);
		//读取用户输入，并复制道结构变量内
		printf("Enter the 3 score of %s:", fname);
		scanf("%f %f %f", &list[i].grade[0], &list[i].grade[1], &list[i].grade[2]);
		i++;
		//读取用户输入的3们成绩
	}
}

void set_average(student list[]){
	for (int i = 0; i < CSIZE; i++){
		list[i].average = (list[i].grade[0], list[i].grade[1] + list[i].grade[2]) / 3;
	}
}

void get_info_all(student list[]){
	for (int i = 0; i < CSIZE; i++){
		printf("No.%d: %s.%s : %5.2f %5.2f, average = %5.2f\n", i, list[i].
			name.fname,
			list[i].name.lname, list[i].grade[0], list[0].grade[1], list[i].
			grade[2], list[i].average);
	}
}

void get_agerage_all(student list[]){
	float sum = 0.0;
	for (int i = 0; i < CSIZE; ++i){
		sum += list[i].average;
	}
	printf("Class average is %.2f\n", sum / 4);
}