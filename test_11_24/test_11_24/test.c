#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int ch = 0;
//	while (scanf("%c\n", &ch) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while (~scanf("%c\n", &ch))
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}