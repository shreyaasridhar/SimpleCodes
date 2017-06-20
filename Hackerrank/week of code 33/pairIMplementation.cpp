#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef pair < ll , ll > pr;
typedef vector < int > vi;
typedef vector < ll > vll;
#define all(v) v.begin(),v.end()
#define MAX  1000000000
bool c[MAX];
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
    ll t,x=0,k;
    cin>>t;
    pr n[t];
    rep(k,0,t){
    	cin>>n[k].ff>>n[k].ss;
    	x=max(x,n[k].ff);
    	x=max(x,n[k].ss);
    }

    for(ll i=2; i<x; ++i)
        for(ll j=i+i; j<=x; j+=i)
            if(!c[j])
                c[j] = true;
                
    rep(k,0,t){
    for(ll i=n[k].ff; i<=n[k].ss; ++i)
        if(!c[i])
            cout<<i<<endl;
	   cout<<endl;        
	}
}  	