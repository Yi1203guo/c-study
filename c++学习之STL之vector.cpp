#include <bits/stdc++.h>
using namespace std;



int main()
{

	//vector�Ļ���ʹ��
	//����   vector <��������> ��������
	vector <int> v;
	vector <int> a(10);   //����a����10��Ԫ��
	vector <int> b(10, 22);  //����b����10��ֵΪ22��Ԫ��
	vector <int> c[5];   //����һ��vector���͵�����c[]���൱��һ����ά����

	cout << v.size() << endl;    //.size()  ��ȡ����
//	cout << v[0] << endl;    //������[]����������ʣ�����[]�����б߽����籾�в��������
//	cout << v.at(0) << endl;    //��.at()����б߽��飬��������쳣
	cout << v.empty() << endl;   //.empty()  �Ƿ�Ϊ��


	//��ɾ����    
	v.push_back(9);
	v.push_back(8);
	//.push_back(n)  �ڱ�β���һ��Ԫ��n
	//.pop_back()   �ڱ�βɾ��һ��Ԫ��

	cout << v[0] << ' ' << v[1] << endl;

	v.pop_back();

	cout << v[0];

	v.push_back(3);
	v.push_back(6);
	cout << v.front() << ' ' << v.back() << endl;    //.front() ��һ��Ԫ��    .back() ���һ��Ԫ��

	cout << endl;
	cout << "----------------------------------------------" << endl;
	vector <int> m{ 1,2,3,4,5,6,7,8,9 };
	//��������      itΪָ�룬����ʱ��*itȡַ
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	//����һ��
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

	vector<int> q(m.begin() + 3, m.end() - 2);   //��m.begin() + 3��m.end() - 2������4��7    m.end()-2��m.end()ָ�����һ��Ԫ��
	for (vector <int>::iterator it = q.begin(); it != q.end(); it++)
	{
		cout << *it << ' ';
	}
	cout <<endl;


	reverse(m.begin(), m.end());  //��m�������ã�12345-��54321
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.insert(m.begin()+1, 3, -1);   //��m.begin()+1ǰ����3��-1
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.erase(m.begin() + 1);    //ɾ��һ��Ԫ��
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	m.erase(m.begin() + 1, m.end() - 1);    //ɾ������(������)
	for (vector <int> ::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	vector <int>::iterator it = find(m.begin(), m.end(), 2);    //find()  ����m.begin��m.end()�������Ƿ���9���Ԫ��
	                                                            //����У����ظ�Ԫ�صĵ�ַ�����û�У�����m.end()��ַ
	cout << *(it-1) << endl;



	return 0;
}


