#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ele[n];
	vector<int> a,b,c; 
	for(int i=0;i<n;++i){
		cin>>ele[i];
		if(ele[i]==1) a.push_back(i);
		else if(ele[i]==2) b.push_back(i);
		else if(ele[i]==3) c.push_back(i);
	}
	int m=min(a.size(),min(b.size(),c.size() ) );
	if(m==0){cout<<0; return 0;}
	cout<<m<<endl;
	for(int i=0;i<m;i++){
		cout<<a[i]+1<<" "<<b[i]+1<<" "<<c[i]+1<<endl;
	}
	
	
	return 0;
}