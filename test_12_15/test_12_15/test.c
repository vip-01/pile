#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//typedef struct{
//	int id;
//	char fname[20];
//	char lname[20];
//	int start_num;
//	int hit_num;
//	int base_num;
//	int RBI;
//	float BABIP;
//}PLAYER;
//
//
//PLAYER player_list[19] = {0};
////定义结构模板和结构数组
//
//void read_data(PLAYER list[], FILE* fp);
//
//void set_babip(PLAYER list[]);
//
//void get_info(PLAYER list[]);
////打印结构数组信息
//
//int main(int argc, char *argv[]){
//	FILE *fp;
//	if ((fp = fopen("data.txt", "r")) == NULL)
//	{
//		printf("Can't open %s\n", "data.txt");
//		exit(EXIT_FAILURE);
//	}
//
//	read_data(player_list, fp);
//	set_babip(player_list);
//	get_info(player_list);
//	fclose(fp);
//	return 0;
//}
//
//void read_data(PLAYER list[], FILE* fp){
//	if (fp == NULL){
//		printf("Cant not open the file. \n");
//		exit(EXIT_FAILURE);
//	}
//	int id, start_num, hit_num, base_num, RBI;
//	float BABIP;
//	char fname[20], lname[20];
//	int read_count = 1;
//	while (1){
//		read_count = fscanf(fp, "%d %s %s %d %d %d %d", &id, fname, lname, 
//			&start_num, &hit_num, &base_num, &RBI);
//		if (read_count < 7)break;
//
//		strcpy(list[id].fname, fname);
//		strcpy(list[id].lname, lname);
//		list[id].id = id;
//		list[id].start_num += start_num;
//		list[id].hit_num += hit_num;
//		list[id].base_num += base_num;
//		list[id].RBI += RBI;
//	}
//}
//
//void set_babip(PLAYER list[]){
//	for (int i = 0; i < 19; i++){
//		list[i].BABIP = (float)list[i].hit_num / (float)list[i].start_num;
//	}
//}
//
//void get_info(PLAYER list[]){
//	printf("ID: FIRST_NAME.LAST_NAME START HIT_NUM BASE_NUM RBI BABIP\n");
//	for (int i = 0; i < 19; i++){
//		printf("%2d %10s.%-10s %5d %5d %7d %6d %.2f\n", list[i].id, list[i].fname,
//			list[i].lname, list[i].start_num, list[i].hit_num, list[i].base_num,
//			list[i].RBI, list[i].BABIP);
//	}
//}

//这里
//struct sezt{
//	int id;
//	int booked;
//	char fname[20];
//	char lname[20];
//}list[12] = {0};
//
//void show_menu(void);
//void get_empty(struct seat list[]);
//显示空座位数量
//void show_empty(struct seat list[]);
//显示空余座位的编号信息
//void show_booked(struct seat list[]);
//显示已经预定的座位信息和客户信息
//void book_seat(struct seat list[]);
//预定座位
//void cancel_book(struct seat list[]);
//取消预订
//
//int main(int argc, char * argv[]){
//	char selected;
//	show_menu();
//	while ((selected = getchar()) != 'f'){
//		switch (selected){
//		case 'a':
//			get_empty(list);
//			break;
//		case 'b':
//			show_empty(list);
//			break;
//		case 'c':
//			show_booked(list);
//			break;
//		case 'd':
//			book_seat(list);
//		case 'e':
//			book_seat(list);
//			break;
//		default:
//			break;
//		}
//		while (getchar() != '\n') continue;
//		show_menu();
//	}
//	return 0;
//}
//
//void show_menu(void){
//	puts("To choose a function, enter its letter label: ");
//	puts("a) Show number of empty seats ");
//	puts("b) Show list of empty seats ");
//	puts("c) Show alphabetical list of seats ");
//	puts("d) Assign a customer to a seat assignment ");
//	puts("e) Delete a seat assignment ");
//	puts("f) Quit ");
//}
//
//void get_empty(struct seat list[]){
//	int sum = 0;
//	for (int i = 0; i < 12; ++i){
//		if (list[i].booked == 0) sum++;
//	}
//	printf("There are %d seats empty\n", sum);
//}
//
//void show_empty(struct seat list[]){
//	printf("Empty list:");
//	for (int i = 0; i < 12; ++i){
//		if (list[i].booked == 0)
//			printf("%d ", (i + 1));
//	}
//	putchar('\n');
//}
//
//void show_booked(struct seat list[]){
//	struct seat* ptstr[12];
//	for (int i = 0; i < 12; i++){
//		ptstr[i] = &list[i];
//	}
//	int top, seek;
//	struct seat* temp;
//	for (top = 0; top < 12 - 1; top++){
//		for (seek = top + 1; seek < 12; seek++){
//			if (strcmp(ptstr[top]->fname, ptstr[seek]->fname) >0){
//				temp = ptstr[top];
//				ptstr[top] = ptstr[seek];
//				ptstr[seek] = temp;
//			}
//		}
//	}
//	puts("Alphabetical list:");
//	for (int i = 0; i < 12; ++i){
//		if (ptstr[i]->booked == 1){
//			printf("Seat No:%d book by %s.%s\n", (i + 1), ptstr[i]->fname, ptstr[i]->lname);
//		}
//	}
//}
//void book_seat(struct seat list[]){
//	int id;
//	char fname[20], lname[20];
//	show_empty(list);
//	puts("Please select the seat:");
//	scanf("%d", &id);
//	if (list[id - 1].booked == 1){
//		puts("Error selected.");
//		return;
//	}
//	list[id - 1].id = id;
//	puts("Please input you FIRST_NAME LAST_NAME.");
//	scanf("%s %s", fname, lname);
//	strcpy(list[id].fname, fname);
//	strcpy(list[id].lname, lname);
//	list[id - 1].booked = 1;
//	puts("Booked!");
//}
//
//void cancel_book(struct seat list[]){
//	show_booked(list);
//	int id;
//	puts("Please select the seat to cancel:");
//	scanf("%d", &id);
//	if (list[id - 1].booked == 0){
//		puts("Error selected.");
//		return;
//	}
//	list[id - 1].booked = 0;
//}

