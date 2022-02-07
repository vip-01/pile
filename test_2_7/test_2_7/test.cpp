#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
#include <vector>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
using namespace std;

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//µÚÈı±é
//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}
//6
//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}
//7
//int f(int x, int y){
//	if (x == 3 || x == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int f(int x, int y){
//	if (x == 3 || y == 4)return 1;
//	return f(x + 1, y) + f(x, y + 1);
//}
//
//int main(int argc, const char *argv[]){
//	cout << f(0, 0) << endl;
//	return 0;
//}

//int a[] = { 2, 3, 4, 5, 6, 7, 8, 10, 12, 14 };
//
//void check(vector<int> arr){
//	int r1=29+arr[0]+arr[1];
//	int r2=11+arr[2]+arr[3]+arr[4];
//	int r3=9+arr[5]+arr[6]+arr[7];
//	int r4=16+arr[8]+arr[9];
//
//	int c1 = 25 + arr[2] + arr[8];
//	int c2 = 15 + arr[0] + arr[3] + arr[5];
//	int c3 = 11 + arr[1] + arr[6] + arr[9];
//	int c4 = 14 + arr[4] + arr[7];
//
//	int l = 17 + arr[3] + arr[6];
//	int r = 24 + arr[5] + arr[8];
//
//	if (r1 == r2&&r2 == r3&&r3 == r4&&c1 == c2&&c2 == c3&&c3 == c4&&c4 == l&&l == r)
//		cout << arr[7] << endl;
//}
//
//int main(int argc, const char *argv[]){
//	vector<int> arr;
//	for (int i = 0; i < 10; ++i){
//		arr.push_back(a[i]);
//	}
//	do{
//		check(arr);
//	} while(next_permutation(arr.begin(), arr.end()));
//	return 0;
//}

int a[] = { 2, 3, 4, 5, 6, 7, 8, 10, 12, 14 };

void check(vector<int> arr){
	int r1 = 29 + arr[0] + arr[1];
	int r2 = 11 + arr[2] + arr[3] + arr[4];
	int r3 = 9 + arr[5] + arr[6] + arr[7];
	int r4 = 16 + arr[8] + arr[9];

	int c1 = 25 + arr[2] + arr[8];
	int c2 = 15 + arr[0] + arr[3] + arr[5];
	int c3 = 11 + arr[1] + arr[6] + arr[9];
	int c4 = 14 + arr[4] + arr[7];

	int l = 17 + arr[3] + arr[6];
	int r = 24 + arr[5] + arr[8];
	
	if (r1 == r2&& r2 == r3&&r3 == r4&&c1 == c2&&c2 == c3&&c3 == c4&&c4 == l&&l == r)
		cout << arr[7] << endl;
}

int main(int argc, const char *argv[]){
	vector<int> arr;
	for (int i = 0; i < 10; ++i){
		arr.push_back(a[i]);
	}
	do{
		check(arr);
	} while (next_permutation(arr.begin(), arr.end()));
	return 0;
}
