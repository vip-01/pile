#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

//int main()
//{
//	//int num = 0;
//	//cout << num << endl;
//
//	int num = 0;
//	while (num < 10)
//	{
//		cout << num << endl;
//			num++;
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int max = 0;
//	while (n != 1){
//		if (n & 1){
//			n = n * 3 + 1;
//		}
//		else
//			n /= 2;
//		cout << n << endl;
//		max = max > n ? max : n;
//	}
//	cout << max << endl;
//	return 0;
//}

//int max = 0;
//int R(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else if (n % 2 == 0)
//	{
//		n = n / 2;
//		if (n > max)
//		{
//			max = n;
//		}
//		R(n);
//	}
//	else if (n % 2 == 1)
//	{
//		n = (n * 3 +1);
//		if (max < n)
//		{
//			max = n;
//		}
//		R(n);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	max = n;
//	R(n);
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	long long n, i, max;
//	scanf("%lld", &n);
//	max = n;
//
//	for (i = n; i > 0; i = n--){
//		while (i != 1){
//			if (i % 2 == 0){
//				i /= 2;
//			}
//			else{
//				i = i * 3 + 1;
//				if (i > max)
//					max = i;
//			}
//		}
//	}
//	printf("%lld", max);
//	return 0;
//}