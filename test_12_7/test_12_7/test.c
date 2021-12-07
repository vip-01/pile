#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//#define SIZE 40
//
//char * read_char(char *st, int n);
//
//int main(int argc, char *argv[]){
//	char test[SIZE];
//	puts("Start tot test function. Enter a string.");
//	read_char(test, SIZE);
//	puts("The string you input is:");
//	puts(test);
//
//	return 0;
//}
//
//char * read_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//	} while (st[i] != EOF && ++i < n);
//
//	return st;
//}

//#define SIZE 40
//
//char * read_cchar(char *st, int n);
//
//int main(int argc, char *argv[]){
//	char test[SIZE];
//	puts("Start to test function.Enter a string.");
//	read_char(test, SIZE);
//	puts("The string you input is:");
//	puts(test);
//	
//	return 0;
//}
//
//char * red_char(char *st, int n){
//	int i = 0;
//	do{
//		st[i] = getchar();
//		if (st[i] == '\n' || st[i] == '\t' || st[i] == ' ')
//			break;
//	} while (st[i] != EOF && ++i < n);
//
//	return st;
//}

//#define SIZE 80
//char *get_word(char *out);
//
//int main(int argc, char *argv[]){
//	char output[SIZE];
//	get_word(output);
//	printf("Fist word you input is : %s", output);
//	return 0;
//}
//
//char * get_word(char *out){
//	char input[SIZE];
//	char *in = input;
//	puts("Enter a String:");
//	fgets(input, SIZE, stdin);
//
//	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
//		in++;
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0'){
//		*out++ = *in++;
//	}
//
//	return out;
//}

//#define SIZE 80
//char * get_word(char *out, int n);
//
//int main(int argc, char *argv[]){
//	char output[SIZE];
//	get_word(output, SIZE);
//	printf("First word you input is : %s", output);
//	return 0;
//}
//
//char * get_word(char * out, int n){
//	char input[SIZE];
//	char *in = input;
//	int i = 0;
//	puts("Enter a String:");
//	fgets(input, SIZE, stdin);
//
//	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
//		in++;
//
//	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n){
//		*out++ = *in++;
//		i++;
//	}
//
//	return out;
//}

//#define SIZE 80
//char* string_char(char* st, char c);
//
//int main(int argc, char *argv[]){
//	char source[SIZE];
//	char dest = ' ';
//	char *position;
//	printf("Enter a String: ");
//	fgets(source, SIZE, stdin);
//
//	while (dest != EOF){
//		printf("Enter a char to find(EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		if ((position = string_char(source, dest)) != NULL)
//			printf("Found the char %c in the %p\n", *position, position);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//	}
//	return 0;
//}
//
//char* string_char(char* st, char c){
//	while (*st != '\0'){
//		if (*st == c)
//			return st;
//		else
//			st++;
//	}
//	return NULL;
//}

//#define SIZE 80
//int is_within(char c, char* st);
//
//int main(int argc, char *argv[]){
//	char source[SIZE];
//	char dest = ' ';
//	char *position;
//	printf("Enter a String: ");
//	fgets(source, SIZE, stdin);
//	while (dest != EOF){
//		printf("Enter a char to find(EOF for Quit):");
//		while ((dest = getchar()) == '\n') continue;
//		if (is_within(dest, source) != 0)
//			printf("Found the char %c in the string\n", dest);
//		else
//			printf("Char %c not found. Try another?\n", dest);
//	}
//	return 0;
//}
//
//int is_within(char c, char* st){
//	while (*st != '\0'){
//		if (*st == c)
//			return 1;
//		else
//			st++;
//	}
//	return 0;
//}

//递减运算符简化程序代码

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

//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	int num, tmp;
//
//	printf("要输入多少个整数:");
//	scanf("%d", &num);
//
//	while (i < num) {
//		printf("No.%d:", ++i);
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("合计值: %d\n", sum);
//	printf("平均值: %.2f\n", (double)sum / num);
//
//	return 0;
//}

//int main(void)
//{
//	int i, no;
//
//	printf("请输入一个正整数:");
//	scanf("%d", &no);
//
//	for (i = 0; i <= no; i++)
//		printf("%d", i);
//	putchar('\n');
//
//	return 0;
//
//	//从0开始递增到输入的数字
//}

//int main(void)
//{
//	int i, no;
//
//	printf("请输入一个正整数:");
//	scanf("%d", &no);
//
//	for (i = 1; i <= no; i++)
//		putchar('*');
//	putchar('\n');
//
//	return 0;
//}

