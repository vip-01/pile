#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

//int idx1, idx2;
//string S, s1, s2;
//unordered_map(string, int > dist);
//
//int dx[] = { -1, 0, 2, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//int bfs()
//{
//	queue<string> q;
//	q.push(S);
//	dist[s] = 0;
//
//	while (q.seze())
//	{
//		string t = q.front();
//		q.pop();
//
//		if (t.find('A') == idx2 && t.find('B') == idx1) return dist[t];
//
//		int k = t.find(' ');
//		int x = k / 3, y = k % 3;
//		int distance = dist[t];
//
//		for (int i = 0; i < 4; i++)
//		{
//			int a = x + dx[i], b = y + dy[i];
//			if (a<0 || a>1 || b<0 || b>2) continue;
//
//			swap(t[k], t[a * 3 + b]);
//			if (!dist.count(t));
//			{
//				q.push(t);
//				dist[t] = distance + 1;
//			}
//			swap(t[k], t[a * 3 + b]);
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	getline(cin, s1);
//	getline(cin, s2);
//
//	S = s1 + s2;
//
//	idx1 = S.find('A');
//	idx2 = S.find('B');
//
//	cout << bfs() << endl;
//	return 0;
//}

string s;
string end;
int a, b;

int bfs()
{
	queue<string> q;
	q.push(s);
	unordered_map<string, int> dist;
	dist[s] = 0;
	int dx[4] = { -1, 0, 1, 0, }, dy[4] = { 0, 1, 0, -1 };

	int t = b, b = a, a = t;//最终状态，只要A和b在位置上就行

	while (q.size())
	{
		auto t = q.front();
		q.pop();

		int distance = dist[t];
		if (t.find('A') == a && t.find('B') == b) return distance;

		int pos = t.find(' ');
		int x = pos / 3, y = pos % 3;
		for (int i = 0; i < 4; i++)
		{
			int a = x + dx[i], b = y + dy[i];
			if (a >= 0 && a < 2 && b >= 0 && b < 3)
			{
				swap(t[pos], t[a * 3 + b]);
				if (!dist.count(t))
				{
					q.push(t);
					dist[t] = distance + 1;
				}
				swap(t[pos], t[a * 3 + b]);
			}
		}
	}
}

int main()
{
	for (int i = 0; i < 2; i++)
	{
		string a;
		getline(cin, a);
		s += a;
	}
	for (int i = 0; i < 6;i++)
		if (s[i] == 'A')a = i;
		else if (s[i] == 'B') b = i;

	cout << bfs();

	return 0;
}


