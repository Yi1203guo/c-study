#include<bits/stdc++.h>
using namespace std;

int n;
int q[100010];

void quick_sort(int l, int r)
{
	//递归中止条件
	if (l >= r) return;

	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	//i从左到右  j从右到左  x随便选
	while (i < j)   //排序 j左边的都小于x，j右边的都大于x
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	//分别再次处理j左边的和j右边的
	quick_sort(l, j);
	quick_sort(j + 1, r);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> q[i];
	quick_sort(0, n - 1);
	for (int i = 0; i < n; i++) cout << q[i] << ' ';
}