#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))
//			switch (ch)
//		{
//			case 'a':
//				printf("argali, a wild sheep of Asin\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//		}
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		    case 'a':
//			case 'A': a_ct++;
//				      break;
//			case 'e':
//			case 'E': e_ct++;
//				      break;
//			case 'i':
//			case 'I': i_ct++;
//				      break;
//			case 'o':
//			case 'O': o_ct++;
//				      break;
//			case 'u':
//			case 'U': u_ct++;
//				      break;
//			default:  break;
//		}
//	}
//	printf("number of vowels:  A  E  I  O  U\n");
//	printf("              %4d %4d %4d %4d %4d\n",
//		a_ct, e_ct, i_ct, o_ct, u_ct);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int flag = 0;
//	while (((ch = getchar()) != '0') && ch != EOF)
//	{
//		if (ch = 'A')
//			flag++;
//		if (ch = 'B')
//			flag--;
//	}
//	if (flag > 0)
//		printf("A\n");
//	else if (flag < 0)
//		printf("B\n");
//	else
//		printf("E\n");
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int flag = 0;
//	while (((ch = getchar() != 'A')) && ch != EOF)
//	{
//		if (ch == 'A')
//			flag++;
//		if (ch == 'B')
//			flag--;
//	}
//	if (flag > 0)
//		printf("A\n");
//	else if (flag < 0)
//		printf("B\n");
//	else
//		printf("E\n");
//
//	return 0;
//}

int main()
{
	int ch = 0;
	int flag = 0;
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch == 'A')
			flag++;
		if (ch == 'B')
			flag--;
	}
	if (flag > 0)
		printf("A\n");
	else if (flag < 0)
		printf("B\n");
	else
		printf("E\n");

	return 0;
}








