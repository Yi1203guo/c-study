#include <bits/stdc++.h>
using namespace std;



int main()
{

	//vector的基本使用
	//定义   vector <数据类型> 容器名称
	vector <int> v;
	vector <int> a(10);   //容器a中有10个元素
	vector <int> b(10, 22);  //容器b中有10个值为22的元素
	vector <int> c[5];   //声明一个vector类型的数组c[]，相当于一个二维数组

	cout << v.size() << endl;    //.size()  获取长度
//	cout << v[0] << endl;    //可以用[]进行随机访问，但是[]不进行边界检查如本行操作会出错
//	cout << v.at(0) << endl;    //用.at()会进行边界检查，出错会抛异常
	cout << v.empty() << endl;   //.empty()  是否为空


	//增删操作    
	v.push_back(9);
	v.push_back(8);
	//.push_back(n)  在表尾添加一个元素n
	//.pop_back()   在表尾删除一个元素

	cout << v[0] << ' ' << v[1] << endl;

	v.pop_back();

	cout << v[0];

	v.push_back(3);
	v.push_back(6);
	cout << v.front() << ' ' << v.back() << endl;    //.front() 第一个元素    .back() 最后一个元素

	cout << endl;
	cout << "----------------------------------------------" << endl;
	vector <int> m{ 1,2,3,4,5,6,7,8,9 };
	//遍历容器      it为指针，遍历时用*it取址
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	//再玩一次
	for (vector <int> ::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	vector <int> d(m);
	for (vector <int> ::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	vector<int> q(m.begin() + 3, m.end() - 2);   //从m.begin() + 3到m.end() - 2，即从4到7    m.end()-2中m.end()指向最后一个元素
	for (vector <int>::iterator it = q.begin(); it != q.end(); it++)
	{
		cout << *it << ' ';
	}
	cout <<endl;


	reverse(m.begin(), m.end());  //将m容器倒置，12345-》54321
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.insert(m.begin()+1, 3, -1);   //在m.begin()+1前插入3个-1
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.erase(m.begin() + 1);    //删除一个元素
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.erase(m.begin() + 1, m.end() - 1);    //删除区间(闭区间)
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	vector <int>::iterator it = find(m.begin(), m.end(), 2);    //find()  查找m.begin到m.end()区间内是否有9这个元素
	                                                            //如果有，返回改元素的地址，如果没有，返回m.end()地址
	cout << *(it-1) << endl;



	return 0;
}


