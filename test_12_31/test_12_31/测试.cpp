#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

string s;
string end;
int a, b;

int bfs()
{
	queue<string> q;
	q.push(s);
	unordered_map<string, int> dist;
	dist[s] = 0;
	int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };

	int t = b, b = a; a = t;

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
	if (s[i] == 'A') a = i;
	else if (s[i] == 'B')b = i;

	cout << bfs();
	return 0;
}