#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main(void)
//{
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;
//	printf("               cheeta  tarzan    jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane); //68 68 68
//
//	return 0;
//}

//int main(void)
//{
//	int num = 1;
//
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num); //加本身空左边空四格和空六格
//		num = num + 1;   //1+1=2 再返回去
//	}
//	return 0;
//}

//#define SQUARES 64
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("square    grains      total    ");
//	printf("fraction of \n");
//	printf("         added       grains    ");
//	printf("world total\n");
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//		total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//			total, total / CROP);
//	}
//	printf("That's all.\n");
//
//	return 0;
//
//}

//演示除法
//int main(void)
//{
//	printf("integer division:  5/4   is %d \n", 5 / 4);
//	printf("integer division:  6/3   is %d \n", 6 / 3);
//	printf("integer division:  7/4   is %d \n", 7 / 4);
//	printf("floating division:  7./4.   is %1.2f \n", 7. / 4.);  //两个数点都加在数字后面结果一样
//	printf("mixed division:    7./4  is %l.2f \n", 7. / 4);    //加在前面也是一样
//
//	return 0;
//
//}

int main(void)
{
	int butter;
	int SCALE = 2.0;
	int n = 6.0;

	butter = 25.0 + 60.0 * n / SCALE;
	printf("%d\n", butter);

	return 0;
	

}



































