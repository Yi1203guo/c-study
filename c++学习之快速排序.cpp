#include<bits/stdc++.h>
using namespace std;

int n;
int q[100010];

void quick_sort(int l, int r)
{
	//�ݹ���ֹ����
	if (l >= r) return;

	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	//i������  j���ҵ���  x���ѡ
	while (i < j)   //���� j��ߵĶ�С��x��j�ұߵĶ�����x
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	//�ֱ��ٴδ���j��ߵĺ�j�ұߵ�
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