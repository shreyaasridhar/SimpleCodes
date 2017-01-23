#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	int no,n,max=0,min=100000,p=2567,q;
	vector<int> x;
	cin>>no;
	while(cin>>n)
	x.push_back(n);
	for (int i = 0; i < x.size(); i++){
    if (x[i] < min)
       min = x[i];
	if (x[i] > max)
       max = x[i];
	}  
	for (int i = 0; i < x.size(); i++){
		if(x[i]==max && p==2567) p=i;
		if(x[i]==min) q=i;
	}
	int res=p+no-1-q;
	if(p > q) res-=1;
	cout<<res;
	return 0;
}