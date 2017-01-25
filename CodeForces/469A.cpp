#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main(){
	int n,x,p;
	cin>>n;
	vector<int> vec;
	cin>>p;
	for (int i=0;i<p;i++){
		cin>>x;
		vec.push_back(x);
	}
	cin>>p;
	for (int i=0;i<p;i++){
		cin>>x;
		vec.push_back(x);
	}
	//for (int i=0;i<vec.size();i++) cout<<vec[i];
	sort(vec.begin(),vec.end() );
	vec.erase(unique ( vec.begin(),vec.end() ), vec.end());
	//cout<<vec.size();
	if(vec.size()==n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}