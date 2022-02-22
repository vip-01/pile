#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <memory>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;

//char oriLights[5];
//char lights[5];
//char result[5];
//
//int GetBit(char c, int i)
//{
//	return (c >> i) & 1;
//}
//void SetBit(char &c, int i, int v)
//{
//	if (v){
//		c |= (1 << i);
//	}
//	else
//		c &= ~(1 << i);
//}
//void FlipBit(char &c, int i)
//{
//	c ^= (1 << i);
//}
//void QutputResult(int t, char result[])
//{
//	cout << "PUZZLE #" << t << endl;
//	for (int i = 0; i < 5; ++i){
//		for (int j = 0; j < 6; ++j){
//			cout << GetBit(result[i], j);
//			if (j < 5)
//				cout << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int t = 1; t <= T; ++t){
//		for (int i = 0; i < 5;++i)
//			for (int j = 0; j < 6; ++j){
//				int s;
//				cin >> s;
//				SetBit(oriLights[i], j, s);
//			}
//		for (int n = 0; n < 64; ++n){
//			 int switchs = n;
//			 memcpy(lights,oriLights, sizeof(oriLights));
//			 for (int i = 0; i < 5; ++i){
//				  result[i] = switchs;
//				  for (int j = 0; j < 6; j++){
//					  if (GetBit(switchs, j)){
//						  if (j>0)
//							  FlipBit(lights[i], j);
//						  FlipBit(lights[i], j);
//						  if (j < 5)
//							  FlipBit(lights[i], j + 1);
//					  }
//				 }
//				 if(i < 5)
//					 lights[i + 1] ^= switchs;
//				 switchs = lights[i];
//			}
//			if (lights[4] == 0){
//				OutputResult(t, result);
//				break;
//			 }
//		}
//	}
//	return 0;
//}

//int Factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n*Factorial(n - 1);
//}

//int N;
//int queenPos[100];
////用来存放算好的皇后位置。最左上角是(0,0)
//void NQueen(int k);
//int main()
//{
//	cin >> N;
//	NQueen(0);//从第0行开始摆皇后
//	return 0;
//}
//void NQueen(int k){//在0~k-1行皇后已经摆好的情况下，摆第k行及其后的皇后
//	int i;
//	if (k == N){//N个皇后已经摆好
//		for (i = 0; i < N; i++)
//			cout << queenPos[i] + 1 << " ";
//		cout << endl;
//		return;
//	}
//	for (i = 0; i < N; i++){//逐尝试第k个皇后的位置
//		int j;
//		for (j = 0; j < k; j++){
//			//和已经摆好的k个皇后的位置比较，看是否冲突
//			if (queenPos[j] == i ||
//				abs(queenPos[j] - i) == abs(k - j)){
//				break;//冲突，则测试下一个位置
//			}
//		}
//		if (j == k){//当前选的位置i不冲突
//			queenPos[k] = i;//将第k个皇后摆放在位置i
//			NQueen(k + 1);
//		}
//	}
//}
//#define N 100
//
//int a[N];
//int n;
//bool check();
//
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i]&1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}


//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//5
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//6
//#define N 100
//int n;
//bool check();
//int main(int argc, const char *argv){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//8
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] * 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char *argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

//10
//#define N 100
//int a[N];
//int n;
//bool check();
//int main(int argc, const char*argv[]){
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i){
//		scanf("%d", &a[i]);
//	}
//	int ans = 0;
//	while (1){
//		int t = a[0];
//		for (int i = 0; i <= n - 2; ++i){
//			a[i] -= a[i] / 2;
//			a[i] += a[i + 1] / 2;
//			if ((a[i] & 1) == 1){
//				ans++;
//				a[i]++;
//			}
//		}
//		a[n - 1] -= a[n - 1] / 2;
//		a[n - 1] += t / 2;
//		if ((a[n - 1] & 1) == 1){
//			ans++;
//			a[n - 1]++;
//		}
//		if (check()){
//			printf("%d", ans);
//			return 0;
//		}
//	}
//	return 0;
//}
//bool check(){
//	int t = a[0];
//	for (int i = 1; i < n; ++i){
//		if (a[i] != t)return false;
//	}
//	return true;
//}

