#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n,hit,t,x;
    cin>>n>>hit>>t;
    long h[n];
    int i;
    rep(i,0,n){
        cin>>x;
        h[i]=ceil((float)x/hit); //(x+hit-1/hit) needn't use float
    }
    sort(h,h+n);
    int sum=0;
    rep(i,0,n){
    if(t<h[i]) break;
    t-=h[i];
    sum+=1;
    }
    cout<<sum;

    return 0;
}
