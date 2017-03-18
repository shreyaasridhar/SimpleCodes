#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	for (int i = 0; i < t; ++i){
		cin>>n;
		int s=0,f=0,sc=1,x;
		while(f<n){
			if(f%2==0){
                //cout<<f;
				s+=f;
			}
			x=f;
			f=sc;
			sc+=x;
		}
		cout<<s<<endl;
	}
}