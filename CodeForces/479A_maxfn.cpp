#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,l;
	cin>>l>>m>>n;
	cout<<std::max(l+m+n,std::max(l*m*n,std::max(l+m*n,std::max(l*m+n,std::max(l*(m+n),(l+m)*n)))));
	return 0;	
}