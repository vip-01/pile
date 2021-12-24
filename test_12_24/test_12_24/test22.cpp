#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//int gcd(int n1, int n2)
//{
//	if (n2 == 0)
//		return n1;
//	return gcd(n2, n1%n2);
//}
//int lcm3(int a, int b, int c)
//{
//	int temp = a*b / gcd(a, b);
//	return temp*c/gcd(temp, c);
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", lcm3(a, b, c));
//	return 0;
//}

//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1;; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	int n = a.size(), m = b.size();
//	int i = 0, j = 0;
//	for (; i < n && j < m; i++)
//	{
//		if (a[i] == b[j]) j++;
//	}
//	cout << j << endl;
//
//	return 0;
//}


#include <math.h>

const int N = 1e6 + 10, mod = 1e9 + 7;
typedef long long ll;
ll f[N], res;
int n;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i < n; i++) f[i] = i;
	for (int i = n-1,k=1; i>= 1; i--, k++){
		res = (res + (ll) pow(i, 2) * f[k]) % mod;
	}
	printf("%lld", res);
	return 0;
}