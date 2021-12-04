#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return  (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 4);
//
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//两字符串作比较
//int main()
//{
//	const char* p1 = "abczdef"; //大于0的数
//	char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = p1;
//	char *s2 = p2;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur; //找到了子串
//		}
//		cur++;
//	}
//	return NULL; //找不到子串
//}
//
//int main()
//{
//	char *p1 = "abbbcdef";
//	char *p2 = "bbc";
//	char* ret = strstr(p1, p2); //通过strstr函数来
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char*p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr); //切割buf中的字符串
//
//	char*ret = strtok(arr, p); //演示：从@切割打印出zpw
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);  //演示：返回遇到zpw后的\0再走后面的bitedu
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);  //演示：从.处切割拿到点后面的tech
//	printf("%s\n", ret);
//
//	return 0;              //结果为zpw bitedu  tech
//}

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char*p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//1 - Operation not permitted
//errno是一个全局的错误码的变量
//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//int main()
//{
//	char*str = strerror(errno);
//	printf("%s\n", str);
//
//	return 0;
//}

//引头文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");  //test.txt是文件名，r是打开文件
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));  //如果没有就返回错误的信息告知
//	}
//	else
//	{
//		printf("open file success\n");  //有就打印这一句话
//	}
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//};

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //把12345放到34567里面
//	int i = 0;
//	my_memmove(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;                           //结果为：12121218910
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3)); //arr3拷贝到arr4中
//
//	return 0;
//}

//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memmove(arr3 + 2, arr3, 20);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//
//	return 0;
//}

//#define MSG "I am a symbolic string constant."
//#define MAXLENGTH 81
//int main()
//{
//	char words[MAXLENGTH] = "I am a string in an array.";
//	const char * pt1 = "Something is pointing at me.";
//	puts("Here are some strings:");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//
//	return 0;
//}

//int main()
//{
//	printf("%s, %p,%c\n", "We", "are", *"space farers");
//
//	return 0;
//}

//#define MSG "I'm special"

//int main()
//{
//	char ar[] = MSG;
//	const char *pt = MSG;
//	printf("address of \"I'm special\": %p \n", "I'm special");
//	printf("            address ar: %p\n", ar);
//	printf("            address pt: %p\n", pt);
//	printf("         address of MSG: %p\n", MSG);
//	printf("address of \"I'm special\": %p \n", "I'm special");
//
//	return 0;
//
//}
//#define SLEN 40
//#define LIM 5
//
//int main(void)
//{
//	const char *mytalents[LIM] = {
//		"Adding numbers swiftly",
//		"Multiplying accurately", "Stashing data",
//		"Following instructions to the letter",
//		"Understanding the C language"
//	};
//	char yourtalents[LIM][SLEN] = {
//		"Walking in a straight line",
//		"Sleeping", "Watching television",
//		"Mailiing letters", "Reading email"
//	};
//	int i;
//
//	puts("Let's compare talents.");
//	printf("%-36s %-25s\n", "My Talents", "Your Talents");
//	for (i = 0; i < LIM; i++)
//		printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
//	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
//		sizeof(mytalents), sizeof(yourtalents));
//
//	return 0;
//}
//int main(void)
//{
//	const char * mesg = "Don't be a fool!";
//	const char * copy;
//
//	copy = mesg;
//	printf("%s\n", copy);
//	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
//	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
//
//	return 0;
//}

//#define STLEN 81
//int main(void)
//{
//	char words[STLEN];
//
//	puts("Enter a string, please.");
//	gets(words);
//	printf("Your string twice:\n");
//	printf("words");
//	puts("Done.");
//
//	return 0;
//	//该函数用于显示字符串，并在末尾添加换行符
//}

#define STLEN 14
int main(void)
{
	char words[STLEN];
	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fquts()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Enter another string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fquts()):\n");\
	puts(words);
	fputs(words, stdout);
	puts("Done.");

	return 0;
}