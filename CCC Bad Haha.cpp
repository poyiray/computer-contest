#include<iostream>
#include<string>
using namespace std;

int main()
{
	long unsigned int t, k;
	cin >> t;
	string num[100];
	char temp;
	int index = 0;
	bool flag = false;
	for (long unsigned int i = 0; i < t; i++)
	{
		cin >> num[i] >> k;
		k >= num[i].length() ? k = num[i].length():k=k;
		for (long unsigned int j = 0; j < num[i].length() - 1; j++)
		{
			temp = num[i][j];
			for (long unsigned int x = j + 1; x < k; x++)
			{
				if (temp > num[i][x])
				{
					temp = num[i][x];
					index = x;
					flag = true;
				}
			}
			if (flag)
			{
				num[i][index] = num[i][j];
				num[i][j] = temp;
				flag = false;
			}
		}
	}

	for (long unsigned int i = 0; i < t; i++)
	{
		cout << atoi(num[i].c_str()) << endl;
	}

	return 0;
}