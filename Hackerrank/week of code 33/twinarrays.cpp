#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef set<ll> sll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef set<int> si;
#define fr(i,x,y) for(i = x; i < y ; ++i)
#define rfr(i,x,y) for(i = x; i >= y ; --i)
#define getpv(i,x,y,v,a,b) fr(i,x,y){cin>>a; cin>>b; v.pb(mp(a,b));}
#define getv(i,x,y,v,a) fr(i,x,y){cin>>a; v.pb(a);}
#define gets(i,x,y,s,a) fr(i,x,y){cin>>a; s.insert(a);}
#define binary(a,k) bitset<k>(a)
#define to_binary(a,k) bitset<k>(a).to_string()
#define to_decimal(a,k) bitset<k>(a).to_ulong()
ll n,t,s,a1,a2,b1,b2,d1,d2;
int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vll a,b;
        cin>>n;
        getv(s,0,n,a,t);
        getv(s,0,n,b,t);
        auto iter1 = min_element(a.begin(), a.end());
        a1 = *iter1;
        d1 = distance(a.begin(),iter1);
        auto iter2 = min_element(b.begin(), b.end());
        b1 = *iter2;
        d2 = distance(b.begin(),iter2);
        s = a1 + b1 ;
        if (d1 == d2)
        {
                a2 = 100000;
                b2 = 100000;
                for (int i = 0; i < n; ++i)
                {
                        if (a[i]<a2 and i!=d1)
                                a2 = a[i];
                }
                for (int i = 0; i < n; ++i)
                {
                        if (b[i]<b2 and i!=d2)
                                b2 = b[i];
                }
                s = min(a1+b2, a2+b1);
        }
        cout<<s;
        return 0;
}