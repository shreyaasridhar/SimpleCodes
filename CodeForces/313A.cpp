#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin>>n;
	if(n>=0){ cout<<n; return 0;}
	int o=n%10;
	int t=(n/10)%10;
	if(abs(o)>abs(t))	n=n/10;
	else n=(n/100)*10+(o);
	cout<<n;
	return 0;
}