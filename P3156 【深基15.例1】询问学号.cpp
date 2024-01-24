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
//		list.push_back(number); //学生的学号
//	}
//
//	//输入要查找的id
//	vector<int> orders;
//	getline(cin, enter);
//	out.str(enter);
//	out.clear(); // 清除状态位，使得 out 可以重新使用
//	while (out >> number)
//	{
//		orders.push_back(number); //学生的学号
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
	int n, m, sum;//注意不要把数组开在主函数里
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