//int main(void)
//{
//	int i;
//	int sum = 0;
//	int num, tmp;
//
//	printf("输入多少个整数:");
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++){
//		printf("No.%d:", i + 1);
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//
//	printf("合计值: %d\n", sum);
//	printf("平均值: %.2f\n", (double)sum / num);
//
//	return 0;
//}

//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 9; i++){
//		for (j = 1; j <= 9; j++)
//			printf("%3d", i * j);
//		putchar('\n');
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int cont;
//
//	do{
//		int num, i;
//
//		do{
//			printf("请输入一个非负整数:");
//			scanf("%d", &num);
//			if (num < 0)
//				puts("\a请不要输入负整数。");
//		} while (num < 0);
//
//		for (i = 1; i <= num; i++)
//			putchar('*');
//		putchar('\n');
//
//		printf("是否继续执行? 【Yes...0/No...9】:");
//		scanf("%d", &cont);
//	} while (!cont);
//
//	return 0;
//}

//int main(void)
//{
//	int i, j;
//	int width, height;
//
//	puts("让我们来描绘一个长方形。");
//	printf("宽:");		scanf("%d", &width);
//	printf("高:");		scanf("%d", &height);
//
//	for (i = 1; i <= height; i++){
//		for (j = 1; j <= width; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int i, j, ln;
//
//	printf("三角形有几层:");
//	scanf("%d", &ln);
//
//	for (i = 1; i <= ln; i++){
//		for (j = 1; j <= i; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int i, j, ln;
//
//	printf("三角形有几层:");
//	scanf("%d", &ln);
//
//	for (i = 1; i <= ln; i++){
//		for (j = 1; j <= ln - i; j++)
//			putchar(' ');
//		for (j = 1; j <= i; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}

//#define SIZE 80
//
//char* string_in(char* st, char* sub);
//
//int main(int argc, char *argv[]){
//	char main_string[SIZE], sub[SIZE];
//	char *p = NULL;
//	printf("Enter a String as main string(blank to quit.): ");
//	fgets(main_string, SIZE, stdin);
//	printf("Enter a sub string to find in main :");
//	fgets(sub, SIZE, stdin);
//	while (*main_string != '\n'){
//		p = string_in(main_string, sub);
//		printf("Done!\nNow the position of sub string is:");
//		printf("%p\n", p);
//		printf("Anther? Enter a String as main string (blank to quit.): ");
//		fgets(main_string, SIZE, stdin);
//		printf("Enter a sub string to find in main :");
//		fgets(sub, SIZE, stdin);
//	};
//	return 0;
//}
//
//char* string_in(char* st, char* sub){
//	int count = 0;
//	int src_len = strlen(sub);
//	while (*st != '\0' && count < src_len){
//		if (*(st + count) == *(sub + count)){
//			count++;
//		}
//		else{
//			count = 0;
//			st++;
//		}
//	}
//	if (count == src_len) return st;
//	else return NULL;
//}

//#define SIZE 80
//
//char* trim_str(char* st);
//
//int main(int argc, char *argv[]){
//	char test_string[SIZE];
//
//	char *p = NULL;
//	printf("Enter a string (blank to quit.): ");
//	fgets(test_string, SIZE, stdin);
//	while (*test_string != '\n'){
//		p = trim_str(test_string);;
//		printf("Done!\nNow the trim string is :");
//		printf("%s\n", test_string);
//		printf("Anther? Enter a string (blank to quit.):");
//		fgets(test_string, SIZE, stdin);
//	};
//	return 0;
//}

//char* trim_str(char* st){
//	char* head = st;
//	int count = 0;
//	while (*st != '\0'){
//		if (*st != ' '){
//			*head++ = *st++;
//		}
//		else{
//			st++;
//			count++;
//		}
//	}
//	while (count--) *head++ = '\0';
//	return st;
//}

//#define SIZE 80
//#define NUMBER 5
//
//void show_menu(void);
//void input_string(int number, char st[][SIZE]);
//void print_original(int number, char st[][SIZE]);
//void print_ascii(int number, char st[][SIZE]);
//void print_length(int number, char st[][SIZE]);
//void print_words(int number, char st[][SIZE]);
//void sort_order(int number, int order[][2]);
//int get_word_length(char *input);
//
//int main(int argc, char *argv[]){
//	char test[NUMBER][SIZE];
//	int selected;
//	input_string(NUMBER, test);
//	show_menu();
//	scanf("%d", &selected);
//	while (selected != 5){
//		switch (selected){
//		case 1: print_original(NUMBER, test); break;
//		case 2: print_ascii(NUMBER, test); break;
//		case 3: print_length(NUMBER, test); break;
//		case 4: print_words(NUMBER, test); break;
//		case 5: break;
//		default:
//			printf("Error select, retry!\n");
//		}
//		show_menu();
//		scanf("%d", &selected);
//	}
//	printf("All done, bye.");
//}
//
//
//void show_menu(){
//	printf("==============================================================\n");
//	printf("1) print original strings.   2) print string by ascii order\n");
//	printf("3) printf string by length.  4) print string by ascii order\n");
//	printf("5) quit.\n");
//	printf("==============================================================\n");
//}
//
//void input_string(int number, char st[][SIZE]){
//	printf("Please input 5 strings serperate by enter.\n");
//	for (int i = 0; i < number; i++){
//		fgets(st[i], SIZE, stdin);
//	}
//}
//
//void print_original(int number, char st[][SIZE]){
//	printf("print 5 strings in original mode.\n");
//	for (int i = 0; i < number; i++){
//		printf("%d. %s", i, st[i]);
//	}
//}
//void print_ascii(int number, char st[][SIZE]){
//	printf("print 5 strings in ascii mode.\n");
//	int order[number][2];
//	for (int i = 0; i < number; i++){
//		order[i][0] = i;
//		order[i][1] = st[i][0];
//	}
//	sort_order(number, order);
//	for (int i = 0; i < number; i++){
//		printf("ASCII No.%d. %s", i, st[order[i][0]]);
//	}
//}
//
//void print_length(int number, char st[][SIZE]){
//	printf("print 5 strings in length mode.\n");
//	int order[number][2];
//	for (int i = 0; i < number; i++){
//		order[i][0] = i;
//		order[i][1] = strlen(st[i]);
//	}
//	sort_order(number, order);
//	for (int i = 0; i < number; i++){
//		printf("LENGTH No.%d. %s", i, st[order[i][0]]);
//	}
//}
//void print_words(int number, char st[][SIZE]){
//	printf("print 5 strings in words mode.\n");
//	int order[number][2];
//	for (int i = 0; i < number; i++){
//		order[i][0] = i;
//		order[i][1] = get_word_lenth(st[i]);
//	}
//	sort_order(number, order);
//	for (int i = 0; i < number; i++){
//		printf("WORDS No.%d. %s", i, st[order[i][0]]);
//	}
//}
//
//void sort_order(int number, int order[][2]){
//	int temp[2];
//	for (int i = 0; i < number - 1; i++){
//		for (int j = 0; j < number - 1 - i; j++){
//			if (order[j][1] > order[j + 1][1]){
//				temp[0] = order[j][0];
//				temp[1] = order[j][1];
//				order[j][0] = order[j + 1][0];
//				order[j][1] = order[j + 1][1];
//				order[j + 1][0] = temp[0];
//				order[j + 1][1] = temp[1];
//			}
//		}
//	}
//}
//
//int get_word_length(char *input){
//	char *in = input;
//	int length = 0;
//	while (isalpha(*in) == 0) in++;
//	while (isalpha(*in) != 0){
//		in++;
//		length++;
//	}
//	return length;
//}

//#define SIZE = 256
//
//int check_words(char* input);
//int check_upper(char* input);
//int check_lower(char* input);
//int check_punct(char* input);
//int check_digit(char* input);
//int main(int argc, char *argv[]){
//	char input[SIZE];
//	int i = 0;
//	while ((input[i++] = getchar()) != EOF){
//		if (i >= SIZE){
//			printf("Over flowed.\n");
//			break;
//		}
//	}
//
//	printf("Hello you input complete.\nNow let's counting.\n");
//	printf("Input words %d.\n", check_words(input));
//	printf("Input upper char %d.\n", check_upper(input));
//	printf("Input loewer char %d.\n", check_lower(input));
//	printf("Input punct char %d.\n", check_punct(input));
//	printf("Input digital  %d.\n", chech_digit(input));
//}
//
//int check_words(char * input){
//	int count = 0;
//	int start = 0;
//	while (*input != EOF){
//		if (isalpha(*input) == 0 && start == 0){
//			input++;
//		}
//		else if (isalpha(*input == 0 && start == 1)){
//			input++;
//			count++;
//			start = 0;
//		}
//		else if (isalpha(*input) != 0){
//			input++;
//			start = 1;
//		}
//	}
//	if (start == 1)count++;
//	return count;
//}
//
//int check_upper(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (isupper(*input++) != 0)count++;
//	}
//	return count;
//}
//int check_lower(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (islower(*input++) != 0)count++;
//	}
//	return count;
//}
//int check_punct(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (ispunct(*input++) != 0)count;
//	}
//	return count;
//}
//
//int chech_digit(char* input){
//	int count = 0;
//	while (*input != EOF){
//		if (isdigit(*input++) != 0)count++;
//	}
//	return count;
//}