#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n,k,o;
	cin>>n>>k;
	o = (n%2==0)? n/2: n/2+1;
	if(k>o) cout<<(k-o)*2;
    else cout<<(2*k)-1;
	
	return 0;
}