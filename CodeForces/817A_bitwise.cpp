#include <bits/stdc++.h>
#define what(x) cout<< #x << " is " << x << endl;
using namespace std;
typedef long long ll;
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	ll x1,y1,x2,y2,x,y;
	cin>>x1>>y1>>x2>>y2>>x>>y;
	x2-=x1;
	y2-=y1;
	if(x2 % x != 0 || y2 % y != 0)
    cout << "NO" << endl;
    else if(((x2/x) & 1)  == ((y2/y) & 1))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
}  