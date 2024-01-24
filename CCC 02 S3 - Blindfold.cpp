#include<iostream>
#include<string>
#include<vector>
using namespace std;

int r, c, m;
char enter;
vector<char> moves;
vector<char> map;
vector<char> facing;
int direction = 0;

void printVector(vector<char>& v)
{
	for (auto val : v)
	{
		cout << val;
	}
	cout << endl;
}

void facingNorth()
{

}

void facingSouth()
{

}

void facingEast()
{

}

void facingWest()
{

}

int main()
{
	//------------init----------------//
	cin >> r;
	cin >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> enter;
			map.push_back(enter);
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> enter;
		moves.push_back(enter);
	}
	/*printVector(map);
	printVector(moves);*/
	//--------------------------------//

	for (int i = 0; i < r * c; i++)
	{
		facing.clear();
		if ((i - 1) % c >= 0 && map[i - 1] != 'X')
		{
			facing.push_back('w');
		}
		else if ((i + 1) % c <= c)
		{
			facing.push_back('e');
		}
		else if (i + c < map.size())
		{
			facing.push_back('n');
		}
		else if (i - c > map.size())
		{
			facing.push_back('s');
		}
	}
	
	return 0;
}