#include <bits/stdc++.h>
#define ll long long
using namespace std;
    
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,u,v,r;
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>u>>v;
	r=u+1;
	r+=(u+v)*(u+v+1)/2;
	cout<<r<<endl;
	}
	return 0;
}