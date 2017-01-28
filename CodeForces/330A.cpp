#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r,c;
	char a;
	cin>>r>>c;
	vector<int> row, col;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin>>a;
			if (a=='S')
			{
				row.push_back(i);
				col.push_back(j);
			}
		}
	}
	
	return 0;
}
