#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define MAX 10000
bool c[MAX];
"""int main()
{
    int n;
    cin>>n;
    for(int i=2; i<n; ++i)
        for(int j=i+i; j<=n; j+=i)
            if(!c[j])
                c[j] = true;
    for(int i=1; i<=n; ++i)
        if(!c[i])
            cout<<i<<" ";
    return 0;
}"""
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	for(ll i=2;i<n;i++)
		for(ll j=i*i;j<n;j*i)
			if(!c[j])
                c[j] = true;
    for(int i=1; i<=n; ++i)
        if(!c[i])
            cout<<i<<" ";
	return 0;
}
