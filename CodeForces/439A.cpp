#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	int n,d,x,j;
	cin>>n>>d;
	vector<int> t;
	for(int i=0;i<n;i++){cin>>x; t.push_back(x);}
	int sum=accumulate ( t.begin(),t.end(),0);
    sum+=(n-1)*10;
    j=(n-1)*2;
    if(sum>d){ cout<<-1; return 0;}
    else cout<<j+((d-sum)/5);

	return 0;

}