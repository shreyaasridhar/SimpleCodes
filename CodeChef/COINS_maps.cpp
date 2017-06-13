#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
map<ull,ull> a;
ull exchange(ull n){
	if(a[n]!=0) return a[n];
	else{ 
		if(n==0) 
			return 0;
		else 
			return a[n]=max(n,(exchange(n/2)+exchange(n/3)+exchange(n/4)));
	}	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ull u,r;
	while(cin>>u){
	r=exchange(u);
	cout<<r<<endl;
	}
	map<ull,ull> :: iterator itr;
	 for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout  <<  '\t' << itr->first 
              <<  '\t' << itr->second << '\n';
    }
	return 0;
}