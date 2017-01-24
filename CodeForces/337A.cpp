#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,ct=0,md=999999;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	
	int x = sizeof(a)/ sizeof(a[0]);
    sort(a, a+x);
	for (int i = 0; i < m-n; i++){
		ct=a[i+n-1]-a[i];
		cout<<a[i+n-1]<<" "<<a[i]<<endl;
		if(md>ct) md=ct;
	}  
	cout<<md;
	return 0;	
}