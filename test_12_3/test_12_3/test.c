#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	/*i*//*nt len = my_strlen("abcdef");
//
//	printf("%d\n", len);
//
//	return 0;*/
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝stc指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	//返回目的空间的起始地址
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	//char arr2[] = { 'b', 'i', 't' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}

//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

int main()
{
	char* p1 = "abc";
	char* p2 = "abc";
	int ret = strcmp(p1, p2);

	printf("%d\n", ret);
}