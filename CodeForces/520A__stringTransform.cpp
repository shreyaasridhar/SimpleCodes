#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what(x) cout<< #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
using namespace std;
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	string s;
	int a[26]={0},flag=1,n,i;
	cin>>n;
	cin>>s;
	transform(all(s),s.begin(),::tolower);
	for (auto& it: s)  
		a[it%'a']=1;
	rep(i,0,26)
		if(a[i]==0){ flag=0;break;}	
	if(flag==0) cout<<"NO";
	else cout<<"YES";

}  