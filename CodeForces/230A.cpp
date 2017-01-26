#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s,n,ip,min;
	cin>>s>>n;
	pair<int,int> x[n];
	for (int i = 0; i < n; ++i){
		cin>>x[i].first>>x[i].second;
	}
	sort(x,x+n);
	for (int i = 0; i < n; ++i){
		if(s<x[i].first){ cout<<"NO"; return 0;}
		else{
			s+=x[i].second;
		}
	}
	cout<<"YES";
	return 0;
}	
	
