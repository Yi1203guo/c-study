#include <bits/stdc++.h>
using namespace std;



int main()
{

	//string�Ļ���ʹ��
	string s1{ "123abc" };     //����һ���ַ�������s1
	cout << s1 << endl;

	string s2;    //��������û�г�ʼ��
	cin >> s2;   //������cin�����ַ���

	string s3(s1);    //s3��ֱֵ�Ӹ���s1
	cout << s3 << endl;

	s1 += s2;   //�ַ���֮����ӿ���ƴ��
	cout << s1 << endl;
	cout << s1.size() << endl;    //.size()ͬvector�����ַ�������
	cout << *s1.begin() << ' ' << s1.front() << endl;     //.begin()����ֵ��ָ�룬��*ȡַ������һ��Ԫ���ַ�
	                                                      //.front()����ֵΪ�ַ������صľ��ǵ�һ��Ԫ���ַ���ע������
	//Ҳ�����õ���������ַ�����ȱ�����鷳���ŵ��������ָ��������ַ���
	for (string::iterator it = s1.begin()+2; it != s1.end()-3; it++)
	{
		cout << *it;
	}
	cout << endl;


	

	return 0;
}


