#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	vector<int> e,o;
	for (int i = 1; i <= n; ++i){
		cin>>x;
		if(x%2==0) e.push_back(i);
		else o.push_back(i);
	}
	if(e.size()<o.size()) cout<<e[0];
	else cout<<o[0];
	return 0;

}