//void function_a(char c);
//void function_b(char c);
//void function_c(char c);
//
//int main(int argc, char * argv[]){
//	void(*pf[3])(char);
//	pf[0] = function_a;
//	pf[1] = function_b;
//	pf[2] = function_c;
//	char ch;
//	printf("a) Function A.   b) Function B.  c)Function C. q)Quit\n");
//	printf("Enter a, b,c or q:");
//	scanf("%c", &ch);
//	while (ch != 'q')
//	{
//		while (getchar() != '\n') continue;
//		switch (ch)
//		{
//		case 'a':
//			pf[0](ch);
//			break;
//		case 'b':
//			pf[1](ch);
//			break;
//		case 'c':
//			pf[2](ch);
//			break;
//		default:
//			break;
//		}
//		printf("a) Function A.   b) Function B. c)Function C. q)Quit\n");
//		printf("Enter a,b,c or q:");
//		scanf("%c", &ch);
//	}
//	printf("Done!\n");
//	return 0;
//}
//
//void function_a (char c){
//	printf("This is function_a you select %c\n");
//}
//
//void function_b (char c){
//	printf("This is function_a you select %c\n");
//}
//
//void function_c(char c){
//	printf("This is function_a you select %c\n");
//}

//#define LENGTH 10
//void transform(double src[], double tar[], int n, double(*func)(double));
//
//int main(int argc, char * argv[])
//{
//	double source[LENGTH], target[LENGTH];
//	for (int i = 0; i < LENGTH; i++){
//		source[i] = i;
//	}
//	printf("The source data is:\n");
//	for (int i = 0; i < LENGTH; i++){
//		printf("%5g", source[i]);
//	}
//	printf("\n");
//
//	transform(source, target, LENGTH, sin);
//
//	printf("The target sin data si:\n");
//	for (int i = 0; i < LENGTH; i++){
//		printf("%g ", target[i]);
//	}
//	printf("\n");
//
//	transform(source, target, LENGTH, cos);
//
//	printf("The target sin data si:\n");
//	for (int i = 0; i < LENGTH; i++){
//		printf("%g ", target[i]);
//	}
//	printf("\n");
//}
//
//void transform(double src[], double tar[], int n, double(*func)(double)){
//	for (int i = 0; i < n; ++i){
//		tar[i] = func(src[i]);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%8d %8d %8d", a,b,c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pr;
//	scanf("%lf", &pr);
//	printf("%.12f", pr);
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%lf\n", a);
//	printf("%0.5lf\n", a);
//	printf("%e\n", a);
//	printf("%g\n", a);
//	return 0;
//}