#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,sum=0,ct=0;
	cin>>n>>m;
	if(n<m){
		cout<<-1;return 0;
	}
	s=(n/2)%m;
	if(s==0) cout<<n/2;
	else cout<<((n/2)+m-s);
	return 0;
}	
	
