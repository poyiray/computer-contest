#include<iostream>
#include<vector>
using namespace std;
//#include<vector>
//#include<string>
//#include<sstream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	vector<int> list;
//	string enter;
//	cin >> n >> m;
//	cin.get();
//	getline(cin, enter);
//	stringstream out(enter);
//	int number;
//	while (out >> number)
//	{
//		list.push_back(number); //ѧ����ѧ��
//	}
//
//	//����Ҫ���ҵ�id
//	vector<int> orders;
//	getline(cin, enter);
//	out.str(enter);
//	out.clear(); // ���״̬λ��ʹ�� out ��������ʹ��
//	while (out >> number)
//	{
//		orders.push_back(number); //ѧ����ѧ��
//	}
//
//	for (auto order : orders)
//	{
//		cout << list[order - 1] << endl;
//	}
//
//	return 0;
//}


int main()
{
	vector<int> a;
	int n, m, sum;//ע�ⲻҪ�����鿪����������
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		long x;
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> sum;
		cout << a[sum - 1] << endl;
	}
}