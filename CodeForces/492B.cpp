#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what(x) cout<< #x << " is " << x << endl;
#define eb emplace_back
using namespace std;
typedef long long ll;
typedef vector < ll > vll;
#define all(v) v.begin(),v.end()
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	ll n,l,x,i;
	float md=0;
	vll a;
	cin>>n>>l;
	while(cin>>x) a.eb(x);
	sort(all(a));
	rep(i,1,n){
		if(a[i]-a[i-1]>md) md=a[i]-a[i-1];
	}
printf("%.10f",max((float)md/2,(float)max(a[0]-0,l-a[n-1])));
}  