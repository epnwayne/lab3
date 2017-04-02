#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	ifstream read_in;
	read_in.open("file.in");
	vector<int> cows(9);
	int i,sum = 0;
	for(i = 0;i < 9;i++)
	{
		read_in >> cows[i];
	}
	sort(cows.begin(),cows.end());
	for(i = 8;i > 3;i--)
	{
		sum += cows[i];
	}
	cout << sum << endl;
}
