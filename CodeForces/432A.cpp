#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,k,x;
	cin>>n>>k;
	vector<int> a;
	for (int i = 1; i <= n; ++i){
		cin>>x;
		if(x+k>5);
		else a.push_back(x);
	}
	cout<<a.size()/3;
	return 0;

}