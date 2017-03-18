#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,kn,x=56984;
	long long a,v;
	cin>>n>>v;
	vector<int> af;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>kn;
		
		for (int j = 0; j < kn; ++j)
		{
			
			cin>>a;
			if(a<v && x!=i){
				x=i;
				af.push_back(i+1);
			}
		}
	}
	cout<<af.size()<<endl;
	for(int i=0;i<af.size();i++) cout<<af[i]<<" ";
	return 0;
}
