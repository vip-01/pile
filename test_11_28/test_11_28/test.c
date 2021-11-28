#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//			printf("%d\n", 1);
//		else if (t == 0)
//			printf("%.1f\n", 0.5);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d%d%d", &a, &b, &c))
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a = b && a != c) || (a = c && a != b) || (b = c && b != a))
//			{
//				printf("¡°Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d%d%d", &a, &b, &c))
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b &&a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int h = 0;
//	int w = 0;
//	while (~scanf("%d%d", &w, &h))
//	{
//		double bmi = w / ((h / 100.0)*(h / 100.0));
//		if (bmi < 18.5)
//			printf("Underweight\n");
//		else if (bmi >= 18.5 && bmi <= 23.9)
//			printf("Normal\n");
//		else if (bmi>23.9 && bmi <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}

int main()
{
	float weight = 0.0;
	float hight = 0.0;
	while (scanf("%f %f", &weight, &hight) != EOF)
	{
		float bmi = weight / (hight*hight / 100 / 100);
		if (bmi < 18.5)
		{
			printf("Underweight\n");
		}
		else if (bmi >= 18.5 && bmi <= 23.9)
		{
			printf("Normal\n");
		}
		else if (bmi > 23.9 && bmi <= 27.9)
		{
			printf("Overweight\n");
		}
		else{
			printf("Obese\n");
		}
	}
	return 0;
}