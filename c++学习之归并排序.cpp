#include<bits/stdc++.h>
using namespace std;

int n;
int q[100010];
int tmp[100010];

void merge_sort(int l, int r)
{	//首先清楚merge_sort()函数是干什么的：将数组q的[l,r]范围的元素排序
	//递归中止条件,即:只有一个元素，肯定是排好的
	if (l >= r) return;

	int mid = (l + r) >> 1;  //找中间元素，这个必须是中间的，于快速排序不同

	//mid将数组分成两段，即[l,mid] [mid+1,r]，套用最上方的定义，即分别对两段区间排序
	merge_sort(l, mid);
	merge_sort(mid + 1, r);

	//执行到这里，已经排序完毕，我现在得到的是[l,mid] [mid+1,r]两端已经排序的数组
	//因此现在的问题就转化为给定两个有序数组，合并成一个有序数组
	int k = 0, i = l, j = mid + 1;  //k是t数组的下标，负责录入排序后的数组，i指向第一个数组，j指向第二个数组
	while (i <= mid && j <= r)  //按顺序录入，只要有一个数组录完就停
	{
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else tmp[k++] = q[j++];
	}

	//这里不知道哪个数组录完，索性直接遍历两个数组
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= r) tmp[k++] = q[j++];

	//最后，将完成的t数组覆盖到原数组q上
	//现在，q数组的录入其实是覆盖，因此i从l到r
	//t数组却是一直从0开始的，因此j=0
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
