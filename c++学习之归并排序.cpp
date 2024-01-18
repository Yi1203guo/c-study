#include<bits/stdc++.h>
using namespace std;

int n;
int q[100010];
int tmp[100010];

void merge_sort(int l, int r)
{	//�������merge_sort()�����Ǹ�ʲô�ģ�������q��[l,r]��Χ��Ԫ������
	//�ݹ���ֹ����,��:ֻ��һ��Ԫ�أ��϶����źõ�
	if (l >= r) return;

	int mid = (l + r) >> 1;  //���м�Ԫ�أ�����������м�ģ��ڿ�������ͬ

	//mid������ֳ����Σ���[l,mid] [mid+1,r]���������Ϸ��Ķ��壬���ֱ��������������
	merge_sort(l, mid);
	merge_sort(mid + 1, r);

	//ִ�е�����Ѿ�������ϣ������ڵõ�����[l,mid] [mid+1,r]�����Ѿ����������
	//������ڵ������ת��Ϊ���������������飬�ϲ���һ����������
	int k = 0, i = l, j = mid + 1;  //k��t������±꣬����¼�����������飬iָ���һ�����飬jָ��ڶ�������
	while (i <= mid && j <= r)  //��˳��¼�룬ֻҪ��һ������¼���ͣ
	{
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else tmp[k++] = q[j++];
	}

	//���ﲻ֪���ĸ�����¼�꣬����ֱ�ӱ�����������
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= r) tmp[k++] = q[j++];

	//��󣬽���ɵ�t���鸲�ǵ�ԭ����q��
	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> q[i];
	merge_sort(0, n - 1);
	for (int i = 0; i < n; i++) cout << q[i] << ' ';
}