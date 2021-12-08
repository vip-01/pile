#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//int main(int argc, char *argv[]){
//	if (argc < 2){
//		printf("Error! not enough parameter to dispaly!\n");
//	}
//	else{
//		for (int i = argc; i > 1; i--){
//			printf("%s ", argv[i - 1]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(int argc, char *argv[]){
//	if (argc != 3){
//		printf("Error argument. please retry.\n");
//		return 0;
//	}
//	float f = atof(argv[1]);
//	int i = atoi(argv[2]);
//	float result = 1;
//	for (int k = 0; k < i; k++){
//		result = result*f;
//	}
//	printf("The %g 's %d power is %g\n", f, i, result);
//	return 0;
//}

//int myatoi(char* st);
//int main(int argc, char *argv[]){
//	char test[8];
//	printf("Enter a number of int:");
//	scanf("%s", test);
//	printf("you input int is: %d\n", myatoi(test));
//	return 0;
//}
//
//int myatoi(char* st){
//	int result = 0;
//	int bit_mark = 1;
//	int length = strlen(st);
//	for (int i = length; i > 0; i--){
//		if (isdigit(*st + i - 1) == 0){
//			printf("Error in character.\n");
//			return 0;
//		}
//		result += (*(st + i - 1) - '0')*bit_mark;
//		bit_mark *= 10;
//	}
//	return result;
//}

//#define SIZE 256
//void print_orig(char* st);
//void print_upper(char* st);
//void print_lower(char* st);
//
//int main(int argc, char *argv[]){
//	char c;
//	if (argc < 2){
//		c = 'p';
//	}
//	char c = argv[1][1];
//	char test[SIZE];
//	printf("Enter a string to convert:");
//	fgets(test, SIZE, stdin);
//	switch (c){
//	case 'p':
//	case 'P':
//		print_orig(test);
//		break;
//	case 'u':
//	case 'U':
//		print_upper(test);
//		break;
//	case 'l':
//	case 'L':
//		print_lower(test);
//		break;
//	}
//	return 0;
//}
//void print_orig(char* st){
//	printf("The original text is:\n%s", st);
//}
//void print_upper(char* st){
//	printf("The upper case text is:\n");
//	while (*st != EOF && *st != '\0'){
//		putchar(toupper(*st++));
//	}
//}
//void print_lower(char* st){
//	printf("The lower case text is:\n");
//	while (*st != EOF && *st != '\0'){
//		putchar(tolower(*st++));
//	}
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
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
//		for (i = 0; i< n; i++)
//		{
//			int j = 0;
//			for (j = 0; j< n; j++)
//			{
//				if (i + j < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <n - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i <n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j<n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}