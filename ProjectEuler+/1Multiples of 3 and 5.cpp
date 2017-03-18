#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t,n,s;
	cin>>t;
	for (int i = 0; i < t; ++i){
		cin>>n;
		s=0;
		for (int j = 1; j < n; ++j){
			if(j%3==0 or j%5==0){
				s+=j;
			}
		}
		cout<<s<<endl;
	}
}