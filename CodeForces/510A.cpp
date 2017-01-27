#include <iostream>
using namespace std;

int main() {
	int n,m,ct=0;
	cin>>n>>m;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			if(i%2==0 &&( (i%4!=0 && j!=m) ||(j!=1 && i%4!=2))) cout<<".";
			else cout<<"#";
			if(j==m) cout<<endl;
		}
	}
	return 0;

}