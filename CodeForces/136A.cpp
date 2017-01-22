#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	vector<int> v;
	while(cin>>x){
	v.push_back(x);
	}
	int a[200];
	for(int i=0;i<v.size();i++){
		//cout<<i<<v[i]<<endl;
		a[v[i]-1]=i;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]+1<<" ";
	}
	return 0;
}
