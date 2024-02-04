#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
const int N = 1e5;

int e[N], ne[N], idx, head;

/// <summary>
/// 初始化链表
/// </summary>
void init()
{
	idx = 0;
	head = -1;
}

/// <summary>
/// 在表头插入一个数值
/// </summary>
/// <param name="x">数值大小</param>
void insert(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
}

/// <summary>
/// 在表末尾添加一个数值
/// </summary>
/// <param name="x">数值大小</param>
void add_back(int x)
{
	e[idx] = x;
	ne[idx] = -1;
	idx++;
}

/// <summary>
/// 在n位置后插入一个x
/// </summary>
/// <param name="n">位置</param>
/// <param name="x">数值</param>
void add(int n, int x)
{
	e[idx] = x;
	ne[idx] = ne[n];
	ne[n] = ne[idx];
	idx++;
}

/// <summary>
/// 在n位置后删除x个元素
/// </summary>
/// <param name="n">位置</param>
/// <param name="x">元素个数</param>
void del(int n, int x)
{
	for (int i = 1; i <= x; i++)
	{
		ne[n] = ne[ne[n]];
	}
}

/// <summary>
/// 遍历链表
/// </summary>
void show()
{
	for (int i = head; i != -1; i = ne[i])
	{
		cout << e[i] << ' ';
	}
}

int main()
{
	int m;
	cin >> m;
	init();
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		if (i == 0)
		{
			e[i] = t;
			ne[i] = i + 1;
			head = 0;
		}
		e[i] = t;
		ne[i] = i + 1;
	}
	ne[m - 1] = -1;

	show();
}