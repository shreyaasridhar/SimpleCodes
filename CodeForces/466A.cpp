#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int sum1=((n/m)*b)+((n%m)*a);
	int sum2=((n/m)+1)*b;
	int sum3=n*a;
	//cout<<sum1<<sum2;
	vector<int> v;
	v.push_back(sum1);
	v.push_back(sum2);
	v.push_back(sum3);
	int min=9898988989;
	 for(int i=0;i<3;i++)
    {
    	//cout<<v[i];
        if(v[i]<min)
        min=v[i];
    }
    cout<<min;
	return 0;
}