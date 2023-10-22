#include <bits/stdc++.h>
using namespace std;



int main()
{

	//string的基本使用
	string s1{ "123abc" };     //声明一个字符串变量s1
	cout << s1 << endl;

	string s2;    //声明但是没有初始化
	cin >> s2;   //可以用cin输入字符串

	string s3(s1);    //s3的值直接复制s1
	cout << s3 << endl;

	s1 += s2;   //字符串之间相加可以拼接
	cout << s1 << endl;
	cout << s1.size() << endl;    //.size()同vector，求字符串长度
	cout << *s1.begin() << ' ' << s1.front() << endl;     //.begin()返回值是指针，用*取址后得其第一个元素字符
	                                                      //.front()返回值为字符，返回的就是第一个元素字符，注意区分
	//也可以用迭代器输出字符串，缺点是麻烦，优点是能输出指定区间的字符串
	for (string::iterator it = s1.begin()+2; it != s1.end()-3; it++)
	{
		cout << *it;
	}
	cout << endl;


	

	return 0;
}


